#include <iostream>
#include <string>



int main()
{
    std::cout << "Введите количество чётных чисел, сумму которых хотите найти \n";
    int count = 0;
    std::cin >> count;
    int sum = 0;
    for (int i = 0; i <= count; i++)
    {
        sum = sum + (i * 2);
        std::cout << i << ' ' << sum << '\n';
    };

    std::cout << sum << '\n';
    return 0;
}