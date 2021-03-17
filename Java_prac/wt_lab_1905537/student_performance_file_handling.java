import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.io.IOException;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.lang.String;

public class student_performance_file_handling{
    public static void main(String args[]){
        String[] datastring;
        try{
            File myinput = new File("INPUT.txt");
            Scanner sc = new Scanner(myinput);
            while(sc.hasNextLine()){
                String data = sc.nextLine();
                // System.out.println(data);
                datastring = data.split("%", 0);
                double gradepoint = (Integer.parseInt(datastring[2])+Integer.parseInt(datastring[3])+Integer.parseInt(datastring[4])+Integer.parseInt(datastring[5])+Integer.parseInt(datastring[6]))/5;
                char grade=' ';
                if(gradepoint>=90) grade='O';
                else if(gradepoint>80) grade='E';
                else if(gradepoint>70) grade='A';
                else if(gradepoint>60) grade='B';
                else if(gradepoint>50) grade='C';
                else grade='D';
                try{
                    BufferedWriter myoutput = new BufferedWriter(new FileWriter("RESULT.txt", true));
                    myoutput.write(datastring[0]+" "+datastring[1]+" "+grade+"\n");
                    myoutput.close();
                    System.out.println("Data written successfully.");
                }catch(IOException e){
                    System.out.println("Error occured in writing file.");
                }
            }
            sc.close();
        }catch(FileNotFoundException e){
            System.out.println("File Not Found.");
        }
    }
}