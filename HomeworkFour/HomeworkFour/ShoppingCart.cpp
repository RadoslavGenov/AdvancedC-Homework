#include "ShoppingCart.hpp"
#include "Bed.hpp"
#include "Chair.hpp"
#include "Desk.hpp"
#include "Table.hpp"
#include <iostream>

/*Print info*/
void ShoppingCart::print() {
	std::cout << "Furniture information: " << std::endl << std::endl;
	for (auto i : furniture)
	{
		std::cout << "Name: " << i->getName() << std::endl;
		std::cout << "Code: " << i->getCode() << std::endl;
		std::cout << "Price: " << i->getPrice() << std::endl;
		std::cout << std::endl;
	}
}

/*This function deletes the shopping cart*/
void ShoppingCart::clear() {
	for (auto i : furniture) {
		delete i;
	}
	this->furniture.clear();
	this->total = 0;
}

/*this function searches for the object/item by the code*/
void ShoppingCart::searchObject() {
	if (furniture.empty())
	{
		std::cout << "You must add items to the store first! ";
		return;
	}
	std::cout << "Enter code to search for: ";
	std::string code;
	std::cin >> code;
	/*calls recursive function to search the vector for the code/key*/
	int index = recursiveSearchObject(furniture, furniture.size(), furniture.size() - 1, code);

	if (index >= 0)
	{
		std::cout << "The item is found and purchaesed:   " << furniture[index]->getName() << std::endl;
		std::cout << "Price:                              " << furniture[index]->getPrice() << std::endl;
		std::cout << "Code:								  " << furniture[index]->getCode() << std::endl;
		total += furniture[index]->getPrice(); //add total when item is bought
		std::cout << "Do you want to copy the purchase of " << furniture[index]->getName() << " ? (Y/N)";
		char read;
		std::cin >> read;
		if (read == 'Y')
		{
			/*dynamic cast can also be used to clone the object, 
			through the copy constructor but it is bad practice
			so I use a virtual clone function which return a *this 
			in each derived class the commented code below is how
			the dynamic cast would be used with the copy constructor*/
			if (furniture[index]->getName() == "Bed") {
				/*Bed* deskClone = new Bed(dynamic_cast<Bed&>(*furniture[index])); 
				furniture.push_back(deskClone);*/								   
				furniture.push_back(furniture[index]->clone());
				total += furniture[index]->getPrice();
			}
			if (furniture[index]->getName() == "Desk") {
				/*Desk* bedClone = new Desk(dynamic_cast<Desk&>(*furniture[index]));
				furniture.push_back(bedClone);*/
				furniture.push_back(furniture[index]->clone());
				total += furniture[index]->getPrice();
			}
			if (furniture[index]->getName() == "Table") {
				/*Table* tableClone = new Table(dynamic_cast<Table&>(*furniture[index]));
				furniture.push_back(tableClone);*/
				furniture.push_back(furniture[index]->clone());
				total += furniture[index]->getPrice();
			}
			if (furniture[index]->getName() == "Chair") {
				/*Chair* chairClone = new Chair(dynamic_cast<Chair&>(*furniture[index]));
				furniture.push_back(chairClone);*/
				furniture.push_back(furniture[index]->clone());
				total += furniture[index]->getPrice();
			}
		}
	}
	else
	{
		std::cout << "The item was not found" << std::endl;
	}
}
/*A recursive function to search through my vector to find the code/key*/
int ShoppingCart::recursiveSearchObject(std::vector<Furniture*> furniture, int size, int index, std::string code) {
	int location;
	if (furniture[index]->getCode() == code)
	{
		return index;
	}
	if (index == -1)
	{
		return -1;
	}
	else
	{
		return recursiveSearchObject(furniture, furniture.size() - 1, index - 1, code);
	}
}
/*just validating the code to be 10 digits*/
std::string ShoppingCart::codeValidation() {
	std::cout << "Enter Code: (10 digits)" << std::endl;
	std::string code;
	std::cin >> code;
	while (code.size() != 10)
	{
		std::cout << "Code is not 10 digits try again! " << std::endl;
		std::cin >> code;
	}
	return code;
}
/*this program inputs items into the store*/
void ShoppingCart::chooseFurniture() {
	bool flag = false;
	do
	{
		std::cout << "Please choose an item (Enter number of choice)" << std::endl;
		std::cout << "1. Bed " << std::endl;
		std::cout << "2. Chair" << std::endl;
		std::cout << "3. Desk" << std::endl;
		std::cout << "4. Table" << std::endl;
		std::cout << "0. Exit" << std::endl;
		int choice;
		std::cin >> choice;
		double price;
		switch (choice)
		{
		case 1://create a new bed to enter in the store
			furniture.push_back(new Bed);
			furniture.back()->setCode(codeValidation());
			std::cout << "Enter Price: ";
			std::cin >> price;
			std::cin.clear(); //use this and the line below so the program waits for user inputs, else it gets bad
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			furniture.back()->setPrice(price);
			furniture.back()->setDerivedBehavior();
			break;
		case 2://create a new chair to enter in the store
			furniture.push_back(new Chair);
			furniture.back()->setCode(codeValidation());
			std::cout << "Enter Price: ";
			std::cin >> price;
			std::cin.clear();//use this and the line below so the program waits for user inputs, else it gets bad
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			furniture.back()->setPrice(price);
			furniture.back()->setDerivedBehavior();
			break;
		case 3://create a new desk to enter in the store
			furniture.push_back(new Desk);
			furniture.back()->setCode(codeValidation());
			std::cout << "Enter Price: ";
			std::cin >> price;
			std::cin.clear();//use this and the line below so the program waits for user inputs, else it gets bad
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			furniture.back()->setPrice(price);
			furniture.back()->setDerivedBehavior();
			break;
		case 4://create a new table to enter in the store
			furniture.push_back(new Table);
			furniture.back()->setCode(codeValidation());
			std::cout << "Enter Price: ";
			std::cin >> price;
			std::cin.clear();//use this and the line below so the program waits for user inputs, else it gets bad
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			furniture.back()->setPrice(price);
			furniture.back()->setDerivedBehavior();
			break;
		case 0:
			flag = true;
			break;
		default:
			std::cout << "option not available! ";
			break;
		}
	} while (!flag);
}