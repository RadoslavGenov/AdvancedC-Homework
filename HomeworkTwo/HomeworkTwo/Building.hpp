#pragma once
#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <iostream>
#include <vector>

//Good practice is to seperate class declarations in hpp files and their definitions in cpp files

class Building
{
public:
	//Default Constructor
	inline Building();    
	
	//Overloaded Constructor
	Building(std::string _name, int _floors, int _offices, int _employees, int _freeSeats);

	//Destructor
	inline ~Building();

	//Getters
	std::string GetName() const;
	int GetFloors() const;
	int GetOffices() const;
	int GetEmployees() const;
	int GetFreeSeats() const;

	//Setters
	void SetName(std::string _name);
	void SetFloors(int _floors);
	void SetOffices(int _offices);
	void SetEmployees(int _employees);
	void SetFreeSeats(int _freeSeats);

	//Methods, static so I do not have to call them from instance objects
	static std::string MostEmployees(std::vector<Building>& buildings);
	static std::string MostFreePlaces(std::vector<Building>& buildings);
	static std::string HighestCoefficient(std::vector<Building>& buildings);
	static std::string MostPeopleFloor(std::vector<Building>& buildings);
	static std::string LeastPeopleFloor(std::vector<Building>& buildings);
	static std::string MostOfficesFloor(std::vector<Building>& buildings);
	static std::string LeastOfficesFloor(std::vector<Building>& buildings);
	static std::string MostPeopleOffice(std::vector<Building>& buildings);
	static std::string LeastPeopleOffice(std::vector<Building>& buildings);

private:
	std::string name;
	short floors;
	int offices;
	int employees;
	int freeSeats;
};
#endif // !BUILDING_HPP

