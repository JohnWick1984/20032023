// LIFT.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Elevator
{
public:
    bool startElevator() {
            toogle = true;
     
        return toogle;
    }

    bool stopElevator() {
        toogle = false;
        return toogle;
    }
    
    
private:
    int floors[12]{ -1,0,1,2,3,4,5,6,7,8,9,10};
    bool toogle;

   


};



int main()
{
    


}

//Elevator(double e_speed, int e_capacity)
//{
//    speed = e_speed;
//    capacity = e_capacity;
//}