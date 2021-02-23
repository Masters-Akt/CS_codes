import java.util.*;

class Rectangle{
    static double length, breadth, area, perimeter;
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
    void calculate_perimeter(){
        perimeter = 2*(length+breadth);
    }
    void display(){
        System.out.println("Area = "+area+" Perimeter = "+perimeter);
    }
}

public class lab6q4{
    public static void main(String[] args){
        Rectangle obj = new Rectangle();
        obj.read();
        obj.calculate_area();
        obj.calculate_perimeter();
        obj.display();
    }
}