#ifndef COURSE_CATALOG_H
#define COURSE_CATALOG_H

#include <iostream>
#include "Course.h"

using namespace std;

class CourseCatalog {
	private:
		Course * courses;
		int numCourses;
		void clearCatalog();
	public:
		CourseCatalog();
		~CourseCatalog();
		
		// getters
		Course * getCourses();
		int getNumCourses();
		// setters
		void setCourses(Course *, int); // require new size as well
		
		void display();
};

#endif
