package Lab;

public class Pup extends Dog {
	public void sound() {
		super.sound();
	}
	public static void main(String[] args) {
		Pup p1 = new Pup();
		p1.sound();
	}
}
