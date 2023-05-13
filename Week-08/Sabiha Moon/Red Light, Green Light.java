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
		Scanner sc= new Scanner(System.in) ;
		int T = sc.nextInt() ;
		while(T!=0){
		    int n = sc.nextInt() ;
		     int [] arr = new int[n] ;
		     int m = sc.nextInt() ;
		    for (int i = 0 ; i<n ;i++){
		        arr[i] = sc.nextInt() ;
		    }
		    int k =0 ;
		    for (int i = 0 ; i<n ;i++){
		        if(arr[i]>m){
		            k++ ;
		        }
		    }
		    System.out.println(k) ;
		    T-- ;
		}
		
		
	}
}
