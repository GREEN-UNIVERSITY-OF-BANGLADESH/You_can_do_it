//help Chef count how many problems were featured in each of the contests.
package com.mycompany.problemsolving;
import java.util.Scanner;
public class CodeChef_Problem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        for(int i=0; i<x; i++){
            int n = sc.nextInt();
            int c1 = 0, c2 = 0;
            String ar[] = new String [n];
            for(int j=0; j<n; j++){
                ar[j] = sc.nextLine();
                if("START38".equals(ar[j]))
                   c1++;
                else if ("LTIME108".equals(ar[j]))
                    c2++;
            }
            System.out.println(c1+" "+c2);
        }
    }
}
