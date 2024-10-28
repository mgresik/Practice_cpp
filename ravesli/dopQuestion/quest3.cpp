#include <iostream>
#include <string>

double skidka(double& price)
{
    if (price > 1000)
    {
        return 5;
    }
    else if (price > 500)
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::cout << "Введите стоимость покупки \n";
    double price;
    std::cin >> price;
    std::cout << "Вам предоставлена скидка в размере " << skidka(price) << "%\n";
    double itog = price - (price * (skidka(price) / 100));
    std::cout << "Стоимость с учетом скидки " << itog;

    return 0;
}