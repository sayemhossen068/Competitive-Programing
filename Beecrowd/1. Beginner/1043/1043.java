import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double a, b, c;
        double area = 0, paimeter = 0;

        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        
        area = 0.5 * (a+b) * c;
        paimeter = a + b + c;

        if (a+b > c && b+c > a && c+a > b) {
            System.out.printf("Perimetro = %.1f\n", paimeter);
        } else {
            System.out.printf("Area = %.1f\n", area);
        }
        
        input.close();
    }
}