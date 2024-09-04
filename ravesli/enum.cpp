#include <iostream>

enum class Animals  // Все перечислители получают целочисленное значение
{
    ANIMAL_LION,  // 0
    ANIMAL_HORSE,  // 1
    ANIMAL_COW,
    ANIMAL_DOG,
    ANIMAL_CAT,
};

enum class Monsters
{
    MONSTER_OGRE,
    MONSTER_GOBLIN,
    MONSTER_SKELETON,
    MONSTER_ORC,
    MONSTER_TROLL,
};

// Хорошо использовать енам для нумерации ошибок
/*enum ParseResult
{
    SUCCESS = 0,
    ERROR_OPENING_FILE = -1,
    ERROR_PARSING_FILE = -2,
    ERROR_READING_FILE = -3
};
 
ParseResult readFileContents()
{
    if (!openFile())
        return ERROR_OPENING_FILE;
    if (!parseFile())
        return ERROR_PARSING_FILE;
    if (!readfile())
        return ERROR_READING_FILE;
 
    return SUCCESS; // если всё прошло успешно
}
*/
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
    Monsters eMonsterType = MONSTER_OGRE;
    Animals myHomepet(ANIMAL_CAT);  // Создание перечисления, в котором есть перечислители, описанные выше
    int mypet = ANIMAL_CAT;  // Пременная получит значение 4
    std::cout << ANIMAL_DOG << std::endl;  // Выведется 3
    printAnimals(myHomepet);

    return 0;
}