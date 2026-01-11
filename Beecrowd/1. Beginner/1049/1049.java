import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String w1 = input.nextLine();
        String w2 = input.nextLine();
        String w3 = input.nextLine();

        if (w1.equals("vertebrado")) {
            if (w2.equals("ave")) {
                if (w3.equals("carnivoro")) {
                    System.out.println("aguia");
                } else if (w3.equals("onivoro")) {
                    System.out.println("pomba");
                }
            } else if (w2.equals("mamifero")) {
                if (w3.equals("onivoro")) {
                    System.out.println("homem");
                } else if (w3.equals("herbivoro")) {
                    System.out.println("vaca");
                }
            }
        } else if (w1.equals("invertebrado")) {
            if (w2.equals("inseto")) {
                if (w3.equals("hematofago")) {
                    System.out.println("pulga");
                } else if (w3.equals("herbivoro")) {
                    System.out.println("lagarta");
                }
            } else if (w2.equals("anelideo")) {
                if (w3.equals("hematofago")) {
                    System.out.println("sanguessuga");
                } else if (w3.equals("onivoro")) {
                    System.out.println("minhoca");
                }
            }
        }

        input.close();
    }
}
