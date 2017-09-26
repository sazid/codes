import java.util.Random;
public class HelloWorld {
	public static void main(String[] args) {
		int[] x = new int[20];
		Random rand = new Random();
		for (int i = 0; i < x.length; i++) {
			x[i] = rand.nextInt(20-3 + 1) + 3;
			System.out.println(x[i]);
		}
	}
}
