#include <iostream>

inline int max(int a, int b)
{
    return a < b ? b : a;
}

int main()
{
    std::cout << max(7, 8) << '\n';
    std::cout << max(5, 4) << '\n';
    return 0;
}