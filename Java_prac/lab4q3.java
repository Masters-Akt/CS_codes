import java.util.*;
public class lab4q3 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter day of current month : ");
        int d = sc.nextInt();
        if(d<=0 || d>28) System.out.println("Incorrect data");
        else{
            int r = d%7;
            switch(r){
                case 1:System.out.println("Monday");
                break;
                case 2:System.out.println("Tuesday");
                break;
                case 3:System.out.println("Wednesday");
                break;
                case 4:System.out.println("Thursday");
                break;
                case 5:System.out.println("Friday");
                break;
                case 6:System.out.println("Saturday");
                break;
                case 0:System.out.println("Sunday");
                break;
            }
        }
        sc.close();
    }
}
