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
		Scanner sc=new Scanner(System.in);
		
		    long a=sc.nextLong();
		    int n=sc.nextInt();
		    int k=sc.nextInt();
		    int ar[]=new int[k];
		    int c=0;
		    for(long i=1;i<=a;i++){
		        ar[c]++;
		        while(ar[c]>n){
		            if(c<k-1){
		            ar[c]=0;
		            ar[c+1]++;
		            c++;}
		            
		           
		      
		            if(ar[c]>n&&c==k-1){
		                ar[c]=0;
		            
		            break;}
		            
		        }
		        c=0;
		    }
		    
		    for(int i=0;i<k;i++){
		        System.out.print(ar[i]+" ");
		    }
		
	}
}
