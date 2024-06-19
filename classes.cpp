#include "iostream"
#include "string"  //Добавление инициализации строк
#include "vector"  // Добавление инициализации векторов
#include "cassert" //Добавление информации об билде, ошибках, дебаге
using namespace std;

class firstClass
{ // Создания класса, который выступает как тип данных,
public:
    // создание конструкторов класса
    explicit firstClass(int sz = DefaultSizeAr);  //конструктор по умолчанию
    firstClass (int *array, int array_size);
    firstClass (const firstClass& rhs);
    ~firstClass() { delete[] ia; }  // Деструктор
    // сравнение
    bool operator==(const firstClass &) const
    {
        return true;
    };
    bool operator!=(const firstClass &) const
    {
        return false;
    };

    // присваивание
    firstClass &operator=(const firstClass)
    {
        return *this;
    };

    int size() const 
    {
        return _size;
    };
    void sort();

    int min() const;
    int max() const;

    int find(int value) const; // возвращает индекс первого найденного значения value в массиве типа firstClass

private:
    static const int DefaultSizeAr = 12;
    int _size;
    int *ia;
};
firstClass::firstClass (int sz)
{
    _size = sz;
    ia = new int[_size];

    for (int ix = 0; ix < _size; ++ix)
        ia[ix] = 0;
    {
        /* code */
    }
    
}

firstClass proba11; //  Статический объект proba11 с типом firstClass
firstClass proba12;
// Доступ к объектам класс выполняется с помощью ".", к указателям на объекты "->"
int min_val = proba11.min();
// int min_dinVal = proba11->min(); //Если rndArry динамический объект
int main()
{
    proba11 = proba12;
    if (proba11 == proba12)
    {
        cout << "Не лох!\n";
    }

    return 0;
};

