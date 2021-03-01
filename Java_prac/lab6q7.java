import java.util.*;
import java.io.*;

class number{
    private int nums[];
    public void read(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the length: ");
        int length = in.nextInt();
        this.nums = new int[length];
        System.out.println("Enter the values:");
        for(int i=0; i<this.nums.length;i++){
            this.nums[i] = in.nextInt();
        }
        in.close();
    }
    public void display(){
        for(int i=0; i<this.nums.length;i++){
            System.out.print(this.nums[i] + " ");
        }
        System.out.println();
    }
    public void swap(){
        int maxIndex = 0;
        int minIndex = 0;
        for(int i=1; i<this.nums.length;i++){
            if(this.nums[i]>this.nums[maxIndex]){
                maxIndex = i;
            }else if(this.nums[i]<this.nums[minIndex]){
                minIndex = i;
            }
        }
        int temp = this.nums[maxIndex];
        this.nums[maxIndex] = this.nums[minIndex];
        this.nums[minIndex] = temp;
    }
}

public class lab6q7{
    public static void main(String args[]){
        number n = new number();
        n.read();
        System.out.print("Before Swapping: ");
        n.display();
        n.swap();
        System.out.print("After Swapping: ");
        n.display();
    }
}