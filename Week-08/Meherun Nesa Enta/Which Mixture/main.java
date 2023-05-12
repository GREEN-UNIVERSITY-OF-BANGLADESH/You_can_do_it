import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			int t;
    Scanner input =new Scanner(System.in);
   t=input.nextInt();
   for(int i=0;i<t;i++)
	{
	    int a,b;
	     a=input.nextInt();
	     b=input.nextInt();
	    if(a==0 && b>0)
	    System.out.println("Liquid");
	    else if(a>0&& b==0)
	     System.out.println("Solid" );
	    else
	     System.out.println("Solution" );
	}
	}
}
