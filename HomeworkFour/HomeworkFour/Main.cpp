#include <iostream>
#include "Furniture.hpp"
#include "Table.hpp"
#include "Chair.hpp"
#include "Bed.hpp"
#include "Desk.hpp"
#include "ShoppingCart.hpp"

/*
To be honest I made this program a bit too complex for this homework,
but i figured since i had already started i might as well finish it.
I added a print function but i do not get information about the 
customer just the products/ items. I figured i already made the program
too big and complex for just a homework so i stopped it at that. Maybe 
customer information will be a step for next time!
*/

int main() {
	//the driver/main program is just a do - while loop with two switch cases
	ShoppingCart* cRegister = new ShoppingCart;
	bool flag = false;
	int read;
	do
	{   
		std::cout << "Choose number of option:" << std::endl;
		std::cout << "1. Add Items to store" << std::endl;
		std::cout << "2. Buy Items from store" << std::endl;
		std::cin >> read;

		switch (read)
		{  
		case 1:
			cRegister->chooseFurniture();
			break;
		case 2:
			std::cout << "Choose number of option:"<< std::endl;
			std::cout << "(B) Buy/Add an item to shopping cart" << std::endl;
			std::cout << "(T) Show Total of shopping cart" << std::endl;
			std::cout << "(C) Clear Total and everything in the shopping cart" << std::endl;
			std::cout << "(G) Enter amount of money to calculate change" << std::endl;
			std::cout << "(P) Print shopping cart bill information:" << std::endl;
			char readAgain;
			std::cin >> readAgain;
			switch (readAgain)
			{
			case 'B':
				cRegister->searchObject();
				break;
			case 'T':
				std::cout << "Total: " << cRegister->getTotal() << std::endl;
				break;
			case 'C':
				cRegister->clear();
				break;
			case 'G':
				double payment;
				std::cin >> payment;
				if (payment < cRegister->getTotal()) {
					std::cout << "Not enough money!\n";
				}
				else {
					std::cout << "Change: " << payment - cRegister->getTotal() << std::endl;
				}
				break;
			case 'P':
				cRegister->print();
				break;
			default:
				std::cout << "We don't have that option try again!";
				break;
			}
		default:
			break;
		}
	} while (!flag);
	delete cRegister;
	return 0;
}