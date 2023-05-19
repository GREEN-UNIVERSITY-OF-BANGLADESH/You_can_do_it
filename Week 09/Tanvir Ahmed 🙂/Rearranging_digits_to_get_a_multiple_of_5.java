//Rearranging digits to get a multiple of 5
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Rearranging_digits_to_get_a_multiple_of_5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int d = sc.nextInt();
            sc.nextLine();
            String n = sc.nextLine();
            boolean count = false;
            for (int i = 0; i < d; i++) {
                if(n.charAt(i)=='0' || n.charAt(i) == '5'){
                    count = true;
                    break;
                }
            }
            if(count == true)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
