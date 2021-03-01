abstract class student{
    int roll;
    long reg;
    abstract void course ();
}

class kiitian extends student{
    void course(){
        System.out.println("this is the course implementation");
    }
}

public class lab8q1{
    public static void main(String[] args){
        kiitian k=new kiitian();
        k.course();
    }
}