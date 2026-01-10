import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    String name = scanner.nextLine();
    double x = scanner.nextDouble();
    double y = scanner.nextDouble();
    
    double output = x + (y * 0.15);
    
    System.out.printf("TOTAL = R$ %.2f\n", output);
    
    scanner.close();
  }
}