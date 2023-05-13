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
		int T = sc.nextInt() ;
		for (int i=1 ;i<=T ;i++){
		    int N = sc.nextInt() ;
		    int temp, r, sum=0 ;
		    temp = N ;
		    while(N>0){
		        r = N%10 ;
		        sum = (sum*10) + r ;
		        N = N/10 ;
		    }
		    if (temp == sum)
		        System.out.println("wins") ;
		    
		    else
		        System.out.println("loses") ;
		    
		}
	}
}
