import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    double a, b, c;
    double x, y, z;
    
    a = scanner.nextDouble();
    b = scanner.nextDouble();
    c = scanner.nextDouble();
    
    x = scanner.nextDouble();
    y = scanner.nextDouble();
    z = scanner.nextDouble();
    
    double output = (b*c) + (y*z);
    
    System.out.printf("VALOR A PAGAR: R$ %.2f\n", output);
    
    scanner.close();
  }
}