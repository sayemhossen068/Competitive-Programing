import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double salery = input.nextDouble();
        double tax = 0;

        if (salery <= 2000.00) {
            System.out.println("Isento");
        } else if (salery > 2000.00 && salery <= 3000.00) {
            tax  = (salery - 2000.00) * 0.08;
            System.out.printf("R$ %.2f\n", tax);
        } else if (salery > 3000.00 && salery <= 4500.00) {
            tax = (1000.00 * 0.08) + ((salery - 3000.00) * 0.18);
            System.out.printf("R$ %.2f\n", tax);
        } else if (salery > 4500.00) {
            tax = (1000.00 * 0.08) + (1500.00 * 0.18) + ((salery - 4500.00) * 0.28);
            System.out.printf("R$ %.2f\n", tax);
        }

        input.close();
    }
}
