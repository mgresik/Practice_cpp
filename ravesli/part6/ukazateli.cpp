#include <iostream>

int main()
{
    int term;
    
    std::cin >> term;

    std::cout << term << "\n" << &term;
    std::cout << *&term << '\n';

    int power = 100;
    int *ukaz = &power;  // Указатель на значение типа int, ссылающийся на значение 100

    int *otherUkaz = ukaz;  // Два указателя на одну память

    return 0;
}

