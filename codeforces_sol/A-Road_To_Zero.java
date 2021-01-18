//Kumar Ankit
import java.util.*;
import java.lang.*;
 
public class Solution{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            long x=sc.nextLong();
            long y=sc.nextLong();
            long a=sc.nextLong();
            long b=sc.nextLong();
            long sum=0,sum2=0;
            
                if(x>0 && y>0){
                    sum2+=((x+y)*a);
                    if(x<y){
                        sum+=(x*b);
                        y=y-x;
                        sum+=(y*a);
                    }
                    else{
                        sum+=(y*b);
                        x=x-y;
                        sum+=(x*a);
                    }
                }
                else if(x<0 && y<0){
                    sum2+=((Math.abs(x)+Math.abs(y))*a);
                    if(x>y){
                        sum+=(Math.abs(x)*b);
                        y=y+x;
                        sum+=(Math.abs(y)*a);
                    }
                    else{
                        sum+=(Math.abs(y)*b);
                        x=x+y;
                        sum+=(Math.abs(x)*a);
                    }
                }
                else{
                    sum2+=((Math.abs(x)+Math.abs(y))*a);
                    sum+=((Math.abs(x)+Math.abs(y))*a);
                }
            if(sum<sum2)
            System.out.println(sum);
            else
            System.out.println(sum2);
        }
    }
}