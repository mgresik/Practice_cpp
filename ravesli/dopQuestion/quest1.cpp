#include <iostream>
#include <string>
#include <algorithm>

bool checkString(std::string a)
{
    int lenght = a.length();
    int change = 0; 
    if ((lenght < 3) && (a.empty()))
    {
        return false;
    }
    else{
        for (int i = 0; i < lenght - 1; i++)
        {
            if (a[i] != a[i + 1]){
                change++;
            };
        };
        if (change != 2)
        {
            return false;
        };
    }
    for (int i = 0; i < lenght; i++)
    {
        if (a[i] != a[lenght - i - 1])
        {
            return false;
        }
    };
    return true;  
}

int main()
{
    std::cout << "Welcome. Give a string\n";
    std::string myString;
    std::cin >> myString;

    if(checkString(myString))
    {   
        std::cout << "String is sandwich!";
    }
    else{std::cout << "String is`t sandwich!";}
    return 0;
}