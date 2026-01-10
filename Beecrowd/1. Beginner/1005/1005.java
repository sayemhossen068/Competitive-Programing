import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    double x = scanner.nextDouble();
    double y = scanner.nextDouble();
    double wAvg = ((x*3.5)+(y*7.5)) / 11;
    
    System.out.printf("MEDIA = %.5f\n", wAvg);
    
    scanner.close();
  }
}