
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Playing_with_Matches {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);    
        int t = sc.nextInt();
        int m[] = new int[] {6,2,5,5,4,5,6,3,7,6}; //mathces count for every digit
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int sum = a + b;
            int count = 0;
            while(sum!=0){
                int rem = sum%10;  // for calculate separate digits.
                count += m[rem]; // calculating how many matcher need for every digits.
                sum/=10;
            }
            System.out.println(count);
        }
    }
}
