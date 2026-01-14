import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int count = 0;
        double number;

        for(int i=0; i<6; i++) {
            number = input.nextDouble();
            if (number > 0) {
                count++;
            }
        }
        System.out.println(count + " valores positivos");

        input.close();
    }
}
