public class lab4ass2 {
    public static void main(String args[]){
        int even=0, odd=0;
        for(int i=0;i<10;i++){
            if(Integer.parseInt(args[i])%2==0) even++;
            else odd++;
        }
        System.out.println("Even = "+even+" Odd = "+odd);
    }
}
