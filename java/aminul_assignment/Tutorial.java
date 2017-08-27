public class Tutorial {
	private Student[] students = new Student[5];

	public Tutorial() {
		setupStudents();
		System.out.println("All student details:");
		displayAll();
		System.out.println("Full time students details:");
		listFullTimers(4);
	}

	public void setupStudents() {
		students[0] = new Student("Amy", 1, "ABC Street", 6);
		students[1] = new Student("Mike", 2, "Sydney", 4);
		students[2] = new Student("Anisul", 3, "Dhaka", 3);
		students[3] = new Student("David", 4, "London", 7);
		students[4] = new Student("Luice", 5, "Ontario", 2);
	}

	public void displayAll() {
		for (int i = 0; i < 5; i++) {
			System.out.println(students[i].toString());
		}
	}

	public void listFullTimers(int num) {
		for (int i = 0; i < 5; i++) {
			if (students[i].getNumberOfSubjects() >= num) {
				System.out.println(students[i].toString());
			}
		}
	}
}
