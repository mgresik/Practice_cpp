#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

class Creature
{
protected:
    std::string m_name;
    char m_simvol;
    int m_healht;
    int m_damageDeal;
    int m_gold;
public:
    Creature(std::string name, char simvol, int hp, int damage, int gold):
        m_name(name), m_simvol(simvol), m_healht(hp), m_damageDeal(damage), m_gold(gold){}

    std::string getName()
    {
        return m_name;
    }
    char getSimvol() {return m_simvol;}
    int getHealth() {return m_healht;}
    int getDamage() {return m_damageDeal;}
    int getGold() {return m_gold;}
    void reduceHealth(int damage) {m_healht = m_healht - damage;}
    bool isDead() {return m_healht <= 0;}
    void addGold(int money) {m_gold += money;}
};

class Player : public Creature
{
private:
    int m_level = 1;
public:
    Player(std::string name)
        : Creature(name, '@', 10, 1, 0){}
    
    void lvlUp()
    {
        m_level++;
        m_damageDeal++;
    }
    int getLvl() {return m_level;}
    bool hasWon() {return m_level >= 20;}
};

class Monster : public Creature
{
public:
    enum Type
    {
        Dragon,
        Orc,
        Slime,
        MAX_TYPES,
    };
    struct MonsterData
    {
        const char* name;
        char symbol;
        int health;
        int damage;
        int gold;
    };
    static MonsterData monsterData[MAX_TYPES];

    Monster(Type type) : Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].damage, monsterData[type].gold){}

    static Monster getRandomMonster()
    {
	    int number = getRandomNumber(0, MAX_TYPES - 1);
	    return Monster(static_cast<Type>(number));
    }
};

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

void fightMonster()
{
    
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
	rand();

    std::cout << "Welcome to my game!";
    std::cout << "Enter the name of player \n";
    std::string playerName;
    std::cin >> playerName;

    Player p(playerName);
    std::cout << p.getName() << '\n';
    while (!(p.isDead()))
    {
        Monster m = Monster::getRandomMonster();
        std::cout << "You see a " << m.getName() << ' ' << m.getSimvol();
        

    }
	return 0;
}