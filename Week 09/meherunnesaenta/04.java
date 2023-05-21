
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input=new Scanner(System.in);
		int t=input.nextInt();
		while(t-->0)
		{
		     int n =input.nextInt();
		     int [] a=new int[12];
		     for(int i=0;i<n;i++)
		     {
		         int x=input.nextInt();
		         int y =input.nextInt();
		         if(y>a[x])
		         a[x]=y;
		     }
		     int s =0;
		    for (int i=0;i<9;i++) 
		    s=s+a[i];
		    System.out.println(s);
		}
	}
}