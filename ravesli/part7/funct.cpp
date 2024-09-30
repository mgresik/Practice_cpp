#include <iostream>

void resetTerm(const int &x, int &y)
{
    y = x + 1;
}

void printArray(int *array, int length)
{
    // Если пользователь передал нулевой указатель в качестве array
    if (!array)
        return;
 
    for (int index=0; index < length; ++index)
        std::cout << array[index] << ' ';
}

int main()
{
    // Пример работы ссылок ---- для изменения передаваемого параметра + классы или структуры
    const int x = 5;
    int y = 4;
    std::cout << y << '\n';
    resetTerm(x, y);
    std::cout << y << '\n';

    // Пример работы с адресом(указатель) ---- для массивов, как правило + внутри функции можно изменить прилетающий параметр(адрес*)
    int array[7] = { 9, 8, 6, 4, 3, 2, 1 };
    printArray(array, 7);

}