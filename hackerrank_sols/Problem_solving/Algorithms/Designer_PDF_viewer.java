//Kumar Ankit
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the designerPdfViewer function below.
    static int designerPdfViewer(int[] h, String word) {
        int max=0;
        for(int i=0;i<word.length();i++){
            char s=word.charAt(i);
            switch(s){
                case 'a':{
                    if(h[0]>max)
                    max=h[0];
                }
                break;
                case 'b':{
                    if(h[1]>max)
                    max=h[1];
                }
                break;
                case 'c':{
                    if(h[2]>max)
                    max=h[2];
                }
                break;
                case 'd':{
                    if(h[3]>max)
                    max=h[3];
                }
                break;
                case 'e':{
                    if(h[4]>max)
                    max=h[4];
                }
                break;
                case 'f':{
                    if(h[5]>max)
                    max=h[5];
                }
                break;
                case 'g':{
                    if(h[6]>max)
                    max=h[6];
                }
                break;
                case 'h':{
                    if(h[7]>max)
                    max=h[7];
                }
                break;
                case 'i':{
                    if(h[8]>max)
                    max=h[8];
                }
                break;
                case 'j':{
                    if(h[9]>max)
                    max=h[9];
                }
                break;
                case 'k':{
                    if(h[10]>max)
                    max=h[10];
                }
                break;
                case 'l':{
                    if(h[11]>max)
                    max=h[11];
                }
                break;
                case 'm':{
                    if(h[12]>max)
                    max=h[12];
                }
                break;
                case 'n':{
                    if(h[13]>max)
                    max=h[13];
                }
                break;
                case 'o':{
                    if(h[14]>max)
                    max=h[14];
                }
                break;
                case 'p':{
                    if(h[15]>max)
                    max=h[15];
                }
                break;
                case 'q':{
                    if(h[16]>max)
                    max=h[16];
                }
                break;
                case 'r':{
                    if(h[17]>max)
                    max=h[17];
                }
                break;
                case 's':{
                    if(h[18]>max)
                    max=h[18];
                }
                break;
                case 't':{
                    if(h[19]>max)
                    max=h[19];
                }
                break;
                case 'u':{
                    if(h[20]>max)
                    max=h[20];
                }
                break;
                case 'v':{
                    if(h[21]>max)
                    max=h[21];
                }
                break;
                case 'w':{
                    if(h[22]>max)
                    max=h[22];
                }
                break;
                case 'x':{
                    if(h[23]>max)
                    max=h[23];
                }
                break;
                case 'y':{
                    if(h[24]>max)
                    max=h[24];
                }
                break;
                case 'z':{
                    if(h[25]>max)
                    max=h[25];
                }
            }
        }
        return max*word.length();

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[] h = new int[26];

        String[] hItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < 26; i++) {
            int hItem = Integer.parseInt(hItems[i]);
            h[i] = hItem;
        }

        String word = scanner.nextLine();

        int result = designerPdfViewer(h, word);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
