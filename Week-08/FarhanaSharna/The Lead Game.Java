import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc= new Scanner(System.in);
        int lead=0;
        int w=0;
        int player1=0,player2=0,p1,p2;
        int t=sc.nextInt();
        
        while(t-->0)
        {
            p1= sc.nextInt();
            p2= sc.nextInt();
            player1+=p1; 
            player2+=p2; 
        
            int x=Math.abs(player1-player2); 
            if(x>lead){   
                lead=x; 
                if(player1>player2)
                    w=1;
                else
                    w=2;
            }
        }
        System.out.println(w + " " + lead);
    }
}
