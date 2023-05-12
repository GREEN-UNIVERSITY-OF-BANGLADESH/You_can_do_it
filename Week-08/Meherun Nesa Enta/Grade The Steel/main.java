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
		int t;
	 t = input.nextInt();
 for(int i=0;i<t;i++)
	{
	    int a,c;
	    float b;
	    a =input.nextInt();
	    b =input.nextFloat();
	    c =input.nextInt();
	    if(a>50 && b<0.7 && c>5600)
	    System.out.println("10");
	    else if(a>50 && b<0.7 && c<=5600)
	    System.out.println("9");
	    else if(a<=50 && b<0.7 && c>5600)
	     System.out.println("8");
	    else if(a>50 && b>=0.7 && c>5600)
	     System.out.println("7");
	    else if(a>50 || b<0.7 || c>5600)
	    System.out.println("6");
	    else
	      System.out.println("5");
	    
	}
	}
}
