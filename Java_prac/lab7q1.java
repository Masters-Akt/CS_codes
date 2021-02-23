import java.util.*;

class twoDsheet{
    double length, breadth;
    twoDsheet(double a, double b){
        this.length = a;
        this.breadth = b;
    }
    void calculate_square_price(){
        System.out.println("Price of square sheet = Rs. "+40*length*breadth);
    }
}

class threeDcube extends twoDsheet{
    double height;
    threeDcube(double a, double b, double c){
        super(a,b);
        this.height = c;
    }
    void calculate_cube_price(){
        System.out.println("Price of cube block = Rs. "+60*length*breadth*height);
    }
}

public class lab7q1 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length : ");
        int l = sc.nextInt();
        System.out.print("Enter breadth : ");
        int b = sc.nextInt();
        System.out.print("Enter height : ");
        int h = sc.nextInt();
        threeDcube obj = new threeDcube(l, b, h);
        obj.calculate_square_price();
        obj.calculate_cube_price();
        sc.close();
    }   
}
