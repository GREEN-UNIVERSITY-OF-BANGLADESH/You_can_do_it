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
		int t = sc.nextInt() ;
		while(t-->0){
		    String s = sc.next() ;
		    int len = s.length() ;
		    int count=0 ;
		    for(int i=0 ;i<len-3; i++){
		        String s1 = s.substring(i, i+3) ;
		        for(int j=0; j<s1.length(); j++ ){
		            char c = s1.charAt(j) ;
		            if(c== 'a' || c=='e' || c=='i' || c=='o' || c=='u'){
		                count++ ;
		            }
		        }
		        if(count>2){
		            break ;
		        }
		        else{
		            count = 0 ;
		        }
		    }
		    if(count>2){
		        System.out.println("Happy") ;
		    }
		    else{
		        System.out.println("Sad") ;
		    }
		    
		}
	}
}
