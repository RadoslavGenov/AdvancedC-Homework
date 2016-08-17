#pragma once
#ifndef GUESTTEACHER_HPP 
#define GUESTTEACHER_HPP
#include <iostream>
#include <string>
#include "Teacher.hpp"

class GuestTeacher : public Teacher
{
public:
	//Destructor and default Constructor
	GuestTeacher() :
		salaryForCourse(0) {};
	~GuestTeacher() {};

	//Getters
	float GetSalary() const;

	//Setters
	void SetSalary(const float& _salaryForCourse);

	//Print function
	void Print(GuestTeacher* guestTeacher);

private:
	float salaryForCourse;
};

#endif // !GUESTTEACHER_HPP 1

