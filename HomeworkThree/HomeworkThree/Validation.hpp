#pragma once
#ifndef VALIDATION_HPP
#define VALIDATION_HPP
#include <iostream>
#include <string>
#include <vector>

/*Validation for the setter functions that i call in main.cpp*/
unsigned short IDValidation() {
	printf("Enter ID (0-65535): ");
	int id;                      //use int at first so user does not overflow the type
	std::cin >> id;
	while (id < 0 || id > 65535)
	{
		printf("Wrong number for ID, try again: ");
		std::cin >> id;
	}
	return static_cast<unsigned short>(id); //then i cast to ushort
}
//next ones are straightforward
std::string NameValidation() {
	std::string name;
	printf("Please enter name: ");
	std::cin.ignore();
	std::getline(std::cin, name);
	return name;
}

std::string CourseValidation() {
	std::string course;
	printf("Please enter course: ");
	std::getline(std::cin, course);
	return course;
}

float SalaryValadation() {
	printf("Please enter salary: ");
	float salary;
	std::cin >> salary;
	return salary;
}

unsigned short DaysPassed() {
	printf("Enter days passed (0-65535): ");
	int daysPassed;           //use int at first so user does not overflow the type
	std::cin >> daysPassed;
	while (daysPassed < 0 || daysPassed > 65535)
	{
		printf("Wrong number for days passed, try again: ");
		std::cin >> daysPassed;
	}
	return static_cast<unsigned short>(daysPassed); //then i cast to ushort
}
//I do the same thing with my casts in the below functions
unsigned short PointsValidation() {
	int points;
	printf("Enter points (0-100): ");
	std::cin >> points;
	while (points < 0 || points > 65535)
	{
		printf("Wrong number for points, try again: ");
		std::cin >> points;
	}
	return static_cast<unsigned short>(points);
}

double MarkValidation() {
	std::vector<int> marks;
	int mark;
	int sum = 0;
	int size;
	printf("Enter how many marks the student has: ");
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		printf("Enter mark (2-6): ");
		std::cin >> mark;
		while (mark < 2 || mark > 6)
		{
			printf("Wrong number for mark, try again: ");
			std::cin >> mark;
		}
		marks.push_back(mark);
		sum += mark;
	}
	return (double)sum / marks.size();
}

#endif // !VALIDATION_HPP

