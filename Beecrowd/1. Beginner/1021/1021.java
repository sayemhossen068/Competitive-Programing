import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double amount = input.nextDouble();

        int notes = (int)amount;
        int coins =(int) ((amount - notes)*100);
        
        System.out.println("NOTAS:");
        System.out.printf("%d nota(s) de R$ 100.00\n", notes/100);
        notes %= 100;

        System.out.printf("%d nota(s) de R$ 50.00\n", notes/50);
        notes %= 50;

        System.out.printf("%d nota(s) de R$ 20.00\n", notes/20);
        notes %= 20;

        System.out.printf("%d nota(s) de R$ 10.00\n", notes/10);
        notes %= 10;

        System.out.printf("%d nota(s) de R$ 5.00\n", notes/5);
        notes %= 5;
        
        System.out.printf("%d nota(s) de R$ 2.00\n", notes/2);
        notes %= 2;

        coins += notes * 100;

        System.out.println("MOEDAS:");

        System.out.printf("%d moeda(s) de R$ 1.00\n", coins/100);
        coins %= 100;

        System.out.printf("%d moeda(s) de R$ 0.50\n", coins/50);
        coins %= 50;

        System.out.printf("%d moeda(s) de R$ 0.25\n", coins/25);
        coins %= 25;
        
        System.out.printf("%d moeda(s) de R$ 0.10\n", coins/10);
        coins %= 10;
        
        System.out.printf("%d moeda(s) de R$ 0.05\n", coins/5);
        coins %= 5;
        
        System.out.printf("%d moeda(s) de R$ 0.01\n", coins/1);
        
        input.close();
    }
}