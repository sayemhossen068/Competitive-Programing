import java.util.Scanner;
public class Main{
  public static void main(String[] agrs){
    Scanner scanner = new Scanner(System.in);
    
    double x = scanner.nextDouble();
    double y = scanner.nextDouble();
    double z = scanner.nextDouble();
    double wAvg = ((x*2)+(y*3)+(z*5))/10;
    System.out.printf("MEDIA = %.1f\n", wAvg);
    
    scanner.close();
  }
}