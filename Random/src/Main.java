import java.util.Random;

public class Main {

	public static void main(String[] args) {
		
		Random random = new Random();
		
		int x = random.nextInt(6)+1;
		//Generates random integer between 
		
		random.nextDouble();
		//Generates random double
		
		random.nextBoolean();
		//Randomises True or False
		
		System.out.println(x);

	}

}
