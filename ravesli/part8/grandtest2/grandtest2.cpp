#include <iostream>
#include <string>

class Monster
{
public:
    enum MonsterType
    {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES,
    };
private:
    MonsterType m_type;
    std::string m_name;
    int m_hp;

public:
    Monster(MonsterType type, std::string name, int hp)
        : m_type(type), m_name(name), m_hp(hp)
    {

    }

    std::string getTypeMonster() const
    {
        switch (m_type)
        {
        case Dragon: return "dragon";
        case Goblin: return "goblin";
		case Ogre: return "ogre";
		case Orc: return "orc";
		case Skeleton: return "skeleton";
		case Troll: return "troll";
		case Vampire: return "vampire";
		case Zombie: return "zombie";
        }

        return "Error!";
    }

    void print() const
    {
        std::cout << m_name << " is it " << getTypeMonster() << " and have " << m_hp << " health point\n"; 
    }
};

class MonsterGenerator
{
private:
   
public:

	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	};

    static Monster generateMonster()
    {
        Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1));
		int health = getRandomNumber(1, 100);
        static std::string s_names[6] = {"Max", "Anton", "Jack", "John", "Archibald", "Trevor"};

        return Monster(type, s_names[getRandomNumber(0, 5)], health);
    }

};

int main()
{
    Monster jack(Monster::Orc, "Jack", 90);
    jack.print();

    Monster m = MonsterGenerator::generateMonster();
	m.print();

    return 0;
}