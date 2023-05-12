/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes hereint t ;
		Scanner input = new Scanner(System.in);
		int t= input.nextInt();
	while(t-->0)
	{
	     int n=input.nextInt(),i=0,sum=0;
	    
	     int temp=n;
	     while(n!=0)
	     {
	         i=n%10;
	         sum=(sum*10)+i;
	         n=n/10;
	     }
	     if(temp==sum)
	     System.out.println("wins");
	     else
	     System.out.println("loses");
	}
	}
}