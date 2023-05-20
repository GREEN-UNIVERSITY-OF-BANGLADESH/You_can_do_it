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
		    int count=0, min=0;
		    int n=input.nextInt();
		    int []a =new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i]=input.nextInt();
		    }
		    for(int i=0;i<n;i++){
		      count=0;
		       for(int j=0;j<n;j++)
		       {
		            
		           if(a[i]==a[j])
		           {
		               count++;
		           }
		        
		       }
		       if(min<count)
		       min=count;
		    }
		    System.out.println(n-min);
		    
		}
	}
}
