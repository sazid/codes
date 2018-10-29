import java.lang.*;

public class Start {
	public static void main(String[] args) {
		Burger b1 = new Burger();
		Burger b2 = new Burger(2, 250, "Double Patty");

		b1.setPrice(140);
		b1.setNumberOfPatties(1);
		b1.setName("Classic Burger");
		b1.showDetails();

		b1.setPrice(b2.getPrice());
		b1.setName(b2.getName());
		b1.showDetails();

		Pizza p1 = new Pizza();
		Pizza p2 = new Pizza("L", 850, "King Pizza");

		p1.setSize("M");
		p1.setPrice(550);
		p1.setName("Cheesy Pizza");

		p2.setPrice(950.55);
		p2.showDetails();

	}
}

