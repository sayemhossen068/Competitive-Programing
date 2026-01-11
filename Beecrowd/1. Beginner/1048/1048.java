import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double x, y, z;
        x = input.nextDouble();

        if (x <= 400) {
            z = x + (x * 0.15);
            System.out.printf("Novo salario: %.2f\n", z);
            y = (z - x);
            System.out.printf("Reajuste ganho: %.2f\n", y);
            System.out.println("Em percentual: 15 %");
        }
        if (x > 400 && x <= 800) {
            z = x + (x * 0.12);
            System.out.printf("Novo salario: %.2f\n", z);
            y = (z - x);
            System.out.printf("Reajuste ganho: %.2f\n", y);
            System.out.println("Em percentual: 12 %");
        }
        if (x > 800 && x <= 1200) {
            z = x + (x * 0.10);
            System.out.printf("Novo salario: %.2f\n", z);
            y = (z - x);
            System.out.printf("Reajuste ganho: %.2f\n", y);
            System.out.println("Em percentual: 10 %");
        }
        if (x > 1200 && x <= 2000) {
            z = x + (x * 0.07);
            System.out.printf("Novo salario: %.2f\n", z);
            y = (z - x);
            System.out.printf("Reajuste ganho: %.2f\n", y);
            System.out.println("Em percentual: 7 %");
        }
        if (x > 2000) {
            z = x + (x * 0.04);
            System.out.printf("Novo salario: %.2f\n", z);
            y = (z - x);
            System.out.printf("Reajuste ganho: %.2f\n", y);
            System.out.println("Em percentual: 4 %");
        }

        input.close();
    }
}
