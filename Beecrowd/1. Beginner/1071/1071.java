import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a, b;

        a = input.nextInt();
        b = input.nextInt();

        if (a > b) {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
        int sum = 0;
        for(int i = a+1; i < b; i++) {
            if (i % 2 != 0) {
                sum+=i;
            }
        }

        System.out.println(sum);

        input.close();
    }
}
