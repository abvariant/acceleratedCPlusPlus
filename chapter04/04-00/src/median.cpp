#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::sort;
using std::vector;

// compute the median of a vector<double>
// note that calling this function copies the entire argument vector
// We need a copy of it, because this function re-orders it to find
// the median.
double median(std::vector<double> vec)
{
	// vector<double>::size_type represents container size.
	// This could be different depending on the std container.
	// Is best practice to use size_type an unsigned int, typically)
	// typedef is useful just to called in vec_sz rather than
	// the full vector<double>::size_type.
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();

	if (size == 0)
		throw domain_error("median of an empty vector");

	sort(vec.begin(), vec.end());

	vec_sz mid = size/2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

