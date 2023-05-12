/*
Vasya likes the number 239. Therefore, he considers a number pretty 
if its last digit is 2, 3 or 9.
Vasya wants to watch the numbers between L and R (both inclusive), 
so he asked you to determine how many pretty numbers are in this range. 
Can you help him?
*/
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Pretty_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int L = sc.nextInt();
            int R = sc.nextInt();
            int count = 0;
            for(int i =L; i<=R; i++){
                if(i%10 == 2 || i%10 == 3 || i%10 == 9){
                 count++;   
                }
            }
            System.out.println(count);
        }
    }
}
