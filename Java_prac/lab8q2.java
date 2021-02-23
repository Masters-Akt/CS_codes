interface Motor{
    int cap = 5;
    public void run();
    public void consume();
}

class WashingMachine implements Motor{
    public void run(){
        System.out.println("Implementing Run, capacity = "+cap);
    }
    public void consume(){
        System.out.println("Implementing Consume");
    }
}

public class lab8q2{
    public static void main(String[] args){
        Motor obj = new WashingMachine();
        obj.run();
        obj.consume();
    }
}