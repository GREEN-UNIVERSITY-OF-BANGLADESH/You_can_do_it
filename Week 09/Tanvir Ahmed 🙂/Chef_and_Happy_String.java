//Chef and Happy String
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Chef_and_Happy_String {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();        
        while(t-->0){
          String s = sc.nextLine();
          boolean check = false;
            for (int i = 0; i < s.length(); i++) {
                if ("aeiou".contains(String.valueOf(s.charAt(i)))
                        && "aeiou".contains(String.valueOf(s.charAt(i+1)))
                        && "aeiou".contains(String.valueOf(s.charAt(i+2)))) {
                    check = true;
                    break;
                }
            }
            if(check == true)
                System.out.println("Happy");
            else
                System.out.println("Sad");
        }
    }
}
