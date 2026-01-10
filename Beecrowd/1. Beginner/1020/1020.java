import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int days = input.nextInt();

        int years = days/365;
        days %= 365;

        int months = days / 30;
        days %= 30;

        int day = days;

        System.out.println(years + " ano(s)");
        System.out.println(months + " mes(es)");
        System.out.println(day + " dia(s)");
        
        input.close();
    }
}