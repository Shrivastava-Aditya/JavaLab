package Lab;

public class Main {
	public static void stMet() {
		System.out.println("This is static method");
	}
	public void met() {
		System.out.println("This in non static");
	}
	public static void main(String[] args) {
		Main m = new Main();
		m.stMet();
		m.met();
	}
}
