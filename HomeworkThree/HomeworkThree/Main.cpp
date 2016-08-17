#include <iostream>
#include <vector>
#include <string>
#include "Student.hpp"
#include "GuestTeacher.hpp"
#include "Teacher.hpp"
#include "Validation.hpp"

/*This is my driver main function of the program I use a vector with pointer to the
 objects so there can be memory allocated for them in the heap rather than the stack*/

int main() {

	std::vector<Teacher*> teachers;
	std::vector<GuestTeacher*> guestTeachers;
	std::vector<Student*> students;

	bool flag = true;
	int num;
	int ID;
	do
	{
		std::cout << "\n1. Get data for student with ID       " << std::endl;
		std::cout << "2. Get data for teacher with ID	    " << std::endl;
		std::cout << "3. Get data for guest teacher with ID " << std::endl;
		std::cout << "4. Add data for new student		    " << std::endl;
		std::cout << "5. Add data for new teacher		    " << std::endl;
		std::cout << "6. Add data for new guest teacher	    " << std::endl;
		std::cout << "   Enter the number of your choice    " << std::endl;
		std::cout << "      Or enter 0 to exit:          \n " << std::endl;
		std::cin >> num;
		switch (num)
		{
		case 1:  //for the first three i just spin through the vector to see if i find the ID given by the user
			if (students.empty())
			{
				printf("Please add teacher first!\n");
			}
			else
			{
				printf("\nEnter the ID you want to get the data for: ");
				std::cin >> ID;
				for (auto i : students)
				{
					if (i->GetID() == ID)
					{
						i->Print(i);
					}
				}
			}
			break;
		case 2:
			if (teachers.empty())
			{
				printf("Please add teacher first!\n");
			}
			else
			{
				printf("\nEnter the ID you want to get the data for: ");
				std::cin >> ID;
				for (auto i : teachers)
				{
					if (i->GetID() == ID)
					{
						i->Print(i);
					}
				}
			}
			break;
		case 3:
			if (guestTeachers.empty())
			{
				printf("Please add teacher first!\n");
			}
			else
			{
				printf("\nEnter the ID you want to get the data for: ");
				std::cin >> ID;
				for (auto i : guestTeachers)
				{
					if (i->GetID() == ID)
					{
						i->Print(i);
					}
				}
			}
			break;
		case 4:   //for the next three i use the setter functions i created along with my Validation.hpp
				  //to enter in all the user input as data for my objects, elementary stuff :D
			students.push_back(new Student);
			students.back()->SetID(IDValidation());
			students.back()->SetName(NameValidation());
			students.back()->SetCourse(CourseValidation());
			students.back()->SetPoints(PointsValidation());
			students.back()->SetMark(MarkValidation());
			break;
		case 5:
			teachers.push_back(new Teacher);
			teachers.back()->SetID(IDValidation());
			teachers.back()->SetName(NameValidation());
			teachers.back()->SetCourse(CourseValidation());
			teachers.back()->SetSalary(SalaryValadation());
			teachers.back()->SetDaysPassed(DaysPassed());
			break;
		case 6:
			guestTeachers.push_back(new GuestTeacher);
			guestTeachers.back()->SetID(IDValidation());
			guestTeachers.back()->SetName(NameValidation());
			guestTeachers.back()->SetCourse(CourseValidation());
			guestTeachers.back()->SetSalary(SalaryValadation());
			break;
		case 0:
			flag = false;
			break;
		default:
			printf("Sorry we do not have that option, try again: \n");
			break;
		}
	} while (flag);

	return 0;
}