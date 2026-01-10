import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    int a = scanner.nextInt();
    double b = scanner.nextDouble();
    double c = scanner.nextDouble();
    
    System.out.println("NUMBER = " + a);
    System.out.printf("SALARY = U$ %.2f\n", b*c);
    
    scanner.close();
  }
}