/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input = new Scanner(System.in);
		int t =input.nextInt();
		while(t-->0)
		{
		    int count=0;
		     int n =input.nextInt();
		    int p[] =new int [n];
		    int k = input.nextInt();
		    for(int i=0;i<n;i++)
		    {
		        p[i]=input.nextInt();
		        if(p[i]>k)
		        count++;
		    }
		    
		    System.out.println(count);
		}
	}
}
