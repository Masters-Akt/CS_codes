import java.util.*;

class generalShape{
    int length, width, height, thickness;
    generalShape(){
        length = 0;
        width = 0;
        height = 0;
        thickness = 0;
    }
}

class Plate extends generalShape{
    Plate(int l, int w){
        length = l;
        width = w;
    }
    void displayPlate(){
        System.out.println("For plate : Length = "+length+" Width = "+width);
    }
}

class Box extends Plate{
    Box(int l, int w, int h){
        super(l,w);
        height = h;
    }
    void displayBox(){
        System.out.println("For Box : Length = "+length+" Width = "+width+" Height = "+height);
    }
}

class WoodBox extends Box{
    WoodBox(int l, int w, int h, int t){
        super(l,w,h);
        thickness = t;
    }
    void displayWoodBox(){
        System.out.println("For WoodBox : Length = "+length+" Width = "+width+" Height = "+height+" Thickness = "+thickness);
    }
}

public class lab7q2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length : ");
        int l = sc.nextInt();
        System.out.print("Enter width : ");
        int w = sc.nextInt();
        System.out.print("Enter height : ");
        int h = sc.nextInt();
        System.out.print("Enter thickness : ");
        int t = sc.nextInt();
        WoodBox obj = new WoodBox(l, w, h, t);
        obj.displayPlate();
        obj.displayBox();
        obj.displayWoodBox();
        sc.close();
    }
}