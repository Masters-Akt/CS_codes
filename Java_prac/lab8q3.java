interface EarnDeductionBonus{
    public void earnings(double basic);
    public void deductions(double basic );
    public void bonus(double basic);
}

abstract class Manager implements EarnDeductionBonus{
    public void earnings(double basic){
        double b=basic+(0.8*basic)+(0.15*basic);
        System.out.println("EARNINGS :"+b);
    }
    public void deductions(double basic){
        System.out.println("DEDUCTIONS :"+(0.12*basic));
    }
}

class Substaff extends Manager{
    public void bonus(double basic){
        earnings(basic);
        deductions(basic);
        System.out.println("BONUS:"+(0.5*basic));
    }
}

public class lab8q3{
    public static void main(String[] args){
        Substaff obj=new Substaff ();
        obj.bonus(5672.9);
    }
}