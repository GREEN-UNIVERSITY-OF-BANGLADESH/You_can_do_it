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
		Scanner sc = new Scanner (System.in) ;
		int r = sc.nextInt() ;
		while(r-->0){
		    sc.nextInt() ;
		    sc.nextLine() ;
		    String s = sc.nextLine() ;
		    s= s.replace(".","") ;
		    s= s.replace("HT","") ;
		    if(s=="")
		    
		    System.out.println("Valid") ;
		    else
		    System.out.println("Invalid") ;
		}
	}
}
