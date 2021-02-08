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
		while(test-->0){
		    int required_pages=sc.nextInt();
		    int pages_left=sc.nextInt();
		    int money=sc.nextInt();
		    int no_of_notebooks=sc.nextInt();
		    int nb_pages[]=new int[no_of_notebooks],nb_prices[]=new int[no_of_notebooks];
		    for(int i=0;i<no_of_notebooks;i++){
		        nb_pages[i]=sc.nextInt();
		        nb_prices[i]=sc.nextInt();
		    }
		    
		    int req=required_pages-pages_left;
		    int flag=0;
		    for(int i=0;i<no_of_notebooks;i++){
		        if(nb_pages[i]>=req && nb_prices[i]<=money){
		            flag=1;
		            break;
		        }
		    }
		    if(flag==1){
		        System.out.println("LuckyChef");
		    }
		    else{
		        System.out.println("UnluckyChef");
		    }
		}
	}
}
