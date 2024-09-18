#include <iostream>

// namespace Animals
// {   
//     enum Animals
//     {
//         chicken,
//         lion,
//         giraffe,
//         elephant,
//         duck,
//         snake,
//         MAX_ANIMALS
//     };
// }

int main()
{
    // double temperature[365] = {0.0};
    // int legs[Animals::MAX_ANIMALS] = {2, 4, 4, 4, 2, 0};
    // std::cout << "An elephant has " << legs[Animals::elephant] << " legs.\n";

    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    const int numVec = sizeof(array) / sizeof(array[0]);
    for (int count = 0; numVec > count; count++)
    {
        std::cout << array[count];
    }
    return 0;
}