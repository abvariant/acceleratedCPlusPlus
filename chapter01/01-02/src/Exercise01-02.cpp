// Ask for a person's name, and greet the person.
#include <iostream>
#include <string>

int main()
{
	const std::string exclam = "!";
	const std::string message = "Hello" + ", world" + exclam;

	std::cout << message << std::endl;
	
	return 0;
}	
