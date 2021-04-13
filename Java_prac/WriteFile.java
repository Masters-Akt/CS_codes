import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

class WriteFile {
public static void main(String[] args) {
		doIt();
	}

	public static void doIt() {

		try {
			Scanner sc = new Scanner(System.in);
			String name = "INPUT1.TXT";
			
			FileOutputStream fos = new FileOutputStream(name, true);
			System.out.print("Enter file 1 content: ");

			String str = sc.nextLine() + "\n";
			
			writeFile(name,str,fos);
			
			System.out.print("Enter file 2 content: ");
			str = sc.nextLine() + "\n";
			
			name = "INPUT2.TXT";
			fos = new FileOutputStream(name, true);

			writeFile(name,str,fos);

			compare_display();
			
			sc.close();

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	static void compare_display() throws FileNotFoundException {
		
		Scanner input = new Scanner(new File("INPUT1.TXT"));
		String a = "";
		while (input.hasNextLine()) {
			a += input.nextLine();
		}

		input = new Scanner(new File("INPUT2.TXT"));
		String b = "";
		while (input.hasNextLine()) {
			b += input.nextLine();
		}

		display(a, b);
		
		input.close();
		
	}
	
	static void display(String string, String string2) {

		string = string.toLowerCase();
		string2 = string2.toLowerCase();

		String words[] = string.split(" ");
		String words2[] = string2.split(" ");

		for (String string3 : words) {

			for (String string4 : words2) {

				if (string3.equals(string4)) {
					System.out.println("Duplicate " + string3);
				}

			}

		}

	}

	private static void writeFile(String name, String str, FileOutputStream fos) throws IOException {
		byte[] b = str.getBytes();
		fos.write(b);
		fos.close();
		File file = new File(name);
		BufferedReader br = new BufferedReader(new FileReader(file));
		
	}


}