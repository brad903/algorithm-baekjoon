package b1463;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] d = new int[N + 1];
        d[1] = 0;

        for (int i = 2; i <= N; i++) {
            int min = d[i-1] + 1;

            if(i % 2 == 0) {
                int temp = d[i/2] + 1;
                min = Math.min(min, temp);
            }

            if(i % 3 == 0) {
                int temp = d[i/3] + 1;
                min = Math.min(min, temp);
            }

            d[i] = min;
        }

        System.out.println(d[N]);
    }
}
