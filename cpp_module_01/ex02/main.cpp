#include <iostream>
int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string *varPtr = &var;
	std::string& varRef = var;
	std::cout << "Variable Address:" << &var << std::endl;
	std::cout << "Variable Pointer:" << varPtr << std::endl;
	std::cout << "Variable Reference:" << &varRef << std::endl;
	std::cout << "Variable:" << var << std::endl;
	std::cout << "Variable Pointer Value:" << *varPtr << std::endl;
	std::cout << "Variable Reference Value:" << varRef << std::endl;
	return 0;
}