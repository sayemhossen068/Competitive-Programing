import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        double a, b, c , wavg;
        
        for (int i=0; i<n; i++) {
            a = input.nextDouble();
            b = input.nextDouble();
            c = input.nextDouble();

            wavg = ((a*2.0) + (b*3.0) + (c*5.0)) / 10;

            System.out.printf("%.1f\n", wavg);
        }

        input.close();
    }
}
