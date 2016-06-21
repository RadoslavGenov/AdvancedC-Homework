#include <iostream>
#include <string>
#include "Student.hpp"

//Getters
unsigned short Student::GetID() const {
	return this->ID;
}

std::string Student::GetName() const {
	return this->name;
}

std::string Student::GetCourse() const {
	return this->course;
}

unsigned short Student::GetPoints() const {
	return this->points;
}

double Student::GetMark() const {
	return this->mark;
}

//Setters
void Student::SetID(const unsigned short& _ID) {
	this->ID = _ID;
}

void Student::SetName(const std::string& _name) {
	this->name = _name;
}

void Student::SetCourse(const std::string& _course) {
	this->course = _course;
}

void Student::SetPoints(const unsigned short& _points) {
	this->points = _points;
}

void Student::SetMark(const double& _mark) {
	this->mark = _mark;
}

//Print
void Student::Print(Student* student) {
	std::cout << "Student ID: " << student->GetID() << std::endl;
	std::cout << "Student Name: " << student->GetName() << std::endl;
	std::cout << "Student Course: " << student->GetCourse() << std::endl;
	std::cout << "Student Points: " << student->GetPoints() << std::endl;
	std::cout << "Student Mark Average: " << student->GetMark() << std::endl;
}