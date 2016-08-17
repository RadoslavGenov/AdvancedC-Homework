#pragma once
#ifndef STUDENT_HPP 
#define STUDENT_HPP
#include <iostream>
#include <string>
#include <vector>

class Student
{
public: 
	//Destructor and default Constructor
	Student(): ID(0), name(""), course(""), points(0), mark(0){};
	~Student() {};

	//Getters
	unsigned short GetID() const;
	std::string GetName() const;
	std::string GetCourse() const;
	unsigned short GetPoints() const;
	double GetMark() const;

	//Setters
	void SetID(const unsigned short& _ID);
	void SetName(const std::string& _name);
	void SetCourse(const std::string& _course);
	void SetPoints(const unsigned short& _points);
	void SetMark(const double& _mark);

	//Print function
	void Print(Student* student);

private:
	unsigned short ID;
	std::string name;
	std::string course;
	unsigned short points;
	double mark;
};

#endif // !STUDENT_HPP 1
