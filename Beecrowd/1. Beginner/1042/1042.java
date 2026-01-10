import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int x = input.nextInt();
        int y = input.nextInt();
        int z = input.nextInt();

        int a=x, b=y, c=z;
        int temp = 0;

        if(a > b){
            temp = a;
            a = b;
            b = temp;
        } if (a > c) {
            temp = a;
            a = c;
            c = temp;
        } if (b > c){
            temp = b;
            b = c;
            c = temp;
        }

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

        System.out.println();

        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        
        input.close();
    }
}