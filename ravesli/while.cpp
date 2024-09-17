#include <iostream>

int rer(int value)
{
    int total = 0;
    for (int count = 0; count <= value; count++)
    {
        total += count;
    }
    return total;
}

int main()
{
    int value;
    std::cin >> value;
    
    std::cout << rer(value) << "\n";
}