
public class Main {

	public static void main(String[] args) {
		
		String name = "Collins";
		
		name.equals("Collins"); //bool
		name.equalsIgnoreCase("collins");//bool
		name.length(); //int
		name.charAt(0); //char	(gives access to the selected character)
		name.indexOf("o"); //int
		name.isEmpty(); //boolean
		name.toUpperCase(); //String
		name.toLowerCase(); //String
		name.trim(); //String (removes empty space)
		name.replace('old', 'new'); //String (replaces old character with new)
		
		
	}
}
