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
		long test=scanner.nextInt();
		while(test-->0){
		    long no_of_cats=scanner.nextLong();
		    long no_of_dogs=scanner.nextLong();
		    long no_of_legs=scanner.nextLong();
		    int flag=0;
		    if(no_of_legs%4==0){
		        long total_animals=no_of_legs/4;
		        long no_of_cats_seen=total_animals-no_of_dogs;
		        long min_cats_on_land=no_of_cats - (2*no_of_dogs);
		        if(min_cats_on_land<0)
		        min_cats_on_land=0;
		        if(no_of_cats_seen>=min_cats_on_land && no_of_cats_seen<=no_of_cats){
		                flag=1;
		        }
		    }
		    if(flag==1){
		        System.out.println("yes");
		    }
		    else{
		        System.out.println("no");
		    }
		}
	}
}
