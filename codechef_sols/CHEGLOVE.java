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
		    int l[]=new int[n],g[]=new int[n];
		    for(int i=0;i<n;i++){
		        l[i]=sc.nextInt();
		    }
		    boolean front=true,back=true;
		    for(int i=0;i<n;i++){
		        g[i]=sc.nextInt();
		    }
		    for(int i=0;i<n;i++){
		        if(l[i]>g[i]){
		            front=false;
		            break;
		        }
		    }
		    int k=n-1;
		    for(int i=0;i<n;i++){
		        if(l[i]>g[k]){
		            back=false;
		            break;
		        }
		        k--;
		    }
		    if(front==true&&back==true){
		        System.out.println("both");
		    }
		    else if(front==false&&back==false){
		        System.out.println("none");
		    }
		    else if(front==true&&back==false){
		        System.out.println("front");
		    }
		    else{
		        System.out.println("back");
		    }
		}
	}
}
