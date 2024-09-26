int a = 7;
const int &ref1 = a; // ок: a - это неконстантное l-value
 
const int b = 9;
const int &ref2 = b; // ок: b - это константное l-value
 
const int &ref3 = 5; // ок: 5 - это r-value
---------------------------------------------
int a = 7;
int &ref1 = a; // ок: a - это неконстантное l-value
 
const int b = 8;
int &ref2 = b; // не ок: b - это константное l-value
 
int &ref3 = 4; // не ок: 4 - это r-value 

---------------------------------

ОПЕРАТОР ВЫБОРА ЧЛЕНОВ

struct Man
{
    int weight;
    double height;
};
Man man;
 
// Доступ к члену осуществляется через указатель на переменную структуры Man
Man *ptr = &man;
(*ptr).weight = 60;
(*ptr).weight = 60; // Доступ к элементу структуры через ссылку
ptr->weight = 60;  // Доступ через оператор выбора