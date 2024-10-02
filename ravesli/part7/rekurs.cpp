#include <iostream>
 
int factorial(int n)
{
	if (n < 1)
		return 1;
	else
		return factorial(n - 1) * n;
}

void printString(const char *cstring)  // Вывод ошибки в консоль
{
    // Выводим cstring при условии, что он не нулевой
    if (cstring)
        std::cout << cstring;
    else
        std::cerr << "function printString() received a null parameter";
}
 
int main()
{
	for (int count = 0; count < 8; ++count)
		std::cout << factorial(count) << '\n';
}