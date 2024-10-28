#include <iostream>

// int calculate(int a, int b, char action)
// {
//     switch (action)
//     {
//     case '/':
//         return a / b;
//     case '*':
//         return a * b;
//     case '+':
//         return a + b;
//     case '-':
//         return a - b;
//     case '%':
//         return a % b;
//     default:
//         std::cout << "Error 404";
//         return 0;
//     }
// }

enum Animals
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich,
};

std::string getAnimalName(Animals animal)
{
    switch (animal)
    {
    case pig:
        return "Pig";
    
    default:
        return "Хз кто";
    };

}

int printNumberOfLegs(Animals animal)
{
    switch (animal)
    {
    case Animals::pig:
        std::cout << "sss";
        return 1;
    default:
        return 0;
    };
}



int main()
{
    // int x, y;
    // char action;
    // std::cout << "First number\n";
    // std::cin >> x;
    // std::cout << "Two number\n";
    // std::cin >> y;
    // std::cout << "Action\n";
    // std::cin >> action;
    // std::cout << x << " " << action << " " << y << " is " << calculate(x, y, action) << "\n";
    // return 0;
    printNumberOfLegs(pig);



}