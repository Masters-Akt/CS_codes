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
		    int a[]=new int[n];
		    ArrayList<Integer> l=new ArrayList<Integer>();
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		    }
		    l.add(a[0]);
		    for(int i=1;i<n-1;i++){
		        if(a[i]-a[i-1]==1&&a[i+1]-a[i]==1){
		            l.add(-1);
		        }
		        else{
		            l.add(a[i]);
		        }
		    }
		    if(n!=1)
		    l.add(a[n-1]);
		    System.out.print(l.get(0));
		    for(int i=1;i<l.size();i++){
		        if(l.get(i)==-1&&l.get(i-1)!=-1){
		            System.out.print("...");
		        }
		        else if(l.get(i)==-1&&l.get(i-1)==-1){
		            continue;
		        }
		        else{
		            if(l.get(i-1)!=-1){
		                System.out.print(","+l.get(i));
		            }
		            else{
		                System.out.print(l.get(i));
		            }
		        }
		    }
		    System.out.println();
		}
	}
}
