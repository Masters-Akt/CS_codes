interface functions{
    public void earning(double e);
    public void deduction(double d);
    public void bonus(double b);
}

class technical implements functions{
    double earn;
    public void earning(double e){
        earn = e;
    }
    public void deduction(double d){
        earn = earn-d;
    }
    public void bonus(double b){
        earn = earn+0;
    }
    void display(){
        System.out.println("Earning for Technical = "+earn);
    }
}

class non_technical extends technical{
    double earn2;
    public void earning(double e){
        earn2 = e;
    }
    public void deduction(double d){
        earn2 = earn2-d;
    }
    public void bonus(double b){
        earn2 = earn2+b;
    }
    public void display(){
        System.out.println("Earning for Non Technical = "+earn2);
    }
}

public class CompanyXYZ {
    public static void main(String args[]){
        non_technical obj1 = new non_technical();
        technical obj2 = new technical();
        obj1.earning(500);
        obj1.deduction(200);
        obj1.bonus(500);
        obj1.display();
        obj2.earning(500);
        obj2.deduction(200);
        obj2.bonus(500);
        obj2.display();
    }    
}
