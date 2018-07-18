import java.lang.*;

public abstract class FoodItem {
	protected double price;
	protected String name;

	public FoodItem() {
	}

	public FoodItem(double price, String name) {
		this.price = price;
		this.name = name;
	}

	public void setPrice(double price) {
		this.price = price;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getPrice() {
		return this.price;
	}

	public String getName() {
		return this.name;
	}

	public abstract void showDetails();
}

