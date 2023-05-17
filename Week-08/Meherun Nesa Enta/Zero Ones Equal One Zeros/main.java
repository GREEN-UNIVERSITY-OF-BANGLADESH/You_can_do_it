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
		Scanner input =new Scanner(System.in);
		int t=input.nextInt();
		while(t-->0)
		{
		    int n = input.nextInt();
		    int temp =n;
		    while(n>0)
		    {
		        if(n==1 || n==temp)
		        System.out.print("0");
		        else
		        System.out.print("1");
		        n--;
		    }
		    System.out.print("\n");
		    
		}
	}
}
