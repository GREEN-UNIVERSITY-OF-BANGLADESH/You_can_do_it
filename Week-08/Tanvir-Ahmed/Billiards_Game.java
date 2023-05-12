// Billiards game
//player who had the maximum lead at the end of any round in the game is declared the winner
package com.mycompany.problemsolving;
import java.util.*;
public class Billiards_Game {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int sum1 = 0, sum2 = 0;
        int lead[] = new int[x];
        int player[] = new int [x];
        for(int i=0; i<x; i++){
           int p1 = sc.nextInt();
           int p2 = sc.nextInt();
           sum1+= p1;
           sum2+= p2;
           if(sum1<sum2){
               lead[i] = sum2-sum1;
               player[i] = 2;
           }
           else{
               lead[i] = sum1 = sum2;
               player[i] = 1;
           }
        }
        int max = 0, p = 0;
        for(int j =0; j<x; j++){
            if(max<lead[j]){
                max = lead[j];
                p = player[j];
            }
        }
        System.out.println(p+" "+max);
    }
}
