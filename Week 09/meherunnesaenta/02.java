import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input=new Scanner(System.in);
		int t=input.nextInt();
		  
		while(t-->0)
		{
		    int a=input.nextInt();
		    int b=input.nextInt();
		    int sum = a+b;
		    int count=0;
		    while(sum>0)
		    {
		        int digit =sum%10;
		        if(digit==0||digit==6||digit==9)
		        count+=6;
		        else if(digit==2||digit==5||digit==3)
		        count+=5;
		        else if(digit==1)
		        count+=2;
		        else if(digit==4)
		        count+=4;
		        else if(digit==7)
		        count+=3;
		        else if(digit==8)
		        count+=7;
		        sum/=10;
		    } 
		    System.out.println(count);
		}
		
	}
}
