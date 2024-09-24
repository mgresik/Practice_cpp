#include <iostream>
#include <string>
#include <algorithm>  

void sortArray(std::string *array, int lenght)
{
    for (int startIndex = 0; startIndex < lenght - 1; startIndex++)
    {
        int minIndex;
        for (int currenIndex = startIndex + 1; currenIndex < lenght; currenIndex++)
        {
            if (array[currenIndex] < array[minIndex])
            {
                minIndex = currenIndex;
            }
            
        }
        std::swap(array[startIndex], array[minIndex]);
        
    };
    
}

int main()
{
    int names;
    std::cout << "Сколько имен имеешь, воин?";
    std::cin >> names;

    std::string *array = new std::string[names];

    for (int iii = 0; iii < names; iii++)
    {
        std::cout << "Enter name #" << iii + 1;
        std::cin >> array[iii];
    };

    sortArray(array, names);

    for (int i = 0; i < names; i++)
    {
        std::cout << array[i] << '\n';
    };

    delete[] array;
        array = 0;
    
    return 0;
}