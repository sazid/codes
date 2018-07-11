import java.lang.*;

public class Burger extends FoodItem {
	private int numberOfPatties;

	public Burger() {}

	public Burger(int numberOfPatties, double price, String name) {
		super(price, name);
		this.numberOfPatties = numberOfPatties;
	}

	public void setNumberOfPatties(int numberOfPatties) {
		this.numberOfPatties = numberOfPatties;
	}

	public int getNumberOfPatties() {
		return this.numberOfPatties;
	}

	public void showDetails() {
		System.out.println(
			"Name: " + this.name
			+ "\nPrice: " + this.price
			+ "\nNumber of patties: " + this.numberOfPatties
		);
	}
}

