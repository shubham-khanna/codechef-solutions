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
		int t = sc.nextInt();
		for(int k=0;k<t;k++)
		{
		    int n = sc.nextInt();
		    String first[] = new String[n];
		    String last[] = new String[n];
		    for(int i=0;i<n;i++)
		    {
		        first[i]=sc.next();
		        last[i]=sc.next();
		    }
		    for(int i=0;i<n;i++)
		    {
		        boolean flag = false;
		        System.out.print(first[i]+" ");
		        for(int j=0;j<n;j++)
		        {
		            if(first[i].equals(first[j])&&i!=j)
		            {
		               System.out.print(last[i]);  
		               break;
		            }
		        }
		        System.out.println();
		    }
		}
	}
}
