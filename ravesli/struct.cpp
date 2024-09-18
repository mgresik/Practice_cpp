#include <iostream>
#include <string>

struct Warrior
{
    double hpPoint;
    int age;
    bool status;
};

struct Advertising
{
    int showNow;
    int showPerMan;
    int moneyPerClick;
};

void 

int main()
{
    Warrior Rich = {100.0, 24, true};
    std::cout << "She have " << Rich.hpPoint << " hp.\n";

    std::cout << "You search enemy and take 54 hp damage\n";
    Rich.hpPoint -= 54.0;
    std::cout << "How she have " << Rich.hpPoint << " hp.\n";
    if (Rich.hpPoint > 0.0)
    {
        Rich.status = true;
        std::cout << "She is live";
    }
    else
    {
        Rich.status = false;
        std::cout << "She is dead";
    }
};