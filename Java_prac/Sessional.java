import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class Sessional {
    public static void solve(){
		try{
			Scanner sc = new Scanner(System.in);
			String file1 = "INPUT1.TXT";
			FileOutputStream myoutput = new FileOutputStream(file1, true);
			System.out.print("Enter the contents of 1st file: ");
			String s = sc.nextLine() + "\n";
			writetofile(file1,s,myoutput);
			System.out.print("Enter the contents of 2nd file: ");
			s = sc.nextLine() + "\n";
			file1 = "INPUT2.TXT";
			myoutput = new FileOutputStream(file1, true);
			writetofile(file1,s,myoutput);
			compare_display();
			sc.close();
		}catch(Exception e) {
			e.printStackTrace();
		}
	}

    static void compare_display() throws FileNotFoundException{
		Scanner sc1 = new Scanner(new File("INPUT1.TXT"));
		String s1="";
		while (sc1.hasNextLine()) {
			s1+=sc1.nextLine();
		}
		sc1 = new Scanner(new File("INPUT2.TXT"));
		String s2="";
		while (sc1.hasNextLine()) {
			s2+=sc1.nextLine();
		}
		display(s1,s2);
		sc1.close();
	}
	
	static void display(String s1, String s2){
		s1 = s1.toLowerCase();
		s2 = s2.toLowerCase();
		String w1[] = s1.split(" ");
		String w2[] = s2.split(" ");
        System.out.print("Duplicate Values are = ");
		for (String s3 : w1) {
			for (String s4 : w2) {
				if (s3.equals(s4)) {
					System.out.print(s3+" ");
				}
			}
		}
	}

	private static void writetofile(String name, String s, FileOutputStream myoutput) throws IOException{
		byte[] b = s.getBytes();
		myoutput.write(b);
		myoutput.close();
		File file = new File(name);
		BufferedReader br = new BufferedReader(new FileReader(file));
	}

    public static void main(String args[]){
        solve();
    }
}
