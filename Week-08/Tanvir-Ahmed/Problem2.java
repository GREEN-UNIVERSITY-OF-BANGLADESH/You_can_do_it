
package com.mycompany.mavenproject2;
import java.util.*;
public class Problem2 {
   public static void main (String args[]){
       Scanner sc = new Scanner(System.in);
       int x = sc.nextInt();
       while(x --> 0){
           int h = sc.nextInt();
           float cc = sc.nextFloat();
           int ts = sc.nextInt();
           if(h>50 && cc<0.7 && ts>5600)
               System.out.println("10");
           else if(h>50 && cc<0.7)
               System.out.println("9");
           else if(cc<0.7 && ts>5600)
               System.out.println("8");
           else if(h>50 && ts>5600)
               System.out.println("7");
           else if(h>50 || cc<0.7 || ts>5600)
               System.out.println("6");
           else
               System.out.println("5");
       }
   } 
}
