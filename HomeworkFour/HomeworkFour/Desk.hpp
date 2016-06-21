#pragma once
#ifndef DESK_HPP
#define DESK_HPP
#include "Furniture.hpp"

class Desk : public Furniture
{
public:
	Desk() {};
	Desk(unsigned short _numberOfDrawers) : numberOfDrawers(_numberOfDrawers) {};
	//copy constructor
	explicit Desk(const Desk& _desk) : Furniture(_desk), numberOfDrawers(_desk.numberOfDrawers) {};

	~Desk() {};

	void setCode(const std::string& _code);
	void setPrice(const double& _price);

	std::string getCode() const;
	double getPrice() const;
	std::string getName() const { return "Desk"; };

	void setDerivedBehavior();
	//copy virtual function to clone an object
	virtual Furniture* clone() override{ return new Desk(*this); }

private:
	unsigned short numberOfDrawers;
};

#endif // !DESK_HPP
