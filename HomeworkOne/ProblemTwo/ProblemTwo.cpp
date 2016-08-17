#include <iostream>
#include <string>
#include <vector>

/*2. Make a program	that demonstrates all the functions	learned	in lecture 1*/

//using a boolean return function to check if two vectors are equal
bool CheckIfEqual(std::vector<int> one, std::vector<int> two) {
	if (one.size() != two.size())
	{
		return false;
	}
	else
	{
		for (int i = 0; i < one.size(); i++)
		{
			if (one[i] != two[i])
			{
				return false;
			}
		}
	}
	return true;
}

//using a void function
void PrintArray(std::vector<std::string> vec) {
	//use C++11 range based loop with "const auto" to iterate through vec
	for (const auto i : vec) {
		std::cout << i << std::endl;
	}
}

//use a int return funciton
int SumOfDigits(std::vector<int> myVec) {
	int sum = 0;
	//use a const_iterator to iterate through vector and add numbers
	for (std::vector<int>::const_iterator it = myVec.begin(); it != myVec.end(); ++it) {
		sum += *it;
	}
	return sum;
}

int main() {
	std::vector<int> a = { 1,2,3,4,5,8 };
	std::vector<int> b = { 1,2,3,4,5,5 };

	//ternary operator to save either true or false
	std::cout << "1. Using a boolean return function to check if two vectors are equal: \n";
	std::string stringResult = CheckIfEqual(a, b) ? "True" : "False";
	std::cout << stringResult << std::endl << "\n";

	std::cout << "2. Using a void function and C++11 range based loop with const auto i to iterate through vec: \n";
	std::vector<std::string> stringVec = { "Pesho", "Gosho", "Tosho" };
	PrintArray(stringVec);
	std::cout << std::endl;

	std::cout << "3. Use a int return funciton and a const_iterator to iterate through vector and add numbers: \n";
	std::cout << SumOfDigits(a) << std::endl << "\n";

	return 0;
}
