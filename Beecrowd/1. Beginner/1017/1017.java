import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        double speed = 0, time = 0;

        time = input.nextDouble();
        speed = input.nextDouble();

        double distance = time * speed;
        double fuel = distance / 12.0;

        System.out.printf("%.3f\n", fuel);

        input.close();
    }
}