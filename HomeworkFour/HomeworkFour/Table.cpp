#include "Table.hpp"
#include "Furniture.hpp"
#include <iostream>

void Table::setCode(const std::string& _code) {
	this->code = _code;
}

void Table::setPrice(const double& _price) {
	this->price = _price;
}

std::string Table::getCode() const {
	return this->code;
}

double Table::getPrice() const {
	return this->price;
}

void Table::setDerivedBehavior() {
	printf("Enter number of legs for the Table: ");
	int legs;
	std::cin >> legs;
	this->numberOfLegs = legs;
}

