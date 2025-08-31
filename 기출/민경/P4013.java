package SWEA;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class P4013 {

    static int [][] arr;
    public static void main(String[] args) throws IOException{
        // TODO Auto-generated method stub
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        for(int test_case = 1; test_case <= T; test_case++) {
            int K = Integer.parseInt(br.readLine());

            arr = new int[5][8];
            StringTokenizer st;
            for(int i =1; i <= 4; i++) {
                st = new StringTokenizer(br.readLine());
                for(int j =0; j < 8; j++) {
                    arr[i][j] = Integer.parseInt(st.nextToken());
                }
            }


            while(K-->0) {
                st = new StringTokenizer(br.readLine());
                int n = Integer.parseInt(st.nextToken());
                int d = Integer.parseInt(st.nextToken());

                int [] dirs = new int[5];
                dirs[n] = d;

                // 돌리는 자석을 기준으로 왼쪽 자석 방향 저장
                for(int l = n - 1; l >= 1; l--) {
                    if(arr[l + 1][6] == arr[l][2]) {
                        dirs[l] = 0;
                        break;
                    }else {
                        dirs[l] = (dirs[l + 1] == -1 ? 1 : -1);

                    }
                }

                //오른쪽
                for(int r = n + 1; r <= 4; r++) {
                    if(arr[r -1][2] == arr[r][6]) {
                        dirs[r] = 0;
                        break;
                    }else {
                        dirs[r] = (dirs[r -1] == -1 ? 1 : -1);

                    }
                }


                for(int i =1; i <= 4; i++) {
                    rotation(i, dirs[i]);
                }

            }

            System.out.printf("#%d %d\n", test_case, getScore());


        }
    }

    public static void rotation(int i, int dir) {
        if(dir == 1) {
            int value = arr[i][7];
            for(int j =7; j > 0; j--) {
                arr[i][j] = arr[i][j - 1];
            }
            arr[i][0] = value;
        }else if(dir == -1) {
            int value = arr[i][0];
            for(int j =0; j < 7; j++) {
                arr[i][j] = arr[i][j + 1];
            }
            arr[i][7] = value;
        }

    }


    public static int getScore() {
        int sum = 0;

        for(int i = 1; i <= 4; i++) {
            if(arr[i][0] == 1)
                sum += Math.pow(2, i -1);
        }

        return sum;
    }


}
