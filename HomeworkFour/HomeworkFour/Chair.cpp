#include "Chair.hpp"
#include "Furniture.hpp"
#include <iostream>

void Chair::setCode(const std::string& _code) {
	this->code = _code;
}

void Chair::setPrice(const double& _price) {
	this->price = _price;
}

std::string Chair::getCode() const {
	return this->code;
}

double Chair::getPrice() const {
	return this->price;
}

void Chair::setDerivedBehavior() {
	printf("Enter number of legs for the Chair: ");
	int legs;
	std::cin >> legs;
	this->numberOfLegs = legs;
}


