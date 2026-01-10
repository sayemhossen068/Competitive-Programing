import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double a, b, c;

        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();

        double x = ((b*b) - (4*a*c));

        if(x < 0 || (a == 0)){
            System.out.println("Impossivel calcular");
        } else {
            double R1 = ((-b + Math.sqrt(x)) / (2*a));
            double R2 = ((-b - Math.sqrt(x)) / (2*a));

            System.out.printf("R1 = %.5f\n", R1);
            System.out.printf("R2 = %.5f\n", R2);
        }
        
        input.close();
    }
}