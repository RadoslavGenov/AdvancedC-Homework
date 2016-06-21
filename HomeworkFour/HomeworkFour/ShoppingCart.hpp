#pragma once
#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <vector>
#include <vector>
#include "Furniture.hpp"

class ShoppingCart
{
public:
	ShoppingCart() {};
	~ShoppingCart() {};

	void chooseFurniture();
	void searchObject();
	void clear();
	void print();

	double getTotal() const { return total; }

private:
	//private variables and functions that only need to be touched by this class
	double total = 0;
	std::string codeValidation();
	int recursiveSearchObject(std::vector<Furniture*> furniture, int size, int index, std::string code);
	std::vector<Furniture*> furniture;
};

#endif // !SHOPPINGCART_H

