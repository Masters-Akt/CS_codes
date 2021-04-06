public class SavingsAccount{
    public static double annual_interest_rate;
    private double savings_balance;
    public SavingsAccount(){
        annual_interest_rate = 0.0;
        savings_balance = 0.0;
    }
    public SavingsAccount(double rate, double saving_bal){
        annual_interest_rate = rate;
        savings_balance = saving_bal;
    }
    public double calc_monthly_interest(){
        double interest_rate = (savings_balance*annual_interest_rate/12);
        savings_balance += interest_rate;
        return interest_rate;
    }
    public static void update_interest_rate(double new_int_rate){
        annual_interest_rate = new_int_rate;
    }
    public void update_savings_balance(double new_sav_bal){
        savings_balance = new_sav_bal;
    }
    public double get_savings_balance(){
        return savings_balance;
    }
    public double get_annual_interest_rate(){
        return annual_interest_rate;
    }
    public static void main(String args[]){
        SavingsAccount saver1 = new SavingsAccount();
        SavingsAccount saver2 = new SavingsAccount();
        saver1.update_savings_balance(2000.00);
        saver2.update_savings_balance(3000.00);
        SavingsAccount.update_interest_rate(0.04);
        saver1.calc_monthly_interest();
        saver2.calc_monthly_interest();
        System.out.println("Balance of Saver 1 at first interest rate = "+saver1.get_savings_balance());
        System.out.println("Balance of Saver 2 at first interest rate = "+saver2.get_savings_balance());
        SavingsAccount.update_interest_rate(0.05);
        saver1.calc_monthly_interest();
        saver2.calc_monthly_interest();
        System.out.println("Balance of saver 1 at second interest rate = "+saver1.get_savings_balance());
        System.out.println("Balance of saver 2 at second interest rate = "+saver2.get_savings_balance());
    }
}