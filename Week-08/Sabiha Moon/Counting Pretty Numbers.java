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
	     int T=sc.nextInt() ;
	     while(T-->0){
	         int L=sc.nextInt() ;
	         int R=sc.nextInt() ;
	         int count = 0 ;
	         
	         for(int i=L ; i<=R ;i++){
	             int a= i%10 ;
	             if(a==2 || a==9 || a==3){
	                 count++ ;
	             }
	         }
	        System.out.println(count) ;
	     }
	}
}
