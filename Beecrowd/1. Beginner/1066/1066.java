import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double number;
        int evenCount = 0, oddCount = 0, posiitveCount = 0, negativeCount = 0;

        for(int i=0; i<5; i++) {
            number = input.nextDouble();
            if(number % 2 == 0) {
                evenCount++;
            } if (number % 2 != 0) {
                oddCount++;
            } if (0 < number) {
                posiitveCount++;
            } if (0 > number) {
                negativeCount++;
            }
        }

        System.out.println(evenCount + " valor(es) par(es)");
        System.out.println(oddCount + " valor(es) impar(es)");
        System.out.println(posiitveCount + " valor(es) positivo(s)");
        System.out.println(negativeCount + " valor(es) negativo(s)");

        input.close();
    }
}
