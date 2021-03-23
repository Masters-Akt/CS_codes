import java.util.*;

interface permutation{
    public int npr(int n, int r);
}

interface combination{
    public int ncr(int n, int r);
}

interface nprnncr extends permutation, combination{
    public int fact(int n);
}

class myclass implements nprnncr{
    public int fact(int n){
        if(n==0) return 1;
        return n*fact(n-1);
    }
    public int npr(int n, int r){
        return fact(n)/fact(n-r);
    }
    public int ncr(int n, int r){
        return fact(n)/(fact(n-r)*fact(r));
    }
}

public class pnc_interface {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,r;
        System.out.println("Enter value of n and r: ");
        n = sc.nextInt();
        r = sc.nextInt();
        myclass obj = new myclass();
        System.out.println("nPr = "+obj.npr(n,r));
        System.out.println("nCr = "+obj.ncr(n,r));
        sc.close();
    }
}
