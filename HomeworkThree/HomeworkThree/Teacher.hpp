#pragma once
#ifndef TEACHER_HPP 
#define TEACHER_HPP
#include <iostream>
#include <string>

class Teacher
{
public:
	//Destructor and default Constructor
	Teacher() :
		ID(0), name(""), course(""), salary(0), daysPassed(0) {};
	~Teacher() {};

	//Getters
	unsigned short GetID() const;
	std::string GetName() const;
	std::string GetCourse() const;
	float GetSalary() const;   
	unsigned short GetDaysPassed() const;

	//Setters
	void SetID(const unsigned short& _ID);
	void SetName(std::string _name);
	void SetCourse(const std::string& _course);
	void SetSalary(const float& _salary); 
	void SetDaysPassed(const unsigned short& _daysPassed);

	//Print function
	void Print(Teacher* Teacher);

protected:
	unsigned short ID;
	std::string name;
	std::string course;
	float salary;
	unsigned short daysPassed;
};

#endif // !TEACHER_HPP 1

