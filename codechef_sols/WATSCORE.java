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
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int a[][]=new int[n][2];
		    for(int i=0;i<n;i++){
		        a[i][0]=sc.nextInt();
		        a[i][1]=sc.nextInt();
		    }
		    int sum=0;
		    for(int i=0;i<n;i++){
		        if(a[i][0]==9||a[i][0]==10||a[i][0]==11){
		            sum+=0;
		        }
		        else{
		            int max=0;
		        for(int j=i;j<n;j++){
		            if(a[i][0]==a[j][0]){
		                if(a[j][1]>max){
		                max=a[j][1];
		                    
		                }
		                a[j][1]=0;
		            }
		        }
		        sum+=max;
		        }
		    }
		    System.out.println(sum);
		}
	}
}
