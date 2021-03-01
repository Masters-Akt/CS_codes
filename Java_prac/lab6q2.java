public class lab6q2{
    static void subtract (int a,int b){
        System.out.println("Subtraction is:"+(a-b));
    }
    static void subtract (int a,int b,int c){
        System.out.println("Subtaction is:"+(c-(a-b)));
    }
    public static void main (String [] args) {
        System.out.println("SHOWING FUNCTION OVERLOADING");
        subtract (8,2);
        subtract (2,9,1);
    }
}