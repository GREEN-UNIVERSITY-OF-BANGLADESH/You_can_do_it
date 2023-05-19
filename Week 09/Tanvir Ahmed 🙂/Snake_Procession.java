//Snake Procession
package com.mycompany.problemsolving;
import java.util.ArrayList;
import java.util.Scanner;
public class Snake_Procession {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int r = sc.nextInt();
        while(r-->0){
            int l = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            boolean check = false;
            ArrayList<Integer> ar = new ArrayList<>();
            int p = 0;
            for (int i = 0; i < l; i++) {
                if(s.charAt(i) == '.')
                    continue;
                else{
                    if(s.charAt(i) == 'H'){
                        ar.add(1);
                        p++;
                    }
                    else
                    {
                        ar.add(0);
                        p++;
                    }
                }
            }
            for (int j = 0; j < p; j+=2) {
                if(p%2 == 0){
                    if(ar.get(j) == 0){
                        check = true;
                        break;
                    }
                    else if(ar.get(j+1) == 1){
                       check = true;
                       break; 
                    }
                }
                else
                {
                        check = true;
                        break;
                }
            }
                if(check == false)
                    System.out.println("Valid");
                else
                    System.out.println("Invalid");            
        }
    }
}
