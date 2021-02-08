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
		long t=sc.nextLong();
		sc.nextLine();
		while(t-->0){
		    String s1=sc.nextLine();
		    String s2=sc.nextLine();
		    int b=0,o=0;
		    for(int i=0;i<3;i++){
		        if(s1.charAt(i)=='b'||s2.charAt(i)=='b'){
		            b++;
		        }
		        else if(s1.charAt(i)=='o'||s2.charAt(i)=='o'){
		            o++;
		        }
		        
		    }
		    if(b>2){
		        o=0;
		        for(int i=0;i<3;i++){
		            if(s1.charAt(i)=='o'||s2.charAt(i)=='o'){
		                o++;
		            }
		        }
		    }
		    if(b>=2&&o>=1){
		        System.out.println("yes");
		    }
		    else{
		        System.out.println("no");
		    }
		}
	}
}
