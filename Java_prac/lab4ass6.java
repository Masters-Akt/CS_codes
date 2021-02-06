import java.util.*;
public class lab4ass6 {
    public static void main(String args[]){
        int[][] matrix = new int[3][3];
        Scanner sc = new Scanner(System.in);
        int left_dia_sum=0, right_dia_sum=0;
        System.out.println("Enter 3X3 matrix elements:");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matrix[i][j] = sc.nextInt();
                if(i==j) left_dia_sum+=matrix[i][j];
                if(i+j==2) right_dia_sum+=matrix[i][j];
            }
        }
        System.out.println("Left Diagonal Sum = "+left_dia_sum+" and Right Diagonal Sum = "+right_dia_sum);
        sc.close();
    }
}
