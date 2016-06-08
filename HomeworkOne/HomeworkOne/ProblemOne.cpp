#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*1. Make a	program	that reads line from the keyboard and checks how many
upper and	lower case letters and other characters	are	available in the string.*/

void PrintResults(int upper, int lower, std::vector<std::pair<char, int>> symbols) {
	//function to print results
	std::cout << "The number of upper case letters is: " << upper << std::endl;
	std::cout << "The number of lower case letters is: " << lower << std::endl;

	//const_iterator to iterate through vector and print values to stdout
	for (std::vector<std::pair<char, int>>::const_iterator it = symbols.begin(); it != symbols.end(); ++it) {
		std::cout << "Symbol: " << it->first << "  Number of occurences: " << it->second << std::endl;
	}
}

void SymbolCheck(std::string input) {
	//declare vector pair to hold symbol value and the key to hold number of occurences
	std::vector<std::pair<char, int>> symbols;
	//vector iterator and variables to hold number of upper and lowercase letters
	std::vector<std::pair<char, int>>::iterator it;
	int upper = 0;
	int lower = 0;

	for (int i = 0; i < input.size(); i++)          //loop through the input string
	{
		if (input[i] <= 'Z' && input[i] >= 'A')     //check if 'A'-'Z' in ascii table for uppercase, increment upper
		{
			upper++;
		}
		else if (input[i] <= 'z' && input[i] >= 'a')//check if 'a'-'z' in ascii table for lowercase, increment lower
		{
			lower++;
		}
		else
		{
			//I use find_if with a C++11 feature lambda function to check if the symbol has been repeated in the vector
			it = std::find_if(symbols.begin(), symbols.end(), [input, i](const std::pair<char, int>& symbols) { return symbols.first == input[i]; });

			//if iterator doesn't equal end of vector, increment key to increase occurence
			//else add the symbol with 1 initial occurence
			if (it != symbols.end()) it->second++;
			else symbols.push_back(std::pair<char, int>(input[i], 1));
		}
	}
	PrintResults(upper, lower, symbols);
}

int main() {
	std::cout << "Enter anything you want to check the number of occurences of characters and symbols: " << std::endl;
	std::string input;
	getline(std::cin, input);   //get input from the user using getline
	std::cout << std::endl;
	SymbolCheck(input);         //call driver function
	std::cout << std::endl;
	return 0;
}