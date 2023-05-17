import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t,n;
		Scanner input = new Scanner(System.in);
		t =input.nextInt();
		 while(t-->0)
		 {
		     int count=0,con=0;
		     n = input.nextInt();
		    while(n-->0)
		    {
		        String s = input.next();
		        if(s.contains("START38"))
		        count++;
		        else
		        con++;
		    }
		    System.out.println(count+" "+con);
		 }
	}
}
