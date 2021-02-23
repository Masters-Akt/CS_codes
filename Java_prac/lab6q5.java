import java.util.*;

class Student{
    String name;
    String stu_id;
    int score;
    public Student(){
        this(" ", " ", 0);
    }
    public Student(String initName, String initId, int initScore){
        name = initName;
        stu_id = initId;
        score = initScore;
    }
}

public class lab6q5 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number of students : ");
        int n = sc.nextInt();
        System.out.println("Enter Student name, student id, and score of all students one by one :");
        Student stu = new Student();
        Student min = new Student(" ", " ", 100);
        System.out.println("All students list : ");
        for(int i=0;i<n;i++){
            stu.name = sc.next();
            stu.stu_id = sc.next();
            stu.score = sc.nextInt();
            System.out.println("Name = "+stu.name+" ID = "+stu.stu_id+" Score = "+stu.score);
            if(min.score>stu.score){
                min.name = stu.name;
                min.stu_id = stu.stu_id;
                min.score = stu.score;
            }
        }
        System.out.println("Minimum score is "+min.score+" whose name is "+min.name + " and student id is "+min.stu_id);
        sc.close();
    }
}