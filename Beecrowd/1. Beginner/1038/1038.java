import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double a = input.nextDouble();
        double b = input.nextDouble();

        if(a == 1) {
            System.out.printf("Total: R$ %.2f\n", 4.00*b);
        } else if(a == 2) {
            System.out.printf("Total: R$ %.2f\n", 4.50*b);
        } else if(a == 3) {
            System.out.printf("Total: R$ %.2f\n", 5.00*b);
        } else if(a == 4) {
            System.out.printf("Total: R$ %.2f\n", 2.00*b);
        } else if(a == 5) {
            System.out.printf("Total: R$ %.2f\n", 1.50*b);
        }
        
        input.close();
    }
}