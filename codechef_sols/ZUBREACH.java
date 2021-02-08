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
		int test=sc.nextInt();
		for(int t=1;t<=test;t++){
		    int m=sc.nextInt();
		    int n=sc.nextInt();
		    int rx=sc.nextInt();
		    int ry=sc.nextInt();
		    int l=sc.nextInt();
		    sc.nextLine();
		    String a=sc.nextLine();
		    int x=0,y=0;
		    for(int i=0;i<a.length();i++){
		        char temp=a.charAt(i);
		        switch(temp){
		            case 'U':y++;
		            break;
		            case 'D':y--;
		            break;
		            case 'L':x--;
		            break;
		            case 'R':x++;
		            break;
		        }
		    }
		    if(x==rx&&y==ry){
		        System.out.println("Case "+t+": REACHED");
		    }
		    else if(x<0||y<0||x>m||y>n){
		        System.out.println("Case "+t+": DANGER");
		    }
		    else{
		        System.out.println("Case "+t+": SOMEWHERE");
		    }
		}
	}
}
