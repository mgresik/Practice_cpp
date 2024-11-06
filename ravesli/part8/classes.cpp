#include <iostream>
 
class DateClass
{
public:
    int m_day;
    int m_month;
    int m_year;
 
    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year;
    }
};

class Numbers
{
    public:
        Numbers() : a(5), b(6){}  // Инициализация без присваивания
        
        int a;
        int b;

        int set(int x, int y)
        {
            a = x;
            b = y;
            return 0;
        }

        void print()
        {
            std::cout << a << b;
        }
}

class Values
{
private:
    const int m_value;
 
public:
    Values(): m_value(7) // напрямую инициализируем константную переменную-член, запрет только на изменение
    {
    } 
};
 
int main()
{
    DateClass today { 12, 11, 2018 };
 
    today.m_day = 18; // используем оператор выбора членов для выбора переменной-члена m_day объекта today класса DateClass
    today.print(); // используем оператор выбора членов для вызова метода print() объекта today класса DateClass
    
    Numbers numb;

    numb.set(5, 4);
    numb.print;
    
    return 0;
}