#include "Course.h"
#include "CourseCatalog.h"

int main() {
	// make some Course objects
	Course defaultCourse; // invokes DVC (default value constructor)
	defaultCourse.display();
	
	Course thisCourse("CPSC 122", "Gaddis", 28); // invokes EVC (explicit value constructor)
	thisCourse.display();
	// increse enrollment by 5
	cout << "Before increase enrollment: " << thisCourse.getNumStudents() << endl;
	thisCourse.increaseEnrollment(5);
	cout << "After increase enrollment: " << thisCourse.getNumStudents() << endl;
	
	// compare Course objects
	Course cpsc121("CPSC 121", "Gaddis", 30);
	cout << cpsc121.compareTo(thisCourse) << endl; // "CPSC 121" comes before "CPSC 122"
	Course cpsc122 = thisCourse; // makes a copy
	cout << cpsc122.compareTo(thisCourse) << endl; // same for all three attributes
	cpsc122.setNumStudents(100); 
	cout << cpsc122.compareTo(thisCourse) << endl; // same name and book, though cpsc122 has higher number of students so should come after thisCourse
	
	// array of 20 Course objects
	const int size = 20;
	Course * cpscCourses = new Course[size]; // invokes DVC for 20 Course objects
	for (int i = 0; i < size; i++) {
		cpscCourses[i].display();
	}
	
	// challenge question... How would you “wrap” the cpscCourses array in a class called CourseCatalog? 
	CourseCatalog catalog;
	catalog.setCourses(cpscCourses, size);
	catalog.display();
	// other common public operations (member functions) to add to CourseCatalog...
	// addCourse()
	// removeCourse()
	// editCourse()
	// search()
	// sort() // can make use of our Course::compareTo()
	// others?
	
	return 0;
}
