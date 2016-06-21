#pragma once
#ifndef BED_HPP
#define BED_HPP
#include "Furniture.hpp"

class Bed : public Furniture
{
public:
	Bed() {};
	Bed(std::string _size) : size(_size) {};
	//copy contructor
	explicit Bed(const Bed& _bed) : Furniture(_bed), size(_bed.size) {}; 
	~Bed() {};

	void setCode(const std::string& _code);
	void setPrice(const double& _price);

	std::string getCode() const;
	double getPrice() const;
	std::string getName() const { return "Bed"; };

	void setDerivedBehavior();
	//copy virtual function to clone an object
	virtual Furniture* clone() override { return new Bed(*this); }

private:
	std::string size;
};

#endif // !BED_HPP
