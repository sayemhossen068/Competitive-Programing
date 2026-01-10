import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int time = input.nextInt();

        int hour = time/3600;
        time %= 3600;

        int min = time / 60;
        time %= 60;

        int second = time;

        System.out.println(hour + ":" + min + ":" + second);
        
        input.close();
    }
}