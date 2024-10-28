#include <iostream>
 
int main()
{
    // int outer = 5;
    // while (outer >= 1)
    // {
    //     int inner = outer;
    //     while (inner >= 1)
    //         std::cout << inner-- << " ";
 
    //     // Вставляем символ новой строки в конце каждого ряда
    //     std::cout << "\n";
    //     --outer;
    //     }
------------------------------------------------------------------------
    // Переменная choice должна быть объявлена вне цикла do while 
    int choice;
 
    do
    {
        std::cout << "Please make a selection: \n";
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cin >> choice;
    }
    while (choice != 1 && choice != 2 &&
        choice != 3 && choice != 4);
 
    // Что-то делаем с переменной choice, например, используем оператор switch
 
    std::cout << "You selected option #" << choice << "\n";
 
    return 0;
}