package Lab;

public class Year extends Lab1{
	int yr = 2;
	public int getYear () {
		return yr;
	}
	public static void main(String[] args) {
		Year check = new Year();
		System.out.println(check.getName());
		System.out.println(check.getLab());
		System.out.println(check.getYear());
	}
}
