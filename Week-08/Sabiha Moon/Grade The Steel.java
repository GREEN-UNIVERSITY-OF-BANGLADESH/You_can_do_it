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
		Scanner sc = new Scanner(System.in);
		int c=sc.nextInt();
		while(c-->0){
		    int x=sc.nextInt();
		    double y=sc.nextDouble();
		    int z=sc.nextInt();
		    
		    if(x>50 && y<0.7 && z>5600){
		        System.out.println(10);
		    }else if(x>50 && y<0.7){
		        System.out.println(9);
		    }else if( y<0.7 && z>5600){
		        System.out.println(8);
		    }else if(x>50 && z>5600){
		        System.out.println(7);
		    }else if(x>50 || y<0.7 || z>5600){
		        System.out.println(6);
		    }else{
		        System.out.println(5);
		    }
		}
	}
}
