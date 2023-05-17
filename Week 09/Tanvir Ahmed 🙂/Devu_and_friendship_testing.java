//Devu and friendship testing
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Devu_and_friendship_testing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int ar[] = new int[n]; 
            int freq[] = new int [101]; // for the frequency if ar[]
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
                freq[ar[i]]++; // calculate the frequency
            }
            int count = 0;
            for (int j = 0; j < 101; j++) {
                if(freq[j]>=1){ //check ho wmay position is updated.
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
