import java.util.*;
public class lab4ass5 {
    public static void main(String args[]){
        int[] store = new int[10000];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size n : ");
        int n = sc.nextInt();
        System.out.println("Enter elements:");
        int[] arr = new int[n];
        boolean[] check = new boolean[10000];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
            store[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(store[arr[i]]!=0 && !check[arr[i]]){
                System.out.println("Frequecy of "+arr[i]+" is "+store[arr[i]]);
                check[arr[i]]=true;
            }
        }
        sc.close();
    }
}
