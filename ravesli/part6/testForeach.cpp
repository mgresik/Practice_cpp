#include <iostream>

int main()
{
    const std::string array[8] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
    std::cout << "your name: ";
    std::string username;
    std::cin >> username;

    bool found(false);

    for(const auto &name:array)
        if (name == username)
        {
            found = true;
            break;
        };
        
    if(found)
    {
        std::cout << username << " have";
    }
    else
    {
        std::cout << username << " not found";
    }
    return 0;
}
