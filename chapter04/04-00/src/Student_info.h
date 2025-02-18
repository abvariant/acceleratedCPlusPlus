#ifndef GUARD_Student_info
#define GUARD_Student_info

// Student_info.h header file
#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
	std::string name;
	double midterm, finalGrade;
	std::vector<double> homework;
};

// A function to define the notion of "less than" on student
// names, so later on a sorting function can operate on it.
// Essentially normal dictionary ordering.
bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif


