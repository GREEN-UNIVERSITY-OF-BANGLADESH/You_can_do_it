// Playing with Strings
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Playing_with_Strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            int n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            String r = sc.nextLine();
            int x =0, y=0;
            for (int i = 0; i < n; i++) {
                if(s.charAt(i)=='1')
                    x++;
                if(r.charAt(i)=='1')
                    y++;
            }
            if(x==y)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
