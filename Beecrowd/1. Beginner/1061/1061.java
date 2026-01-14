import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        input.next();
        int d1 = input.nextInt();

        int h1 = input.nextInt();
        input.next();
        int m1 = input.nextInt();
        input.next();
        int s1 = input.nextInt();
        
        input.next();
        int d2 = input.nextInt();
        
        int h2 = input.nextInt();
        input.next();
        int m2 = input.nextInt();
        input.next();
        int s2 = input.nextInt();

        int start = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
        int end   = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;
        
        int diff = end - start;
        
        int days = diff / 86400;
        diff %= 86400;
        
        int hours = diff / 3600;
        diff %= 3600;
        
        int minutes = diff / 60;
        int seconds = diff % 60;
        
        System.out.println(days + " dia(s)");
        System.out.println(hours + " hora(s)");
        System.out.println(minutes + " minuto(s)");
        System.out.println(seconds + " segundo(s)");

        input.close();
    }
}
