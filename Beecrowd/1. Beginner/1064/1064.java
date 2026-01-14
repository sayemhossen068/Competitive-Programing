import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double number, sum = 0;
        int count = 0;

        for(int i=0; i<6; i++) {
            number = input.nextDouble();
            if(number > 0) {
                sum += number;
                count++;
            }
        }

        System.out.println(count + " valores positivos");
        System.out.printf("%.1f", sum/count);

        input.close();
    }
}
