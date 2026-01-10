import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double n1, n2, n3, n4, exam, avg, finalavg;

        n1 = input.nextDouble();
        n2 = input.nextDouble();
        n3 = input.nextDouble();
        n4 = input.nextDouble();

        avg = (n1*2 + n2*3 + n3*4 + n4*1) / 10.0;
        avg = Math.floor(avg * 10 + 0.00001) / 10;

        System.out.printf("Media: %.1f\n", avg);

        if (avg >= 7.0) {
            System.out.print("Aluno aprovado.\n");
        } else if (avg < 5.0) {
            System.out.print("Aluno reprovado.\n");
        } else {
            System.out.print("Aluno em exame.\n");
            exam = input.nextDouble();

            System.out.printf("Nota do exame: %.1f\n", exam);
            finalavg = (avg + exam) / 2.0;

            if (finalavg >= 5.0) {
                System.out.println("Aluno aprovado.");
            } else {
                System.out.println("Aluno reprovado.");
            }
            System.out.printf("Media final: %.1f\n", finalavg);
        }
        
        input.close();
    }
}