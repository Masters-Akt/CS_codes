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
		    int a[][]=new int[n][n];
		    int i=1,ch=1;
		    int x=0,y=0;
		    while(i<(n*n)+1){
		        a[x][y]=i;
		        if(y!=0){
		            y--;
		            x++;
		        }
		        else{
		            y=ch;
		            if(y>=n){
		                break;
		            }else{
		            ch++;
		            x=0;}
		        }
		        i++;
		    }
		    i++;
		    y=n-1;
		    x=1;
		    int ch2=2;
		    while(i<(n*n)+1){
		        a[x][y]=i;
		        if(x!=n-1){
		            y--;
		            x++;
		        }
		        else{
		            x=ch2;
		            ch2++;
		            y=n-1;
		            
		        }
		        i++;
		    }
		    
		    for(int p=0;p<n;p++){
		        for(int q=0;q<n;q++){
		            System.out.print(a[p][q]+" ");
		        }
		        System.out.println();
		    }
		    System.out.println();
		}
	}
}
