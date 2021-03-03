import lab9q1.Marketing.sales;
public class TotalEarnings {
public static void main(String[] args) {
sales s = new sales(1, "Ankit");
double total = s.earnings(100) + s.tallowance(100);
System.out.println("Emp ID : " + s.getEmpId() + " Total Earnings : " +
total);
}
}