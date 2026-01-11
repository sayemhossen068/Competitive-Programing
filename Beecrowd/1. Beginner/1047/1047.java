import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int h1, m1, h2, m2;
        int startMinutes, endMinutes, duration, hours, minutes;

        h1 = input.nextInt();
        m1 = input.nextInt();
        h2 = input.nextInt();
        m2 = input.nextInt();

        startMinutes = (h1 * 60) + m1;
        endMinutes = (h2 * 60) + m2;

        if (startMinutes < endMinutes) {
            duration = endMinutes - startMinutes;
        } else {
            duration = ((24 * 60) - startMinutes) + endMinutes;
        }

        hours = duration / 60;
        minutes = duration % 60;

        System.out.println("O JOGO DUROU " + hours + " HORA(S) E " + minutes + " MINUTO(S)");

        input.close();
    }
}
