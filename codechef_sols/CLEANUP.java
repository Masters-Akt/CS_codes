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
		    int total_jobs=scanner.nextInt();
		    int jobs_done=scanner.nextInt();
		    int finished_jobs[]=new int[jobs_done];
		    int jobs[]=new int[total_jobs];
		    for(int i=0;i<jobs_done;i++){
		        finished_jobs[i]=scanner.nextInt();
		        jobs[finished_jobs[i]-1]++;
		    }
		    ArrayList<Integer> chef=new ArrayList<Integer>();
		    ArrayList<Integer> assistant=new ArrayList<Integer>();
		    int flag=0;
		    for(int i=0;i<total_jobs;i++){
		        if(jobs[i]==0 && flag==0){
		            chef.add(i+1);
		            flag=1;
		        }
		        else if(jobs[i]==0 && flag==1){
		            assistant.add(i+1);
		            flag=0;
		        }
		    }
		    System.out.println(chef.toString().replace("[","").replace("]","").replace(",",""));
		    System.out.println(assistant.toString().replace("[","").replace("]","").replace(",",""));
		}
	}
}
