import java.util.*;
public class land_hectare_acre {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter area in sqft : ");
        double sqft = sc.nextDouble();
        Land obj1 = new Acres(sqft);
        Land obj2 = new Hectares(sqft);
        obj1.convert();
        obj2.convert();
    }
}

abstract class Land{
    double scale;
    abstract void convert();
}

class Acres extends Land{
    double ac;
    Acres(double sqft){
        scale = sqft;
    }
    public void convert(){
        ac = scale/43560;
        System.out.println("Area in acre is = "+ac);
    }
}

class Hectares extends Acres{
    double hc;
    Hectares(double sqft){
        super(sqft);
    }
    public void convert(){
        hc = scale/107639;
        System.out.println("Area in Hectare = "+hc);
    }
}