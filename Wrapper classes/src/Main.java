
public class Main {

	public static void main(String[] args) {
		/* wrapper class = provides a way to use a primitive data types as reference data types
		 * 					reference data types contain useful methods
		 * 					can be use with collection (ex.ArrayList)
		 * 
		 *primitive		wrapper
		 *---------		---------
		 *boolean		Boolean
		 *char			Character
		 *int			Integer
		 *double		Double
		 *
		 *autoboxing = the automatic conversion that the Java compiler makes between the primitive types and their corresponding object wrapper classes	
		 *unboxing = the reverse of autoboxing. Automatic conversion of wrapper class to primitive
		 *
		 *
		 *Reference data types are slower so it is better to stick to primitive unless you need methods
		 */
		
		Boolean a = true;
		Character b = '@';
		Integer c = 123;
		Double d = 3.14;
		String e = "Hello";
		
		//Unboxing
		if (a==true) {
			System.out.println("This is true");
		}
	}

}
