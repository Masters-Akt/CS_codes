import java.lang.Math;
import java.util.Scanner;

class shapes{
    void area (int r){
        System.out.println("AREA OF A CIRCLE:"+(3.14*r*r));
    }
    void area (int l,int b){
        System.out.println("AREA OF A RECTANGLE:"+(l*b));
    }
    void area (int a,int b,int c){
        double s, t;
        s=(double)(a+b+c)/2;
        t=Math.sqrt(s*(s-a) * (s-b) *(s-c));
        System.out.println("AREA OF A TRIANGLE:"+t);
    }
}

public class lab6q6{
    public static void main (String [] args){
        Scanner in=new Scanner (System.in);
        shapes obj=new shapes ();
        System.out.println("ENTER CHOICE : 1 for circle , 2 for rectangle and 3 for triangle");
        int ch=in.nextInt();
        switch(ch){
            case 1: obj.area(8);
                break;
            case 2: obj.area(2,1);
                break;
            case 3: obj.area(3,5,4);
                break;
            default: System.out.println("WRONG OPTION");
        }
        in.close();
    }
}