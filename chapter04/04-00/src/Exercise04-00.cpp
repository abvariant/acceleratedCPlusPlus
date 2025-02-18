#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"

// Say what standard library names we use.
using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
	vector<Student_info> students;
	Student_info record;

	// length of longest name
	// String object defines type of size. 
	// Probably an unsigned int, but we need this because max() 
	// used below only accepts two args of the same type, and 
	// record.name.size() is of type string::size_type
	string::size_type maxlen = 0;

	// read and store all student's data
	// Invariant:	students variable contains all the student records read so far
	// 		maxlen variable containsthe length of the longest name in students variable
	while(read(cin, record))
	{
		// find length of longest name
		// max() defined in <algorithm>
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	// alphabetize the student records
	// We're passing sort our own "compare" function that defines "less than"
	// on characters (normal alphabetical ordering)
	// This is std::sort, not one of the other methods we've defined!
	sort(students.begin(), students.end(), compare);

	// write the names and grades
	for(vector<Student_info>::size_type i = 0; i != students.size(); ++i)
	{
		// write the name, padded on the right to maxlen + 1 chars
		cout << students[i].name
		     << string(maxlen + 1 - students[i].name.size(), ' ');

		// compute and write the grade
		try 
		{
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3)
			     << final_grade
			     << setprecision(prec);
		}
		catch(domain_error e)
		{
			cout << e.what();
		}

		cout << endl;
	}

	return 0;
}

