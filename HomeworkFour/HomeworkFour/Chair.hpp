#pragma once
#ifndef CHAIR_HPP
#define CHAIR_HPP
#include "Furniture.hpp"
#include <string>

class Chair : public Furniture
{
public:
	Chair() {};
	Chair(int _numberOfLegs) : numberOfLegs(_numberOfLegs) {};
	//copy constructor
	explicit Chair(const Chair& _chair) : Furniture(_chair), numberOfLegs(_chair.numberOfLegs) {};
	~Chair() {};

	void setCode(const std::string &_code);
	void setPrice(const double &_price);

	std::string getCode() const;
	double getPrice() const;
	std::string getName() const { return "Chair"; };

	void setDerivedBehavior();
	//copy virtual function to clone an object
	virtual Furniture* clone() override{ return new Chair(*this); }


private:
	int numberOfLegs;
};


#endif // !CHAIR_HPP
