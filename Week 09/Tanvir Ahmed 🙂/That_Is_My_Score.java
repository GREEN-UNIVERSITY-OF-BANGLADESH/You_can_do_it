//That Is My Score!
package com.mycompany.problemsolving;
import java.util.Scanner;
public class That_Is_My_Score {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int count = 0;
            int ar[] = new int [12]; // for storing the maximum score. why size is 12?
            for (int j = 0; j < 12; j++) { //there is 1 to 11 problems thats why size is 12
                ar[j] = 0;
            }
            for (int i = 0; i < n; i++) { 
                int p = sc.nextInt();
                int s = sc.nextInt();
                if(ar[p-1]<s)
                    ar[p-1] = s; // initialize the maximum score in the array
            }
            for (int k = 0; k < 8; k++) {
                count+=ar[k]; // sum the all maximum value in index 0 to 7.
            }
            System.out.println(count);
        }
    }
}
