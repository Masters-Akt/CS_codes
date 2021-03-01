import java.util.*;
import java.io.*;

class Account{
    private int accNum;
    private int balance;
    public Account(int accNum, int balance){
        this.accNum = accNum;
        this.balance = balance;
    }
    public void display(){
        System.out.println("Account Number: " +this.accNum + "\nBalance : " + this.balance);
    }
}

class Person extends Account{
    private long aadhaarNum;
    private String name;
    public Person (int accNum, int balance, long aadhaarNum, String name){
        super(accNum, balance);
        this.aadhaarNum = aadhaarNum;
        this.name = name;
    }
    public void display(){
        System.out.println("Name : " + this.name +"\nAadhaar Number: " + this.aadhaarNum);
        super.display();
    }
}

public class lab7q5{
    public static void main(String args[]){
        Person p [] = new Person [5];
        Scanner in = new Scanner (System.in);
        for(int i=0; i<p.length;i++){
            System.out.println("enter Accno., Balance, AadhaarNo., Name for " + (i+1));
            int accNum = in.nextInt();
            int balance = in.nextInt();
            long aadhaarNum = in.nextLong();
            String name = in.next();
            p[i] = new Person(accNum, balance, aadhaarNum, name);
        }
        for(int i=0; i<p.length;i++){
            p[i].display ();
            System.out.println();
        }
        in.close();
    }
}