import java.util.Random;
import java.util.Scanner;

public class RandomQuestionAmbrose {
	
	public static void main(String[] args)
	{
		Random rnd = new Random();
		Scanner input = new Scanner(System.in);
		
		final String[] answer = { "Yes!", "No!", "Maybe!", "For-sure!", "Never!", "I'm not sure.", "Error!" };
		
		System.out.printf("Enter your question: ");
		input.nextLine();
		
		int rndNumber = rnd.nextInt(7); // 0 - 6
		
		System.out.printf("Answer: %s\n", answer[rndNumber]);
		
		input.close();
	}
}
