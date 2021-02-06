public class lab4ass4{
    static int count = 0;
    lab4ass4(){
        count++;
    }
    public static void main(String args[]){
        lab4ass4 obj1 = new lab4ass4();
        lab4ass4 obj2 = new lab4ass4();
        lab4ass4 obj3 = new lab4ass4();
        lab4ass4 obj4 = new lab4ass4();
        System.out.println("Total number of objects created = "+lab4ass4.count);
    }
}