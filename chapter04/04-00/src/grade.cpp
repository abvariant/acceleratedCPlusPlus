#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;


// call by value.
// Param takes copy of value of the argument.
double grade(double midterm, double finalGrade, double homework)
{
	return 0.2 * midterm + 0.4 * finalGrade + 0.4 * homework;
}

// compute a student's overall grade from midterm and final exam grades and
// vector of homework grades.
// This function does not copy its argument, because median function does so for us
double grade(double midterm, double finalGrade, const std::vector<double>& hw)
{
	// domain_error is an error type from stdexcept that relates to arguements
	// being outside of their expected domain.
	if(hw.size() == 0)
		throw domain_error("student has done no homework");

	return grade(midterm, finalGrade, median(hw));
}

double grade(const Student_info& s)
{
	return grade(s.midterm, s.finalGrade, s.homework);
}

