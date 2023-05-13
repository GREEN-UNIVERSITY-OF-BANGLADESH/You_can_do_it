/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int t=sc.nextInt(); //number of round 
	    int max=0; // maximum lead after every round .initially taken as 0.
	    int play1=0,play2=0; //cumulative  scores of players .initially taken as 0.
	    
	    while((t--)!=0){
	        int p=sc.nextInt();
	        int q=sc.nextInt();
	        play1+=p; ; // play1 is the score of that particular round .
	                        // player1 is the total score of that player .
	        play2+=q; ; // play2 is the score of that particular round .
	                        // player2 is the total score of that player .
	                        
	        int lead = play1-play2; // calculating lead after every particular round.
	                                    // max is current lead .hence lead of current round. 
	        if(Math.abs(lead)>Math.abs(max))
	        max=lead; // maxmimum lead changed.
	    }
	    if(max>0) //if current lead if greater than maximum lead .means the mamximum lead would be change . winner would also be updated.
	        
	    System.out.print(1+" "+(max));
	    else
	    System.out.print(2+" "+Math.abs(max));
		// your code goes here
	}
}
