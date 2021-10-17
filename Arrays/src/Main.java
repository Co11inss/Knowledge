
public class Main {

	public static void main(String[] args) {
		
		String[] cars = {"Camaro", "Corvette", "Tesla", "BMW"};
		
		cars[0] = "Mustang";
		
		System.out.println(cars[0]);
		
		//or
		
		String[] brands = new String[3];
		
		brands[0] = "Nike";
		brands[1] = "Adidas";
		brands[2] = "Jordan";
		
		System.out.println(brands[1]);
		
		for(int i = 0; i<cars.length; i++) {
			System.out.println(cars[i]);
			
			/* For 2D arrays do brands[i][j]
			 * 
			 * TO PRINT
			 * 
			 * for (int i=0; i<brands.length; i++){
			 * 		System.out.println();
			 * 		for(int j=0; j<brands[i].length; j++){
			 * 			System.out.println(brands[i][j]+" ");
			 * 		}
			 * }
			 */
		}
		
	}

}
