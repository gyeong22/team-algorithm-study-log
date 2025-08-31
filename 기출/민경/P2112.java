package SWEA;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class P2112 {
    static int[][] arr;
    static int [] medicine;
    static int D, W, K;
    static boolean found;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        for(int test_case = 1; test_case <= T; test_case++){

            StringTokenizer st = new StringTokenizer(br.readLine());

            D = Integer.parseInt(st.nextToken());
            W = Integer.parseInt(st.nextToken());
            K = Integer.parseInt(st.nextToken());

            arr = new int[D][W];

            for(int i =0; i < D; i++){
                st = new StringTokenizer(br.readLine());
                for(int j =0; j < W; j++){
                    arr[i][j] = Integer.parseInt(st.nextToken());
                }
            }

            int answer = 0;
            if(!test()){
                for (int cnt = 0; cnt <= K; cnt++){
                    medicine = new int[cnt];
                    found = false;
                    combination(0, cnt, 0);
                    if (found){
                        answer = cnt;
                        break;
                    }
                }
            }

            System.out.printf("#%d %d\n", test_case, answer);
        }

    }

    public static void combination(int depth, int cnt, int start){
        if (found) return;

        if(depth == cnt){
            changeRow(0, cnt);
            return;
        }else{
            for(int i = start; i < arr.length; i++){
                medicine[depth] = i;
                combination(depth + 1, cnt, i + 1);
            }
        }

    }

    public static void changeRow(int idx, int cnt){
        if (found) return;

        if(idx == cnt){
            if(test()) found = true;
            return;
        }

        int r = medicine[idx];
        int [] backup = arr[r].clone();

        Arrays.fill(arr[r], 0);
        changeRow(idx + 1, cnt);

        if(found) {
            arr[r] = backup;
            return;
        }


        Arrays.fill(arr[r], 1);
        changeRow(idx + 1, cnt);

        arr[r] = backup;

    }

    public static boolean test(){
        if (K == 1) return true;

        for (int i =0; i < W; i++){
            int count =1;
            boolean check = false;
            for (int j = 0; j < D - 1; j++){
                if(arr[j][i] == arr[j + 1][i]) count++;
                else count = 1;
                if(count >= K) {
                    check = true;
                    break;
                }
            }
            if(!check) return false;
        }
        return true;
    }
}
