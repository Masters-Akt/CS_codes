public class lab10q2 {
    public static void main(String args[]){
        try{
            int d = 1 / 0;
        }catch(ArithmeticException a){
            System.out.println("Sub class exception.");
        }catch(Exception e){
            System.out.println("Super class exception."); // Not printed
        }
    }
    
}