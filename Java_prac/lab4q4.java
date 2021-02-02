//import java.io.*;
import java.util.*;
public class lab4q4 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        int temp = n;
        int rev = 0;
        while(temp>0){
            rev = rev*10 + temp%10;
            temp/=10;
        }
        if(rev==n)System.out.println("It is a palindrome");
        else System.out.println("It is not a palindrome");
        sc.close();
    }
}
