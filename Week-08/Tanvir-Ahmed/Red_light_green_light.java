package com.mycompany.problemsolving;
import java.util.Scanner;
public class Red_light_green_light {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        while(x-->0){
            int n = sc.nextInt();
            int ar[] = new int [n];
            int h = sc.nextInt();
            int count = 0;
            for(int i =0; i<n; i++){
                ar[i] = sc.nextInt();
                if(ar[i]>h)
                    count++;
            }
            System.out.println(count);
        }
    }
}
