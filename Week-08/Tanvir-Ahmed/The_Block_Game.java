
package com.mycompany.problemsolving;
import java.util.Scanner;
public class The_Block_Game {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        while(x-->0){
            int n = sc.nextInt();
            int temp = n;
            int rev = 0;
            while(n!=0){
                int rim = n % 10;
                rev = rev * 10 + rim;
                n/=10;
            }
            if(temp == rev)
                System.out.println("wins");
            else
                System.out.println("loses");
        }
    }
}
