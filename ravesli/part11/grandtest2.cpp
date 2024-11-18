#include <string>
#include <iostream>

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
private:
    enum Type
    {
        Dragon,
        Orc,
        Slime,
        MAX_TYPES,
    }
    struct MonsterData
    {
        const char* name;
        char symbol;
        int health;
        int damage;
        int gold;
    };
    static MonsterData monsterData[MAX_TYPES];

    Monster(Type type) : Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].damage, monsterData[type].gold)

    
};

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

int main()
{
	Creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.reduceHealth(1);
	std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold." << std::endl;

    std::cout << "Введите имя персонажа" << std::endl;
    std::string namePerson;
    std::cin >> namePerson;
    Player p(namePerson);
    std::cout << "Welcome, " << p.getName() << std::endl;
    std::cout << "You have " << p.getHealth() << " health and are carrying " << p.getGold() << " gold." << std::endl;

    Monster m(Monster::ORC);
	std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
    
	return 0;
}