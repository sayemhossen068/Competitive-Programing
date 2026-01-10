import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double a, b, c;

        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();

        if (a >= (b+c) || b >= (a+c) || c >= (a+b)) {
            System.out.println("NAO FORMA TRIANGULO");
        } else if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)) {
            System.out.println("TRIANGULO RETANGULO");
        } else if (a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b)) {
            System.out.println("TRIANGULO OBTUSANGULO");
        } else if (a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b)) {
            System.out.println("TRIANGULO ACUTANGULO");
        } if (a == b && a == c) {
            System.out.println("TRIANGULO EQUILATERO");
        } if ((a == b && a != c)  || (a == c && a != b) || (b == c && b != a)) {
            System.out.println("TRIANGULO ISOSCELES");
        }
        
        input.close();
    }
}