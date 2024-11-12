#include <iostream>
 
int add(int a, int b)
{
    return a + b; // анонимный объект создается для хранения и возврата результата выражения a + b
}
 
int main()
{
    std::cout << add(4, 2);
 
    return 0;
}