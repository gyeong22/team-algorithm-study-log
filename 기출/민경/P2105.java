package SWEA;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class P2105 {
    static int [][] arr;
    static int [][] deltas = {{1,1}, {-1, 1}, {-1, -1}, {1, -1}};
    static boolean [][] visited;
    static boolean [] eaten;
    static int N;
    static int max = 0;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        for (int test_case =1; test_case <= T; test_case++){
            N = Integer.parseInt(br.readLine());

            arr = new int[N][N];

            StringTokenizer st;
            for (int i =0; i < N; i++){
                st = new StringTokenizer(br.readLine());
                for (int j =0; j < N; j++){
                    arr[i][j] = Integer.parseInt(st.nextToken());
                    max = Math.max(max, arr[i][j]);
                }
            }

            eaten = new boolean[max + 1];
            max = -1;

            for (int i =0; i < N; i++){
                for (int j =0; j < N; j++){
                    visited = new boolean[N][N];

                    visited[i][j] = true;
                    eaten[arr[i][j]] = true;

                    dfs(j, i, new int[]{j, i}, 0, 1);

                    visited[i][j] = false;
                    eaten[arr[i][j]] = false;
                }
            }


            System.out.printf("#%d %d\n", test_case, max);

        }



    }

    public static void dfs(int x, int y, int [] dist, int dir, int count){
        //직진과 꺾기
        for (int d = 0; d < 2; d++){
            int ndir = dir + (d ==0 ? 0 : 1);
            if (ndir > 3) continue;

            int nx = x + deltas[dir][0];
            int ny = y + deltas[dir][1];

            if (nx == dist[0] && ny == dist[1]){
                if(ndir ==3 && count >= 4){
                    max = Math.max(max, count);
                    continue;
                }
            }

            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;

            if(visited[ny][nx] || eaten[arr[ny][nx]]) continue;

            visited[ny][nx] = true;
            eaten[arr[ny][nx]] = true;
            dfs(nx, ny, dist, ndir, count + 1);
            visited[ny][nx] = false;
            eaten[arr[ny][nx]] = false;


        }

    }




}
