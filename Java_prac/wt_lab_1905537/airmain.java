class air{
    int per_of_oxygen;
    int per_of_nitrogen;
    int humidity;
    air(int per_of_oxygen){ 
        this.per_of_oxygen = per_of_oxygen;
    }
    air(int per_of_oxygen, int per_of_nitrogen){ 
        this(per_of_oxygen);
        this.per_of_nitrogen = per_of_nitrogen;
    }
    air(int per_of_oxygen, int per_of_nitrogen, int humidity){ 
        this(per_of_oxygen,per_of_nitrogen);
        this.humidity = humidity;
    }
    void disp(){
        System.out.println("Oxygen: "+per_of_oxygen);
        System.out.println("Nitrogen "+per_of_nitrogen);
        System.out.println("Humidity "+humidity);
    }
    void checkDay(air a){
        if(a.humidity>100){
            System.out.println("Humid day");
        }else if(a.humidity>50 && a.humidity<100){ 
            System.out.println("Normal day");
        }else{
            System.out.println("Dry day");
        }
    }
}
public class airmain{
    public static void main(String[] args){ 
        air a=new air(45,60,200);
        air b=new air(55,75,22);
        a.disp();
        System.out.println("------------------");
        b.disp();
        System.out.println("------------------");
        System.out.println("Humidity check: ");
        a.checkDay(a);
        b.checkDay(b);
    }
}