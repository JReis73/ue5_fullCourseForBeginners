#include "Header.h"
#include <iostream>
//#include <Windows.h>
//#include <cmath>
//#include <math.h>

std::string student::GetName() {
	return Name;
};

int student::GetMarks() {
	return Marks;
};

int Add(int a, int b) {
	return a + b;
}

int main()
{
	//MyInteger = 12;
	//MyString = "232";
	/*std::cout << MyString;
	std::cout << MyInteger;*/
	MyInteger = Add(121, 403);
	//std::cout << MyInteger;
	//student S1;
	//S1.GetName();
	//S1.GetMarks();

	student* S1 = new student;

	S1->SetMarks(56);

	std::cout << S1->GetMarks();

	return 0;
}