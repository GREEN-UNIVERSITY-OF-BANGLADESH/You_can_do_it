//Zero Ones Equal One Zeros
//The count of 01 subsequences in the string is equal to the count of 10 subsequences
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Zero_Ones_Equal_One_Zeros {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
       while(x-->0){
           int k = sc.nextInt();
           int ar[] = new int [k];
           ar[0] = 1;
           ar[k-1] = 1;
           for(int i =1; i<k-1; i++){
               ar[i] = 0;
           }
           for(int j = 0; j<k; j++){
               System.out.print(ar[j]+"");
           }
           System.out.println("");
        }
    }
}
