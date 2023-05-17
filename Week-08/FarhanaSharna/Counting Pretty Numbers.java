import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{  Scanner sc = new Scanner(System.in);
	     int t=sc.nextInt() ;
	     while(t-->0){
	         int L=sc.nextInt() ;
	         int R=sc.nextInt() ;
	        int count = 0 ;
	           for(int i=L ; i<=R ;i++){
	             int x= i%10 ;
	             if(x==2 || x==9 || x==3){
	                 count++ ;
	             }
	         }
	        System.out.println(count) ;
	     }
	}
}