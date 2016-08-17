#pragma once
#ifndef FURNITURE_HPP
#define FURNITURE_HPP
#include <string>

class Furniture
{
public:
	Furniture() {};
	Furniture (std::string _code, int _price) : code(_code), price(_price) {};
	explicit Furniture(const Furniture& _furniture) : code(_furniture.code), price(_furniture.price) {};
	~Furniture() {};

	virtual void setCode(const std::string& _code) = 0;
	virtual void setPrice(const double& _price) = 0;

	virtual std::string getCode() const = 0;
	virtual double getPrice() const = 0;
	virtual std::string getName() const = 0;
	//virtual function to set different behavior for each inherited object
	virtual void setDerivedBehavior() = 0;
	//copy virtual function to clone an object
	virtual Furniture* clone() = 0;

protected:
	std::string code;
	double price;
};

#endif // !FURNITURE_HPP
