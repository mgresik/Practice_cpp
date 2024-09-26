#include <iostream>
 
int main()
{
    int math[] = { 0, 1, 4, 5, 7, 8, 10, 12, 15, 17, 30, 41 };
    for (auto number : math) // тип number определяется автоматически исходя из типа элементов массива math
       std::cout << number << ' ';
    

    /*
    int array[7] = { 10, 8, 6, 5, 4, 3, 1 };
    for (const auto &element: array) // element - это константная ссылка на текущий элемент массива в итерации
        std::cout << element << ' ';
    */
    return 0;
}