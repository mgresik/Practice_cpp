#include <iostream>
#include <string>

enum class Monsters
{
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

struct Monster
{
    std::string name;
    int hp;
    Monsters type;
};

std::string getMonsterTypeString(Monster monster)
{
    if (monster.type == Monsters::OGRE)
        return "Ogre";
    if (monster.type == Monsters::SKELETON)
        return "Skeleton";
    if (monster.type == Monsters::ORC)
        return "Orc";
    if (monster.type == Monsters::GOBLIN)
        return "Goblin";
    if (monster.type == Monsters::TROLL)
        return "Troll";
    return "Unknown";
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeString(monster);
    std::cout << " is named " << monster.name << " and has " << monster.hp << " health.\n";
}


int main()
{
    Monster goblin = {"Adam Cruseader", 100, Monsters::GOBLIN};
    printMonster(goblin);
}