import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        double x = scanner.nextDouble();
        
        double area = (4/3.0) * 3.14159 * x * x * x; 
        System.out.printf("VOLUME = %.3f\n", area);
        
        scanner.close();
    }
}