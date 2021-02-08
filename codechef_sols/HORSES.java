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
		Scanner scanner=new Scanner(System.in);
		int test=scanner.nextInt();
		while(test-->0){
		    int number_of_horses=scanner.nextInt();
		    int skills[]=new int[number_of_horses];
		    for(int i=0;i<number_of_horses;i++){
		        skills[i]=scanner.nextInt();
		    }
		    Arrays.sort(skills);
		    int minimum=Math.abs(skills[0]-skills[1]);
		    for(int i=0;i<number_of_horses-1;i++){
		        int temp=Math.abs(skills[i]-skills[i+1]);
		        if(temp<minimum){
		            minimum=temp;
		        }
		    }
		    System.out.println(minimum);
		}
	}
}
