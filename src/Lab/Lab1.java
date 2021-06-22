package Lab;

public class Lab1 extends College {
	String name1 = "OOC";
	int additional = 1;
	public int getAdd() {
		return additional;
	}
	public static void main(String[] args) {
		Lab1 l1 = new Lab1();
		System.out.println("Total : "+ l1.getSub()+ "+" +l1.getAdd());
	}
	public String getLab() {
		return name1;
	}
}
