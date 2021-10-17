import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
	
		System.out.print("I love pizza\n");
		System.out.print("It's really good\n");
		System.out.println();
		
		
		int x = 123;
		
		long y = 12344854389230943L;
		//Add L at the end of any long number
		
		float z = 3.14f;
		//Add f at the end of any float number
		
		char symbol = '%';
		
		
		System.out.println("My name number is "+ x);
		System.out.println(y);
		System.out.println(z);
		
		System.out.println();
		
		//Swapping two variables
		String a = "Oil";
		String b = "Water";
		String temp;
		
		temp = a;
		a = b;
		b = temp;
		
		
		System.out.println("a: " + a);
		System.out.println("b: " + b);
		System.out.println();
		
		//User input
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("What is your name? ");
		String name = scanner.nextLine();
		System.out.println("Hello " + name);
		System.out.println("How old are you? ");
		int age = scanner.nextInt();
		scanner.nextLine();
		System.out.println("Ah! You're " + age);
		
		
		/* There's also scanner.next() which stores the next token
		 * 
		 */
	}
}
