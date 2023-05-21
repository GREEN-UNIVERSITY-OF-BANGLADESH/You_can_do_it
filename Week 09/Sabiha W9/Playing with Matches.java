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
		   
		    int A = sc.nextInt() ;
		    int B = sc.nextInt() ;
		    int sum = A+B ;
		    int  arr[] = {6,2,5,5,4,5,6,3,7,6} ;
		    int m=0 ;
		   while(sum>0){
		     int lastdig=sum%10 ;
		     m+=arr[lastdig] ;
		     sum/=10 ;
		    }
		    System.out.println(m) ;
		}
	}
}
