//The Great Run
package com.mycompany.problemsolving;
import java.util.Scanner;

public class The_Great_Run {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int max = 0;
            int ar[] = new int[n];
            for (int i = 0; i < n; i++) { // for the initialization of all girls in each kilometres.
                ar[i] = sc.nextInt();
            }
            for (int j = 0; j < n; j++) { 
                int count = 0;
                int c = j; // taking a temporary value of j so i can use c++ in the inner loop
                for (int l = k; l > 0; l--) { // for how many km Vishal can run at his best speed.
                    if (c < n) { //this condition for array out of bound problem.
                        count += ar[c];
                        c++; // here i can update this and it won't change the j value.
                    }
                }
                if (max < count) {
                    max = count; // finally i update the maximum value if the count is maximum
                }
            }
            System.out.println(max);
        }
    }
}
