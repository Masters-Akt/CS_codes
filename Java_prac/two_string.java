import java.util.*;
public class two_string{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String firststring = args[0];
        System.out.print("Enter a string : ");
        String secondstring = sc.nextLine();
        sc.close();
        String concatenatedstring = ""+firststring+secondstring;
        int size = concatenatedstring.length();
        int n = size/4;
        String string1="", string2="", string3="", string4="";
        int i=0;
        while(i<n){
            string1=string1+concatenatedstring.charAt(i);
            i++;
        }
        while(i<2*n){
            string2=string2+concatenatedstring.charAt(i);
            i++;
        }
        while(i<3*n){
            string3=string3+concatenatedstring.charAt(i);
            i++;
        }
        while(i<size){
            string4=string4+concatenatedstring.charAt(i);
            i++;
        }
        System.out.println("First part : "+string1);
        System.out.println("First part : "+string2);
        System.out.println("First part : "+string3);
        System.out.println("First part : "+string4);
    }
}