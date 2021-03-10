import java.util.Scanner;
//WAP to create a user defined exception which is dependent on multiple factors 1st is age 2nd is gender 3rd is qualification 4th is carrier%

class Age extends Exception{
    public Age(String s){
        super(s);
    }
}
class Gender extends Exception{
    public Gender(String s){
        super(s);
    }
}
class Qualification extends Exception{
    public Qualification(String s){
        super(s);
    }
}
class Percentage extends Exception{
    public Percentage(String s){
        super(s);
    }
}

public class exception_handling_q1 {
      public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter age : ");
        int age=sc.nextInt();
        System.out.print("Enter gender : ");
        String gen=sc.next();
        System.out.print("Enter qualification : ");
        String qua = sc.next();
        System.out.print("Enter percentage : ");
        int per = sc.nextInt();
        sc.close();
        String tempgen="";
        try{
            if(age<0){
                throw new Age("Age");
            }else{
                System.out.println(age);
            }
        }catch(Age e){
            System.out.println("Age is negative Exception.");
        }
        try{
            if(gen.equals(tempgen)){
                throw new Gender("Gender");
            }else{
                System.out.println(gen);
            }
        }catch(Gender e){
            System.out.println("Gender is null Exception.");
        }
        try{
            if(qua.equals(tempgen)){
                throw new Qualification("qualification");
            }else{
                System.out.println(qua);
            }
        }catch(Qualification e){
            System.out.println("Qualification is null Exception.");
        }
        try{
            if(per<40){
                throw new Percentage("percentage");
            }else{
                System.out.println(per);
            }
        }catch(Percentage e){
            System.out.println("Percentage is less than 40 Exception.");
        }
    }
}