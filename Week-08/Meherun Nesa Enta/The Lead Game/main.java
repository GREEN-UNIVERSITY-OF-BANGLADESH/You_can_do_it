import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		   int n; 
	    Scanner input =new Scanner(System.in);
	    n =input.nextInt();
	    int winner=0;
	    int player1=0,player2=0,p1,p2; 
	    
	    int lead=0;
	    
	     for(int i=0;i<n;i++){
	         
	        p1 =input.nextInt();
	        p2 =input.nextInt();
	        player1+=p1; 
	        player2+=p2; 
	        
	                        
	        int x=Math.abs(player1-player2); 
	        if(x>lead){   
	            lead=x; 
	             if(player1>player2)
	             winner=1;
	             else
	             winner=2;
	        }
	    }
	     System.out.println(winner+" "+lead);   
	
	}
}
