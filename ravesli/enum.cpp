#include <iostream>

enum Animals  // Все перечислители получают целочисленное значение
{
    ANIMAL_LION,  // 0
    ANIMAL_HORSE,  // 1
    ANIMAL_COW,
    ANIMAL_DOG,
    ANIMAL_CAT,
};

void printAnimals(Animals myPets)
{
    if (myPets == ANIMAL_LION)
        std::cout << "Lion";
    else if (myPets == ANIMAL_HORSE)
        std::cout << "Horse";
    else if (myPets == ANIMAL_COW)
        std::cout << "Cow";
    else if (myPets == ANIMAL_DOG)
        std::cout << "Dog";
    else if (myPets == ANIMAL_CAT)
        std::cout << "Cat";
    else
        std::cout << "Who knows!";
};

int main()
{
    Animals myHomepet(ANIMAL_CAT);  // Создание перечисления, в котором есть перечислители, описанные выше
    int mypet = ANIMAL_CAT;  // Пременная получит значение 4
    std::cout << ANIMAL_DOG << std::endl;  // Выведется 3
    printAnimals(myHomepet);

    return 0;
}