package com.mycompany.mavenproject2;
import java.util.*;
public class What_kind_of_mixture_does_Chef_produce {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        while (x --> 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            if(a>0 && b>0)
                System.out.println("Solution");
            else if(b==0)
                System.out.println("Solid");
            else if(a==0)
                System.out.println("Liquid");
        }
    }
}
