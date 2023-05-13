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
		Scanner sc = new Scanner(System.in) ;
		int T = sc.nextInt() ;
		while(T-->0){
		 int N= sc.nextInt() ;
		 int x = N/2 ;
		 int i ;
		 for (  i=0 ; i<N ; i++){
		     if( i==0 || i==N-1)
		     System.out.print("1") ;
		     
		     else
		     System.out.print("0") ;
		 
		 }
		 System.out.println(" ") ;
		}
	}
}
