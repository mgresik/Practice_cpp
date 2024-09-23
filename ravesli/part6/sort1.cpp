#include <iostream>
#include <algorithm>

int main()
{
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };

    
    for (int iteration = 0; iteration < length - 1; iteration++)
    {
        int endOfArray(length - iteration);
        bool swapOrNot(false);

        for (int currentIndex = 0; currentIndex < endOfArray - 1; currentIndex++)
        {
            if (array[currentIndex] > array[currentIndex + 1])
            {
                std::swap(array[currentIndex], array[currentIndex + 1]);
                swapOrNot = true;
            }
        };
        if (!swapOrNot)
        {
            std::cout << "Ended to " << iteration << "iteration";
            break;
        }
        
    };

    for (int index = 0; index < length; index++)
    {
        std::cout << array[index];
    };
    
    return 0;

}