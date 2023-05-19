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
		int t, a, b, sum, matches;
		int []digits = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
		
		t = sc.nextInt();
		while(t-- > 0){
		    a = sc.nextInt();
		    b = sc.nextInt();
		    
		    sum = a + b;
		    matches = 0;
		    
		    while(sum != 0){
		        matches += digits[sum % 10];
		        sum /= 10;
		    }
		    
		    System.out.println(matches);
		}
	}
}
