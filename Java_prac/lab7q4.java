import java.util.*;
import java.io.*;

class Shape{
    public double area;
    public void showArea(){
        System.out.println("Area: " + this.area);
    }
}

class Circle extends Shape{
    private int rad;
    private double calculateArea(){
        return Math.PI * Math.pow (this.rad, 2);
    }
    public Circle(int rad){
        this.rad=rad;
    }
    public void showArea(){
        super.area=this.calculateArea();
        super.showArea();
    }
}

class Rectangle extends Shape{
    private int len,bth;
    private double calculateArea(){
        return len*bth;
    }
    public Rectangle(int len, int bth){
        this.len=len;
        this.bth=bth;
    }
    public void showArea(){
        super.area=this.calculateArea();
        super.showArea();
    }
}

public class lab7q4{
    public static void main(String args[]){
        Circle c=new Circle (7);
        Rectangle r=new Rectangle (10, 17);
        c.showArea();
        r.showArea();
    }
}