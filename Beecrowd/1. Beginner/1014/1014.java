import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        double a = scanner.nextDouble();
        double b = scanner.nextDouble();
        
        double ans = a/b;
        
        System.out.printf("%.3f km/l\n", ans);
        
        scanner.close();
    }
}