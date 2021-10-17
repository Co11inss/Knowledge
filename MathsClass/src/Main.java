import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		double x = 3.14;
		double y = 10;
		
		double z;
		
		Math.max(x, y);
		Math.min(x, y);
		
		Math.abs(x); //Absolute
		Math.sqrt(x);
		Math.round(x);
		Math.ceil(x); //Always round up
		Math.floor(x); //Always round down
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter side x: ");
		x = scanner.nextInt();
		scanner.nextLine();
		
		System.out.println("Enter side y ");
		y = scanner.nextInt();
		scanner.nextLine();
		
		z = Math.sqrt(x * x + y * y);
		System.out.println("The hypoteneus is: "+ z);
		
		scanner.close();
		
		
	}
}
