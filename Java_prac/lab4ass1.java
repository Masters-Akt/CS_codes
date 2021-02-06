public class lab4ass1{
    public static void main(String args[]){
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        int c = Integer.parseInt(args[2]);
        if(a>b){
            if(a>c) System.out.println("Largest is "+a);
            else System.out.println("Largest is "+c);
        }else{
            if(b>c) System.out.println("Largest is "+b);
            else System.out.println("Largest is "+c);
        }
    }
}