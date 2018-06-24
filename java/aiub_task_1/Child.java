import java.lang.*;

class Child extends Parent {
	Child() {
		System.out.println("Empty child");
	}

	Child(int a) {
		System.out.println("Para-1 child");
	}

	Child(int a, int b) {
		System.out.println("Para-2 child");
	}
}

