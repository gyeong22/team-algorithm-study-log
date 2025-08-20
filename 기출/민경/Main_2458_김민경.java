import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.sql.Array;
import java.util.*;

public class Main {
    static List<List<Integer>> forward = new ArrayList<>();
    static List<List<Integer>> reverse = new ArrayList<>();

    static int N;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());


        for(int i =0; i <= N; i++){
            forward.add(new ArrayList<>());
            reverse.add(new ArrayList<>());
        }

        for(int i =0; i < M; i++){
            // a < b
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            forward.get(a).add(b);
            reverse.get(b).add(a);
        }

        int count =0;
        for(int i =1; i <= N; i++){
            int value = calcuate(forward, i) + calcuate(reverse, i);
            if(value == N - 1)
                count++;
        }

        System.out.println(count);

    }

    public static int calcuate(List<List<Integer>> students, int index){
        Queue<Integer> queue = new LinkedList<>();
        boolean [] visited = new boolean[N + 1];
        queue.add(index);
        visited[index] = true;

        int count =0;
        while(!queue.isEmpty()){
            int current = queue.poll();

            for (int next : students.get(current)){
                if(!visited[next]){
                    visited[next] = true;
                    queue.offer(next);
                    count++;
                }

            }

        }

        return count;
    }
}
