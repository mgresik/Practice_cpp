#include <array>
#include <iostream>
#include <algorithm>

std::array<int, 4> myarray = { 8, 6, 4, 1 };
std::cout << myarray[1];
myarray[2] = 7;
myarray.at(1) = 7; // элемент массива под номером 1 - корректный, присваиваем ему значение 7
std::sort(myarray.begin(), myarray.end()); // сортировка массива по возрастанию
//    std::sort(myarray.rbegin(), myarray.rend()); // сортировка массива по убыванию
 
    for (const auto &element : myarray)
        std::cout << element << ' ';