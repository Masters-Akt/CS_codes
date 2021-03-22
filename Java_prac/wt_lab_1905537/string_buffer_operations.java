import java.util.*;
public class string_buffer_operations{
    public static void main(String args[]){
        StringBuffer sb = new StringBuffer("Hello World");
        System.out.println("Initial String = "+sb);
        System.out.println("Initial Capacity = "+sb.capacity());
        sb.ensureCapacity(31);
        System.out.println("Final Capacity = "+sb.capacity());
        sb.replace(6, 11, "India");
        System.out.println("New String Buffer after replacement : "+sb);
        sb.delete(0,6);
        System.out.println("After Deletion : "+sb);
        sb.insert(5, " is my love.");
        System.out.println("After insertion : "+sb);
    }
}