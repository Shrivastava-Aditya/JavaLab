package Lab;

public class NewClass {
	int members;
	public NewClass(int x) {
		this.members = x;
	}
	public int getMem() {
		return members;
	}
	public static void main(String[] args) {
		NewClass nc = new NewClass(19);
		System.out.println(nc.getMem());
	}
}
