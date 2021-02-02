import java.util.*;
class lab4q1{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name:");
        String name = sc.nextLine();
        System.out.println("Enter your roll:");
        int roll = sc.nextInt();
        System.out.println("Enter your section:");
        String sec = sc.next();
        System.out.println("Enter your branch:");
        String branch = sc.next();
        System.out.println("Name = "+name);
        System.out.println("Roll = "+roll);
        System.out.println("Section = "+sec);
        System.out.println("Branch = "+branch);
        sc.close();
    }
}