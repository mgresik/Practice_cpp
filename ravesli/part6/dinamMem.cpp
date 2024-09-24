#include <iostream>

int main()
{
    int *a = new int;  // Динамическое выделение памяти под переменную, доступ к ней только по указателю
    //  при отсутствии памяти на выделение - ошибОчка
    int *b = new (std::nothrow) int;  // Если памяти не будет - присвоится нуль В УКАЗАТЕЛЬ
    // Проверяем
    if (!b)
    {
        std::cout << "Do not have a memory";
    }
    
    int value = 7;
    int *ptr = new int;
    delete ptr; // возвращаем память обратно в операционную систему
    ptr = &value; // переприсваиваем указателю адрес value. Если сделать это без удаления ранее выделенной памяти - утечка.
    // Странный пример утечки
    int *ptr = new int;
    ptr = new int; // старый адрес утерян - произойдет утечка памяти

    int *array = new int [value];  // Динамический массив
    
    delete[] array;  // Указание скобочек особенно важно! иначе удалится память под 1 элемент массива
    array = 0;  // Необходимо для освобождения памяти

    int *array = new int[5] { 9, 7, 5, 3, 1 }; // Инициализация
}