package lab9q1.Marketing;

public class sales extends lab9q1.General.employee {
public sales(int empid, String ename) {
super(empid, ename);
}
public int getEmpId() {
return empid;
}
public double tallowance(int basic) {
return 0.05 * earnings(basic);
}
}