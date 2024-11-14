#include <string>
#include <iostream>

class Human
{
private:
    int m_age;
    std::string m_name;
public:
    Human(std::string name = " ", int age = 0):m_name(name), m_age(age){}

    std::string getName() const {return m_name;};
    int getAge() const {return m_age;};
};

class HockeyPlayer : public Human
{
public:
    int m_game;
    int m_points;

    HockeyPlayer(std::string name = "", int age = 0, int game = 0, int points = 0) : Human(name, age), 
            m_game(game), m_points(points){}
    
    // Тут писать геттеры и сеттеры
}

class Employee: public Human
{
public:
    int m_wage;
    long m_employeeID;
 
    Employee(int wage = 0, long employeeID = 0)
        : m_wage(wage), m_employeeID(employeeID)
    {
    }
 
    void printNameAndWage() const
    {
        std::cout << m_name << ": " << m_wage << '\n';
    }
};

int main()
{

}