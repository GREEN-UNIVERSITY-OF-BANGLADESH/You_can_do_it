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
		Scanner scan = new Scanner(System.in) ;
		int T=scan.nextInt() ;
		
		while(T-->0){
		    int N = scan.nextInt() ;
		    int s1=0 , s2=0 ;
		
		
		while(N-->0){
		    String M=scan.next() ;
		    if(M.equals("START38")) {
		        s1++ ;
		    }
		    else{
		        s2++ ;
		    }
		}
		System.out.println(s1+" "+s2) ;
	}
}
}
