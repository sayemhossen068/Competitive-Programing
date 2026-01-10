import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    int x = scanner.nextInt();
    int y = scanner.nextInt();
    
    System.out.println("X = " + (x + y));
    
    scanner.close();
  }
}