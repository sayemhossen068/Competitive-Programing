import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int count = 0;

        while (count < 6) {
            if (n % 2 != 0) {
                System.out.println(n);
                count++;
            }
            n++;
        }

        input.close();
    }
}
