public class Student {
	private String name;
	private int id;
	private String address;
	private int numberOfSubjects;

	public Student(String theName, int theId, String theAddress, int noOfSubs) {
		name = theName;
		id = theId;
		address = theAddress;
		numberOfSubjects = noOfSubs;
	}

	public int getNumberOfSubjects() {
		return numberOfSubjects;
	}

	public void setNumberOfSubjects(int noOfSubs) {
		numberOfSubjects = noOfSubs;
	}

	@Override
	public String toString() {
		return 	"ID: " + id + " "
			+	"Name: " + name + " "
			+	"Address: " + address + " "
			+	"Number of subjects: " + numberOfSubjects + " ";
	}
}
