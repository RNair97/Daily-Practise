import java.util.Scanner;

/**
 * Calculator program User is prompted for two value inputs that can be
 * multiplied, divided, added or subtracted. 
 * Example:
 * Enter value a: 1 
 * Enter Value b: 2 
 * [*],[/],[-],[+] 
 * Enter an operation: 4 
 * 1 + 2 = 3
 * 
 * @author Ambrose
 */

public class Calculator {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double valueA, valueB, answer;
		int operation;
		
		 //Always keep the scanner in the same "type" in a sense for example: All doubles and ints together, and all nextLines together
		
		System.out.printf("Enter value a: ");
		valueA = input.nextDouble();

		System.out.printf("Enter value b: ");
		valueB = input.nextDouble();

		System.out.println("1.[*], 2.[/], 3.[-], 4.[+]");
		System.out.printf("Select an option: ");
		operation = input.nextInt();
		
		if (operation == 1)
		{
			answer = valueA * valueB;
			System.out.printf("%f * %f = %f", valueA, valueB, answer);
		} 
		else if (operation == 2)
		{
			answer = valueA / valueB;
			System.out.printf("%f / %f = %f", valueA, valueB, answer);
		}
		else if (operation == 3)
		{
			answer = valueA - valueB;
			System.out.printf("%f - %f = %f", valueA, valueB, answer);
		}
		else if (operation == 4)
		{
			answer = valueA + valueB;
			System.out.printf("%f + %f = %f", valueA, valueB, answer);
		}
		
		input.close();
	}

}
