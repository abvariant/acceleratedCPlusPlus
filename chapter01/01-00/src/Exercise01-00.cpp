// Ask for a person's name, and greet the person.

#include <iostream>
#include <string>

int main()
{
	// Ask for the person's name
	std::cout << "Please enter your first name: " << std::endl;

	// Read the name
	std::string name;	// define name
	std::cin >> name;	// read into name

	// Write greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}	
