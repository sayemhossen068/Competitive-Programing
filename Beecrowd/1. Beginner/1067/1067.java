import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int x = input.nextInt();

        for(int i=1; i<=x; i++) {
            if((i & 1) == 1) {
                System.out.println(i);
            }
        }

        input.close();
    }
}
