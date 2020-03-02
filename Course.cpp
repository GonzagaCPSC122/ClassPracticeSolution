#include "Course.h"

Course::Course() {
	name = "";
	book = "";
	numStudents = 0;
}

Course::Course(string n, string b, int ns) {
	name = n;
	book = b;
	numStudents = ns;
}

// getters
string Course::getName() {
	return name;
}

string Course::getBook() {
	return book;
}

int Course::getNumStudents() {
	return numStudents;
}

// setters
void Course::setName(string newName) {
	name = newName;
}

void Course::setBook(string newBook) {
	book = newBook;
}

void Course::setNumStudents(int newNumStudents) {
	numStudents = newNumStudents;
}

void Course::display() {
	cout << "Name: " << name << endl;
	cout << "Book: " << book << endl;
	cout << "Number of students: " << numStudents << endl;
}

void Course::increaseEnrollment(int increment) {
	numStudents += increment;
}

// objects are pass by value
// make const if "read only" 
// e.g. function shouldn't change state of object, just read it
int Course::compareTo(const Course other) {
	// compare attribute by attribute
	// name, then book, then numStudents
	// return -1 if invoking object comes before param object
	// return 1 if invoking object comes after param object
	// return 0 if invoking object and param object have same attributes
	if (name < other.name) {
		return -1;
	}
	else if (name > other.name) {
		return 1;
	}
	else { // same name 
		if (book < other.book) {
			return -1;
		}
		else if (book > other.book) {
			return 1;
		}
		else { // same name and same book
			if (numStudents < other.numStudents) {
				return -1;
			}
			else if (numStudents > other.numStudents) {
				return 1;
			}
			else { // same name and same book and same numStudents
				return 0;
			}
		}
	}
}
