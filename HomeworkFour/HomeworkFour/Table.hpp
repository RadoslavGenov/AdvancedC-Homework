#pragma once
#ifndef TABLE_HPP
#define TABLE_HPP
#include "Furniture.hpp"
#include <string>

class Table : public Furniture
{
public:
	Table() {};
	Table(int _numberOfLegs) : numberOfLegs(_numberOfLegs) { };
	//copy contructor
	explicit Table(const Table& _table) : Furniture(_table), numberOfLegs(_table.numberOfLegs) {};
	~Table() {};
	
	void setCode(const std::string& _code);
	void setPrice(const double& _price);

	std::string getCode() const;
	double getPrice() const;
	std::string getName() const { return "Table"; };

	void setDerivedBehavior();
	//copy virtual function to clone an object
	virtual Furniture* clone() override{ return new Table(*this); }

private:
	int numberOfLegs;
};

#endif // !TABLE_HPP
