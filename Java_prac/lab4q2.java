import java.util.*;
public class lab4q2 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your marks out of 100:");
        int mark = sc.nextInt();
        if(mark>=90){
            System.out.println("O grade");
        }else if(mark>80){
            System.out.println("E grade");
        }else if(mark>70){
            System.out.println("A grade");
        }else if(mark>60){
            System.out.println("B grade");
        }else if(mark>50){
            System.out.println("C grade");
        }else{
            System.out.println("D grade");
        }
        sc.close();
    }
}
