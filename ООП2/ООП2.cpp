// ООП2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Apartment 
{

	
public:
	int countRoom;
	int* rooms = new int [countRoom];

	Apartment(int apartCount)
	{
		countRoom = apartCount;
	}

	void getCountRoom(int* rooms, int counter)
	{
		for (int i = 0; i < counter; i++)
		{
			cout << rooms[i] << "\n";
		}
	}
};


class Room {

public:
	double width, height, length;

	Room(double c_width, double c_height, double c_length)
	{
		width = c_width;
		height = c_height;
		length = c_length;
	};

	double getSquare() 
	{
		return ((width + length) * 2 * height);

	}
	Room(){}
private:


};
int main()
{
	setlocale(0, "");
	cout << "*******Расчет обоев*********\n";
	int inputCountRoom = 0;
	double roomWidth = 0, roomLength = 0, roomHeight = 0, result =0;
	cout << "Введите количество комнат в которых требуется сделать ремонт: " << "\n";
	cin >> inputCountRoom;
	Room* room = new  Room[inputCountRoom];
	for (int i = 0; i < inputCountRoom; i++)
	{
		cout << "Введите ширину комнаты: " << "\n";
		cin >> roomWidth;
		room[i].width = roomWidth;
		cout << "Введите длину комнаты: " << "\n";
		cin >> roomLength;
		room[i].length = roomLength;
		cout << "Введите высоту комнаты: " << "\n";
		cin >> roomHeight;
		room[i].height = roomHeight;
		
		
		 result =room[i].getSquare();
		cout << result << "\n";
	}

}

