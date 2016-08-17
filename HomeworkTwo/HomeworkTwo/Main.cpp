#include <iostream>
#include <string>
#include <vector>
#include "Building.hpp"

int main() {
	std::vector<Building> vec;
	vec.push_back(Building("XYZ industries", 6, 127, 600, 196));
	//Rapid Development Crew has only 7 floors since first floor is a restaurant (Business Logic)
	vec.push_back(Building("Rapid Development Crew", 7, 210, 822, 85));
	vec.push_back(Building("SoftUni", 11, 106, 200, 60));

	std::cout << "Company with most employees: " << Building::MostEmployees(vec) << std::endl;
	std::cout << "Company with most free places: " << Building::MostFreePlaces(vec) << std::endl;
	std::cout << "Company with highest coefficient: " << Building::HighestCoefficient(vec) << std::endl;
	std::cout << "Company with most people per floor: " << Building::MostPeopleFloor(vec) << std::endl;
	std::cout << "Company with least people per floor: " << Building::LeastPeopleFloor(vec) << std::endl;
	std::cout << "Company with most offices per floor: " << Building::MostOfficesFloor(vec) << std::endl;
	std::cout << "Company with least offices per floor: " << Building::LeastOfficesFloor(vec) << std::endl;
	std::cout << "Company with most people per office: " << Building::MostPeopleOffice(vec) << std::endl;
	std::cout << "Company with least people per office: " << Building::LeastPeopleOffice(vec) << std::endl;
	return 0;
}