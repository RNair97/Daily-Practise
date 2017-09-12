public class LectureOne //always some name as file name --> Java is CaseSensitive
{

    public static void main(String[] args)
    {
        System.out.println("Hello World!"); //prints this and a new line after it
        System.out.printf("%s\n", "Hello World!"); //this prints a string and then new line
        System.out.print("Hello World"); //same thing as ln but no new line

        /**
         * Local variables because it is inside a function or body/block of code.
         **/

        int intA = 5;
        int intB = 5;

        System.out.println("The value of a is: " + intA + " and the value of b is: " + intB); // same thing as below --> Java Version
        System.out.printf("The value of a is %d and the value of b is %d\n", intA, intB); //can only use this in formated print

        // %d is decimal --> integer value -/+ 2_BILLION --> 32 BITS
        // %f is a single precision floating point value --> 5.6 --> 32 BITS // smaller double
        // %f is a double precision floating point value -> 5.3 --> 64 BITS
        // %l is a long --> integer value -/+ 9_BILLION --> 64 BITS
        // %s is a String --> 64 BITS
        // %c is a char --> 1 BITS

        double dblA = 5.94823d;
        double dblB = 4.2323d;
        double dblC = dblA + dblB;

        System.out.printf("The value of A is %f and the value of B is %f\n", dblA, dblB);
        System.out.printf("The sum of %f + %f is: %f\n", dblA, dblB, dblC);
        System.out.printf("The sum is = " + dblC + "\n");
       
        int sumAB = (int) (dblA + dblB);

        System.out.printf("The sum of %.2f + %.2f is: %d\n", dblA, dblB, sumAB); //format to decimal place = %.2 would give you 2 DECIMAL PLACES


        int var1 = 5;
        int var2 = 5;

        if (var1 == var2)
        {
            System.out.println("Var1 and Var2 are equal!");
        }

        if (var1 == 10)
        {
            System.out.println("Var1 is equal to 10!");
        }
        else
        {
            System.out.println("Var1 is not equal to 10!");
        }

        switch (var1) //more specific than if
        {
            case 5:
                System.out.println("Var1 is 5!");
                break;

            case 10:
                System.out.println("Var1 is 10");
                break;

            case 1:
            case 2:
            case 3:
                System.out.println("Var1 is either 1 or 2 or 3");
                break;
        }

        // Strings --> Array of characters. --> Wtf is an array? OR At it's LOWEST point.. a bunch of bytes (64).
        // Array is a container. [A][M][B][R][O][S][E] --> Each individual one is an array --> together is strings.
        // Strings in Java is literally a piece of text. --> Why use Strings? To store user data.
        String myName = "Ambrose";
        String myPassword = "Bitch123";

        // My name is ^^

        System.out.printf("My name is %s\n", myName);
    }

}
