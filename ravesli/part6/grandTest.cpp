#include <iostream>

enum Inventory
{
    POTION,
    TORCH,
    ARROW,
    MAXITEMS
};

int countTotalItems(int *items)
{
    int totalItems = 0;
    for (int index = 0; index < MAXITEMS; index++)
    {
        totalItems += items[index];
    }
    return totalItems;
}

int main()
{
    const int maxItems = static_cast<int>(Inventory::MAXITEMS);
    int items[maxItems] {3,6,12};

    std::cout << "you have " << countTotalItems(items);
    return 0;
}