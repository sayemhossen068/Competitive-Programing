import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    double x = scanner.nextDouble();
    double area;
    
    area = 3.14159 * x * x;
    
    System.out.printf("A=%.4f\n", area);
    
    scanner.close();
  }
}