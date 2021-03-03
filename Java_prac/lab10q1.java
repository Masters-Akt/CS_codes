import java.util.Arrays;
import java.util.Scanner;

public class lab10q1 {
    public static void main(String args[]){
        int[] a = {1, 2, 3, 4, 5, 6};
        System.out.println("Elements in the array are:");
        System.out.println(Arrays.toString(a));
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any index you want to access : ");
        try{
            int x = sc.nextInt();
            System.out.println("Element in the given index is "+a[x]);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Invalid index entered, it does not exists.");
        }
        sc.close();
    }    
}
