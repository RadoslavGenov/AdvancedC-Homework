#include "Desk.hpp"
#include "Furniture.hpp"
#include <iostream>

void Desk::setCode(const std::string& _code) {
	this->code = _code;
}

void Desk::setPrice(const double& _price) {
	this->price = _price;
}

std::string Desk::getCode() const {
	return this->code;
}

double Desk::getPrice() const {
	return this->price;
}

void Desk::setDerivedBehavior() {
	printf("Enter number of drawers: ");
	int drawers;
	std::cin >> drawers;
	this->numberOfDrawers = drawers;
}

