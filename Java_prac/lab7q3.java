import java.util.*;
import java.io.*;

class A{
    public void print(){
        System.out.println("Inside class A");
    }
}

class B extends A{
    public void print(){
        System.out.println("Inside class B");
    }
}

class C extends B{
    public void print(){
        System.out.println("Inside class C");
    }
}

public class lab7q3{
    public static void main(String args []){
        A a = new A ();
        B b = new B ();
        C c = new C ();
        A obj;
        obj = a;
        obj.print();
        obj = b;
        obj.print();
        obj = c;
        obj.print();
    }
}