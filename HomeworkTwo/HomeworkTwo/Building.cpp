#include "Building.hpp"
#include <iostream>
#include <string>
#include <vector>

//Class Definitions

//Default Constructor
inline Building::Building() :
	name(""), floors(0), offices(0), employees(0), freeSeats(0) {};

//Overloaded Constructor
Building::Building(std::string _name, int _floors, int _offices, int _employees, int _freeSeats) :
	name(_name), floors(_floors), offices(_offices), employees(_employees), freeSeats(_freeSeats) {};

//Destructor
inline Building::~Building() {};

//Getters
std::string Building::GetName() const {
	return name;
}

int Building::GetFloors() const {
	return floors;
}

int Building::GetOffices() const {
	return offices;
}

int Building::GetEmployees() const {
	return employees;
}
int Building::GetFreeSeats() const {
	return freeSeats;
}

//Setters
void Building::SetName(std::string _name) {
	this->name = _name;
}

void Building::SetFloors(int _floors) {
	this->floors = _floors;
}

void Building::SetOffices(int _offices) {
	this->offices = _offices;
}

void Building::SetEmployees(int _employees) {
	this->employees = _employees;
}

void Building::SetFreeSeats(int _freeSeats) {
	this->freeSeats = _freeSeats;
}

//Methods, I haven't commented each method since I think they are pretty easy with straight-forward logic
std::string Building::MostEmployees(std::vector<Building>& buildings) {
	int largest = std::numeric_limits<int>::min();
	std::string name;
	for (auto i : buildings) {
		if (largest < i.GetEmployees()) {
			largest = i.GetEmployees();
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::MostFreePlaces(std::vector<Building>& buildings) {
	int largest = std::numeric_limits<int>::min();
	std::string name;
	for (auto i : buildings) {
		if (largest < i.GetFreeSeats()) {
			largest = i.GetFreeSeats();
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::HighestCoefficient(std::vector<Building>& buildings) {
	std::string name;
	double largest = std::numeric_limits<double>::min();
	double coef;
	for (auto i : buildings) {
		coef = (double)i.GetEmployees() / (double)(i.GetEmployees() + i.GetFreeSeats());
		if (largest < coef) {
			largest = coef;
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::MostPeopleFloor(std::vector<Building>& buildings) {
	std::string name;
	double largest = std::numeric_limits<double>::min();
	double ratio;
	for (auto i : buildings) {
		ratio = (double)i.GetEmployees() / (double)i.GetFloors();
		if (largest < ratio)
		{
			largest = ratio;
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::LeastPeopleFloor(std::vector<Building>& buildings) {
	std::string name;
	double smallest = std::numeric_limits<double>::max();
	double ratio;
	for (auto i : buildings) {
		ratio = (double)i.GetEmployees() / (double)i.GetFloors();
		if (smallest > ratio)
		{
			smallest = ratio;
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::MostOfficesFloor(std::vector<Building>& buildings) {
	std::string name;
	double largest = std::numeric_limits<double>::min();
	double ratio;
	for (auto i : buildings) {
		ratio = (double)i.GetOffices() / (double)i.GetFloors();
		if (largest < ratio)
		{
			largest = ratio;
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::LeastOfficesFloor(std::vector<Building>& buildings) {
	std::string name;
	double smallest = std::numeric_limits<double>::max();
	double ratio;
	for (auto i : buildings) {
		ratio = (double)i.GetOffices() / (double)i.GetFloors();
		if (smallest > ratio)
		{
			smallest = ratio;
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::MostPeopleOffice(std::vector<Building>& buildings) {
	std::string name;
	double largest = std::numeric_limits<double>::min();
	double ratio;
	for (auto i : buildings) {
		ratio = (double)i.GetEmployees() / (double)i.GetOffices();
		if (largest < ratio)
		{
			largest = ratio;
			name = i.GetName();
		}
	}
	return name;
}

std::string Building::LeastPeopleOffice(std::vector<Building>& buildings) {
	std::string name;
	double smallest = std::numeric_limits<double>::max();
	double ratio;
	for (auto i : buildings) {
		ratio = (double)i.GetEmployees() / (double)i.GetOffices();
		if (smallest > ratio)
		{
			smallest = ratio;
			name = i.GetName();
		}
	}
	return name;
}