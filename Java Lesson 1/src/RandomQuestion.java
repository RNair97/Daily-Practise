import java.util.Random;
import java.util.Scanner;

public class RandomQuestion {

	public static void main(String[] args) {
		int rndNumber;

		//Object object_name = new Object (ARGS)
		Random rnd = new Random();
		Scanner input = new Scanner(System.in);

		System.out.printf("Enter your question: ");
		input.nextLine();

		// Formula for random number [(max - min) + min]
		rndNumber = rnd.nextInt(7) + 1; // Plus 1 because it starts from 1

		if (rndNumber == 1) {
			System.out.printf("Answer: Yes!\n");
		} else if (rndNumber == 2) {
			System.out.printf("Answer: No!\n");
		} else if (rndNumber == 3) {
			System.out.printf("Answer: For-Sure!\n");
		} else if (rndNumber == 4) {
			System.out.printf("Answer: Maybe!\n");
		} else if (rndNumber == 5) {
			System.out.printf("Answer: Never!\n");
		} else if (rndNumber == 6) {
			System.out.printf("Answer: I'm not sure.\n");
		} else if (rndNumber == 7) {
			System.out.printf("Answer: Error!\n");
		}

		input.close();
	}

}