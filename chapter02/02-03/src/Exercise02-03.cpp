#include <iostream>
#include <string>

// Say what standard library names we use.
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
	string name;
	// the number of blanks surrounding the greeting
	int xPad;
	int yPad;

	// ask for hte person's name
	cout << "Please enter your first name: ";

	// read the name
	cin >> name;

	cout << "Please enter the spacing width: ";
	cin >> xPad;
	
	cout << "Please enter the spacing height: ";
	cin >> yPad;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";


	// the number of rows and columns to write
	const int rows = yPad * 2 + 3;
	const string::size_type cols = greeting.size() + xPad * 2 + 2;

	// write a blank line to separate the output from the input
	cout << endl;

	// write "rows" rows of output
	// invariant: we have written "r" rows so far
	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;

		// invariant: we have written "c" characters so far in the current row
		while (c != cols)
		{
			// is it time to write the greeting?
			if (r == yPad + 1 && c == xPad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				// are we on the border?
				if (r == 0 || r == rows-1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return 0;
}