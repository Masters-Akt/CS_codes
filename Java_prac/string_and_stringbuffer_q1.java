import java.util.Scanner;
import java.lang.StringBuffer;
//WAP to create a string and string buffer obj take string input from the user use string functions to find out the maximum occuring character in the given string 
//also replace the same character with another user input character
public class string_and_stringbuffer_q1 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String s = sc.next();
        StringBuffer sb = new StringBuffer(s);
        int len = sb.length();
        int temp[] = new int[256];
        for(int i=0;i<len;i++){
            temp[sb.charAt(i)]++;
        }
        int maximum = -1;
        char ans= ' ';
        for(int i=0;i<len;i++){
            if(maximum<temp[sb.charAt(i)]){
                maximum = temp[sb.charAt(i)];
                ans = sb.charAt(i);
            }
        }
        System.out.println("The most repeated character is : "+ans);
        System.out.print("Enter a character to replace the most repeated one : ");
        char replacechar = sc.next().charAt(0);
        String newString = s.replace(ans,replacechar);
        System.out.println("After replacement, string = "+newString);
        sc.close();
    }  
}
