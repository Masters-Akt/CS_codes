import java.io.*;
import java.util.*;

class InvalidMarksException extends Exception{
        int p;
        InvalidMarksException(int q){
                p=q;
        }
        public String toString(){
                return (p+" is not a valid entry for marks");
        }
}

class student_marks{
    public static void main(String args[])throws IOException{
        try{
            Scanner sc=new Scanner(System.in);
            int m1, m2, m3, m4, m5;
            System.out.println("Enter marks of subject 1: ");
            m1=sc.nextInt();
            if(m1<0 || m1>100) throw new InvalidMarksException(m1);
            else{
                System.out.println("Enter marks of subject 2: ");
                m2=sc.nextInt();
                if(m2<0 || m2>100) throw new InvalidMarksException(m2);
                else{
                    System.out.println("Enter marks of subject 3: ");
                    m3=sc.nextInt();
                    if(m3<0 || m3>100) throw new InvalidMarksException(m3);
                    else{
                        System.out.println("Enter marks of subject 4: ");
                        m4=sc.nextInt();
                        if(m4<0 || m4>100) throw new InvalidMarksException(m4);
                        else{
                            System.out.println("Enter marks of subject 5: ");
                            m5=sc.nextInt();
                            if(m5<0 || m5>100) throw new InvalidMarksException(m5);
                            else System.out.println((((m1+m2+m3+m4+m5)/5))/9.5+"cgpa");
                        }
                    }
                }
            }
        }catch(InvalidMarksException e){
            System.out.println(e);
        }
    }
}