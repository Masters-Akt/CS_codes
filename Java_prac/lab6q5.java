import java.io.*;
import java.util.*;

class lab6q5{
        static int roll[];
        static String name[];
        static float cgpa[];
        public static void main(String args[])throws IOException{
                Scanner sc=new Scanner(System.in);
                System.out.print("Enter no. of students : ");
                int n=sc.nextInt();
                roll = new int[n];
                name = new String[n];
                cgpa = new float[n];
                System.out.println("Enter details :");
                for(int i=0;i<n;i++){
                        System.out.print("Enter roll of student "+(i+1)+" : ");
                        roll[i] = sc.nextInt();
                        System.out.print("Enter name for student "+(i+1)+" : ");
                        sc.nextLine();
                        name[i] = sc.nextLine();
                        System.out.print("Enter cgpa for student "+(i+1)+" : ");
                        cgpa[i] = sc.nextFloat();
                }
                System.out.println("SNo.\tRoll No.\tName\tCGPA");
                for(int i=0;i<n;i++)
                        System.out.println((i+1)+"\t"+roll[i]+"\t\t"+name[i]+"\t"+cgpa[i]);
                float min=cgpa[0];
                for(int i=0;i<n;i++){
                        if(min>=cgpa[i])
                                min=cgpa[i];
                }
                System.out.println("Student(s) with lowest cgpa :");
                for(int i=0;i<n;i++){
                        if(cgpa[i]==min)
                                System.out.println(name[i]);
                }
                sc.close();
        }
}