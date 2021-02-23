import java.util.*;

class Rectangle{
    static double length, breadth, area;
    void read(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length : ");
        length = sc.nextDouble();
        System.out.print("Enter breadth : ");
        breadth = sc.nextDouble();
        sc.close();
    }
    void calculate_area(){
        area = length*breadth;
    }
    void display(){
        System.out.println("Area = "+area);
    }
}

public class lab6q4{
    public static void main(String[] args){
        Rectangle obj = new Rectangle();
        obj.read();
        obj.calculate_area();
        obj.display();
    }
}