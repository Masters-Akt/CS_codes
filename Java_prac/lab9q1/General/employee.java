package lab9q1.General;
public class employee {
    protected int empid;
    private String ename;
    public employee(int empid, String ename) {
        this.empid = empid;
        this.ename = ename;
    }
    public double earnings(int basic) {
        return basic + 0.8 * basic + 0.15 * basic;
    }
}