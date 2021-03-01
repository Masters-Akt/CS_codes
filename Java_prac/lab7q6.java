import java.util.*;
import java.io.*;

class Base{
    Base(int a){
        System.out.println("Parameterised Base class is called");
    }
}

class Derived extends Base{
    Derived(int a){
        super(a);
        System.out.println("Parameterised Derived class is called");
    }
}

public class lab7q6{
    public static void main(String args[]){
        Derived obj=new Derived(5);
    }
}