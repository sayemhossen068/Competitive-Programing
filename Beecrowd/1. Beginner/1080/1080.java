import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a;
        
        int max = 0, position = 0;
        for (int i=1; i<=100; i++) {
            a = input.nextInt();
            if (a > max) {
                max = a;
                position = i;
            }
        }

        System.out.println(max);
        System.out.println(position);

        input.close();
    }
}
