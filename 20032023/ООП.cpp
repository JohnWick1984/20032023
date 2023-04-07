// 20032023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "Header.h"



int main()
{
	setlocale(0, "");

	User user1;
	string name = "Василий";
	user1.getName(name);

	user1.getSalary(138.50, 168, 1.15);

}

