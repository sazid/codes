import java.lang.*;

public class Pizza extends FoodItem {
	private String size;

	public Pizza() {}

	public Pizza(String size, double price, String name) {
		super(price, name);
		this.size = size;
	}

	public void setSize(String size) {
		this.size = size;
	}
	
	public String getSize() {
		return this.size;
	}

	public void showDetails() {
		System.out.println(
			"Name: " + this.name
			+ "\nPrice: " + this.price
			+ "\nSize: " + this.size
		);
	}

}

