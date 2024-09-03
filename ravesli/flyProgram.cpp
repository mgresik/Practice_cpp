#include <iostream>
#include <math.h>
#include "constans.hpp"

using namespace myConstants;

double startDistance()
{
    std::cout << "Enter Distance: ";
    double dist;
    std::cin.ignore(32767, '\n');  // Игнорировать знак новой строки
    std::cin >> dist;
    return dist; 
};

double positionCheck(double distance, int timeFly)
{
    double distancePerSec = (myConstants::acceleration * timeFly * timeFly) / 2;
    double currentPosition = distance - distancePerSec;
    return currentPosition;
};
void printString(double currentPosition, int second)
{
    if (currentPosition != 0.0)
    {
        std::cout << "At " << second << " your distance is " << currentPosition << std::endl;
    }
    else
    {
        std::cout << "At " << second << " you are on ground";
    };
};
void checkAndPrint(double distance, int time)
{
    double currentDistance = positionCheck(distance, time);
    printString(currentDistance, time);
}

int main(){
    double initialDistance = startDistance();
    checkAndPrint(initialDistance, 0);
    checkAndPrint(initialDistance, 1);
    checkAndPrint(initialDistance, 2);
    checkAndPrint(initialDistance, 3);
    checkAndPrint(initialDistance, 4);
    checkAndPrint(initialDistance, 5);

    return 0;
};