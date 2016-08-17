#include <iostream>
#include <string>
#include "Teacher.hpp"
#include "GuestTeacher.hpp"

//Getters
float GuestTeacher::GetSalary() const {
	return this->salaryForCourse;
}

//Setters
void GuestTeacher::SetSalary(const float& _salaryForCourse) {
	this->salaryForCourse = _salaryForCourse;
}

//Print
void GuestTeacher::Print(GuestTeacher* guestTeachers) {
	std::cout << "Guest Teacher ID: " << guestTeachers->GetID() << std::endl;
	std::cout << "Guest Teacher Name: " << guestTeachers->GetName() << std::endl;
	std::cout << "Guest Teacher Course: " << guestTeachers->GetCourse() << std::endl;
	std::cout << "Guest Teacher Points: " << guestTeachers->GetSalary() << std::endl;
}