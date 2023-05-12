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
		int t, a, b;
		
		t = sc.nextInt();
		
		while(t > 0){
		    a = sc.nextInt();
		    b = sc.nextInt();
		    
		    if(a > 0 && b > 0){
		        System.out.println("Solution");
		    }else if (a == 0){
		        System.out.println("Liquid");
		    }else {
		        System.out.println("Solid");
		    }
		    t--;
		}
	}
}
