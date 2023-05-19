/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
                  int A[] = new int[] {6,2,5,5,4,5,6,3,7,6};
		while(t-->0)
		{
	    int a = sc.nextInt();
            int b = sc.nextInt();
            int sum = a + b;
            int T = 0;
            while(sum!=0){
                int LD = sum%10;  // for calculate separate digits.
               T += A[LD]; // calculating how many matcher need for every digits.
                sum/=10;
            }
            System.out.println(T);
	}
	}
}
