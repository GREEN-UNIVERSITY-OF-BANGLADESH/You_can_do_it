//Make all equal using Pairs
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Make_all_equal_using_Pairs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // for the how many test case.
        while(t-->0){
            int n = sc.nextInt(); // array size
            int ar[] = new int[n];
            int frequency [] = new int [1001]; // for calculate the frequecy of the element in the array
            for (int i = 0; i < n; i++) { // for array initialization
                ar[i] = sc.nextInt(); // take all element of array
                frequency[ar[i]]++; // initialize the frequency
            }
            int max = 0;
            for (int j = 0; j < 1001; j++) {
                if(max<frequency[j]){  // finding the maximum value in the frequency array.
                    max = frequency[j]; // so the max will be the most common 
                }                       // number in the array. now if i change others number to the max
            }                           // that will be the minimum number of operations required to make all the elements of the array equal.
            System.out.println(n-max); // print how many number i am going to chage to the minimum number.
        }
    }
}
