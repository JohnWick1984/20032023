#pragma once
#include <iostream>
#include<string>
#include <Windows.h>
using namespace std;
class User {
private:
	string  password;
	int id;
	string email;
	unsigned short cvc;
	string login;
	string firstName;
	string lastName;

	float countSalary(float priceHours, int hours, float ratioUral)
	{


		float salary = priceHours * hours * ratioUral;
		return salary;
	}
public:


	void getSalary(float priceHours, int hours, float ratioUral) {
		float result = countSalary(priceHours, hours, ratioUral);

		cout << result;
	}
	void getName(string name);
};

void User::getName(string name) {
	cout << name << "\n";
}
