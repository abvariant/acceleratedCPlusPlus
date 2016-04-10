#include <iostream>
#include <string>

// Say what standard library names we use.
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
	int no1;
	int no2;

	cout << "Please enter the first number: ";
	cin >> no1;
	
	cout << "Please enter the second number: ";
	cin >> no2;

	if (no1==no2)
	{
		cout << "The numbers are equal!" << endl;
	}
	else if (no1 < no2)
	{
		cout << no2 << " is larger than " << no1 << endl;
	}
	else
	{
		cout << no1 << " is larger than " << no2 << endl;
	}
	return 0;
}
