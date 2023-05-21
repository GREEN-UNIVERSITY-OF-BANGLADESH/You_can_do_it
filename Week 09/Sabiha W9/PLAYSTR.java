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
		int t = sc.nextInt() ;
		while(t-->0){
		    int n = sc.nextInt() ;
		   String  s = sc.next() ;
		    String r = sc.next() ;
		    int s0=0 , s1=0, r1=0, r0=0 ;
		    for(int i=0 ;i<n ;i++){
		        if(s.charAt(i)!= '0'){
		            s0++ ;
		        }
		        else{
		            s1++ ;
		        }
		        if(r.charAt(i)!= '0'){
		            r0++ ;
		        }
		        else{
		            r1++ ;
		        }
		    }
		    if(s0==r0 && s1==r1){
		        System.out.println("YES") ;
		    }
		    else{
		        System.out.println("NO") ;
		    }
		    
		}
	}
}
