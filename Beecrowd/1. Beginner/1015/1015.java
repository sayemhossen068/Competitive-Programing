import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        double x1 = scanner.nextDouble();
        double y1 = scanner.nextDouble();
        double x2 = scanner.nextDouble();
        double y2 = scanner.nextDouble();
        
        double x = Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2);
        double ans = Math.sqrt(x);
        
        System.out.printf("%.4f\n", ans);
        
        scanner.close();
    }
}