#include <iostream>

// namespace Animals
// {   
//     enum Animals
//     {
//         chicken,
//         lion,
//         giraffe,
//         elephant,
//         duck,
//         snake,
//         MAX_ANIMALS
//     };
// }

int main()
{
    // double temperature[365] = {0.0};
    // int legs[Animals::MAX_ANIMALS] = {2, 4, 4, 4, 2, 0};
    // std::cout << "An elephant has " << legs[Animals::elephant] << " legs.\n";

    int number = 0;
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;
 
        // Если пользователь ввел некорректное значение 
        if (std::cin.fail())
            std::cin.clear(); 
 
        std::cin.ignore(32767, '\n');
 
    } while (number < 1 || number > 9);
 
    // Дальше выводим массив на экран
    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    const int numVec = sizeof(array) / sizeof(array[0]);

    return 0;
}