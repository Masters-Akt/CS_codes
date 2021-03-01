import java.lang.Math;

class shapes{
    void area (int r){
        System.out.println("AREA OF A CIRCLE:"+(3.14*r*r));
    }
    void area (int l,int b){
        System.out.println("AREA OF A RECTANGLE:"+(l*b));
    }
    void area (int a, int b, int c){
        Double s, t;
        s = (double)(a+b+c)/2;
        t=Math.sqrt(s*(s-a) *(s-b) *(s-c));
        System.out.println("AREA OF A TRIANGLE:"+t);
    }
}

public class lab6q3{
    public static void main(String []args){
        shapes obj=new shapes();
        obj.area(3);
        obj.area(2,7);
        obj.area(3,4,5);
    }
}