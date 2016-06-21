#include "Bed.hpp"
#include "Furniture.hpp"
#include <iostream>
/*Definition of class Bed*/
void Bed::setCode(const std::string& _code) {
	this->code = _code;
}

void Bed::setPrice(const double& _price) {
	this->price = _price;
}

std::string Bed::getCode() const {
	return this->code;
}

double Bed::getPrice() const {
	return this->price;
}

void Bed::setDerivedBehavior() {
	std::cout << "Enter size of bed: ";
	std::string _size;
	getline(std::cin, _size, '\n');
	this->size = _size;
}
