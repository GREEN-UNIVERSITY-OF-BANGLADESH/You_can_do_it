import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input = new Scanner(System.in);
		int t =input.nextInt();
		while(t-->0)
		{
		    int c=0;
		     int n =input.nextInt();
		    int[] a =new int [n];
		    int k = input.nextInt();
		    for(int i=0;i<n;i++)
		    {
		        a[i]=input.nextInt();
		        if(a[i]>k)
		        c++;
		    }
		    
		    System.out.println(c);
		}
	}
}
