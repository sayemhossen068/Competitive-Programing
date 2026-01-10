import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int start, end, duration;

        start = input.nextInt();
        end = input.nextInt();

        if(start < end) {
            duration = end - start;
        } else {
            duration = 24 - start + end;
        }

        System.out.println("O JOGO DUROU " + duration + " HORA(S)");

        input.close();
    }
}