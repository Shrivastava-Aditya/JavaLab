package Lab;

public class Lab {
	public String name;
	public double duration;
	public Lab(String x) {
		name = x;
	}
	public void setDuration(double d) {
		duration = d;
	}
	public void getLab() {
		System.out.println("Lab : "+name);
		System.out.println("Duration : "+duration);
	}
	public static void main(String[] args){
		Lab l1 = new Lab("OOC");
		l1.setDuration(4.3);
		l1.getLab();
	}
}
