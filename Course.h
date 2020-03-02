#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course {
	private:
		string name;
		string book;
		int numStudents;
	public:
		Course();
		Course(string, string, int);
		
		// getters
		string getName();
		string getBook();
		int getNumStudents();
		// setters
		void setName(string);
		void setBook(string);
		void setNumStudents(int);
		
		void display();
		void increaseEnrollment(int);
		int compareTo(const Course);
};


#endif
