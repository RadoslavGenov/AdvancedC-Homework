#include <iostream>
#include <string>
#include "Teacher.hpp"

//Getters
unsigned short Teacher::GetID() const {
	return this->ID;
}

std::string Teacher::GetName() const {
	return this->name;
}

std::string Teacher::GetCourse() const {
	return this->course;
}

float Teacher::GetSalary() const {
	return this->salary;
}

unsigned short Teacher::GetDaysPassed() const {
	return this->daysPassed;
}

//Setters
void Teacher::SetID(const unsigned short& _ID) {
	this->ID = _ID;
}

void Teacher::SetName(std::string _name) {
	this->name = _name;
}

void Teacher::SetCourse(const std::string& _course) {
	this->course = _course;
}

void Teacher::SetSalary(const float& _salary) {
	this->salary = _salary;
}

void Teacher::SetDaysPassed(const unsigned short& _daysPassed) {
	this->daysPassed = _daysPassed;
}

//Print
void Teacher::Print(Teacher* teacher) {
	std::cout << "Teacher ID: " << teacher->GetID() << std::endl;
	std::cout << "Teacher Name: " << teacher->GetName() << std::endl;
	std::cout << "Teacher Course: " << teacher->GetCourse() << std::endl;
	std::cout << "Teacher Points: " << teacher->GetSalary() << std::endl;
	std::cout << "Teacher Days Passed: " << teacher->GetDaysPassed() << std::endl;
}
