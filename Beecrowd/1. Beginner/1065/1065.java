import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double number;
        int count = 0;

        for(int i=0; i<5; i++) {
            number = input.nextDouble();
            if(number % 2 == 0) {
                count++;
            }
        }

        System.out.println(count + " valores pares");

        input.close();
    }
}
