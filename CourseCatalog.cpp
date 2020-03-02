#include "CourseCatalog.h"

CourseCatalog::CourseCatalog() {
	// initially empty
	// need to check case later to make sure catalog isn't empty, e.g. courses != NULL
	courses = NULL;
	numCourses = 0;
}
CourseCatalog::~CourseCatalog() {
	clearCatalog();
}

// getters
Course * CourseCatalog::getCourses() {
	return courses;
}

int CourseCatalog::getNumCourses() {
	return numCourses;
}

// setters
void CourseCatalog::setCourses(Course * newCourses, int newNumCourses) {
	if (courses != NULL) {
		clearCatalog();
	}
	courses = newCourses;
	numCourses = newNumCourses;
}

void CourseCatalog::display() {
	cout << "***Courses in the Catalog***" << endl;
	for (int i = 0; i < numCourses; i++) {
		courses[i].display();
	}
	cout << "******" << endl << endl;
}

void CourseCatalog::clearCatalog() {
	if (courses != NULL) {
		delete [] courses;
		courses = NULL;
		numCourses = 0;
	}
}
