// source file for Student_info-related functions
#include "Student_info.h"

using std::istream;
using std::vector;



bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s)
{
	// read and store the student's name and midterm and final exam grades
	is >> s.name >> s.midterm >> s.finalGrade;

	// read and store all the student's homework grades
	read_hw(is, s.homework);

	return is;
}

// takes in and returns in with no copies.
std::istream& read_hw(std::istream& in, std::vector<double>& hw)
{
	if(in)
	{
		// get rid of previous contents
		hw.clear();

		// read homework grades
		double x;
		while(in >> x)
			hw.push_back(x);

		// clear the stream so that input will work for the next student
		// Resets the error state of the stream. (Calling clear() on a vector
		// will empty it, not so with a stream.
		in.clear();
	}

	return in;

}

