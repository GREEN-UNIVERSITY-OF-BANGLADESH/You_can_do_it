import java.util.;
import java.lang.;
import java.io.;

 Name of the class has to be Main only if the class is public. 
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 your code goes here
		Scanner input = new Scanner(System.in);
		int t =input.nextInt();
		 while(t--0)
		{
		    int a = input.nextInt();
		    int b = input.nextInt();
		    int c =0;
		   for(int i=a;i=b;i++)
		   {
		       int l = i%10;
		       if(l==2l==3l==9)
		       {
		           c++;
		       }
		   }
		    System.out.println(c);
		}
	}
}