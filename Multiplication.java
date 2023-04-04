import java.util.Scanner;

public class Multiplication {

    public static void main(String[] args) {

        
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter a number to print its multiplication table: ");
        int num = scanner.nextInt();

        
        System.out.println("Multiplication table of " + num + ":");

        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + (num * i));
        }

        // Close the Scanner object
        scanner.close();
    }
}