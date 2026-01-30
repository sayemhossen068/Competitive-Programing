import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a, inCount=0, outCount=0;
        int n = input.nextInt();

        for(int i=0; i<n; i++) {
            a = input.nextInt();
            if (a >= 10 && a <= 20){
                inCount++;
            } else {
                outCount++;
            }
        }

        System.out.println(inCount + " in");
        System.out.println(outCount + " out");

        input.close();
    }
}
