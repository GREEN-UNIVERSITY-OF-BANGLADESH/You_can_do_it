

import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{

		Scanner sc = new Scanner(System.in) ;
		
		int T = sc.nextInt() ;
		while(T-->0){
		    int n = sc.nextInt() ;
		    int arr[] = new int[n] ;
		    int count = 0 ;
		    for(int i = 0 ;i<n ;i++){
		        arr[i]=sc.nextInt() ;
		    }
		    Arrays.sort(arr) ;
		    for(int i = 0 ;i<n-1 ;i++){
		        if(arr[i]!=arr[i+1]){
		            count++ ;
		        }
		    }
		    System.out.println(count+1) ;
		}
	
	}
}
