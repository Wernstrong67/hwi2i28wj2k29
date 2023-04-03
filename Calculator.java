import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Select operation: ");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Modulus");
            System.out.println("6. Power");
            System.out.println("7. Square root");
            System.out.println("8. Logarithm (base 10)");
            System.out.println("9. Natural logarithm");
            System.out.println("0. Exit");

            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    // Addition
                    System.out.println("Enter first number: ");
                    double num1 = scanner.nextDouble();
                    System.out.println("Enter second number: ");
                    double num2 = scanner.nextDouble();
                    System.out.println("Result: " + (num1 + num2));
                    break;

                case 2:
                    // Subtraction
                    System.out.println("Enter first number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Enter second number: ");
                    num2 = scanner.nextDouble();
                    System.out.println("Result: " + (num1 - num2));
                    break;

                case 3:
                    // Multiplication
                    System.out.println("Enter first number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Enter second number: ");
                    num2 = scanner.nextDouble();
                    System.out.println("Result: " + (num1 * num2));
                    break;

                case 4:
                    // Division
                    System.out.println("Enter first number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Enter second number: ");
                    num2 = scanner.nextDouble();

                    if (num2 == 0) {
                        System.out.println("Cannot divide by zero!");
                    } else {
                        System.out.println("Result: " + (num1 / num2));
                    }

                    break;

                case 5:
                    // Modulus
                    System.out.println("Enter first number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Enter second number: ");
                    num2 = scanner.nextDouble();
                    System.out.println("Result: " + (num1 % num2));
                    break;

                case 6:
                    // Power
                    System.out.println("Enter base: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Enter exponent: ");
                    num2 = scanner.nextDouble();
                    System.out.println("Result: " + (Math.pow(num1, num2)));
                    break;

                case 7:
                    // Square root
                    System.out.println("Enter number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Result: " + (Math.sqrt(num1)));
                    break;

                case 8:
                    // Logarithm (base 10)
                    System.out.println("Enter number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Result: " + (Math.log10(num1)));
                    break;

                case 9:
                    // Natural logarithm
                    System.out.println("Enter number: ");
                    num1 = scanner.nextDouble();
                    System.out.println("Result: " + (Math.log(num1)));
                    break;

                case 0:
                    // Exit program
                    System.exit(0);
                    break;

                default:
                    System.out.println("Invalid choice!");
                    break;
            }
        }
    }
}


