/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner ;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in) ;
		int T = sc.nextInt() ;
		
		while(T-->0){
		    int N = sc.nextInt() ;
		    int[] a = new int[N] ;
		    
		    int[] b = new int[1001] ;
		    for(int i = 0 ; i<N ; i++){
		        a[i] = sc.nextInt() ;
		        b[a[i]]++ ;
		    }
		    Arrays.sort(b) ;
		    System.out.println(N-b[1000]) ;
		    
		}
	}
}
