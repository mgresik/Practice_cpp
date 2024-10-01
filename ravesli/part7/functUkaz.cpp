/*#include <iostream>

int boo();
double doo();
int moo(int a);

int main()
{
    int (*fcnPtr1)() = boo; // ок
    int (*fcnPtr2)() = doo; // не ок: тип указателя и тип возврата функции не совпадают!
    double (*fcnPtr4)() = doo; // ок
    fcnPtr1 = moo; // не ок: fcnPtr1 не имеет параметров, но moo() имеет
    int (*fcnPtr3)(int) = moo; // ок

    int (*fcnPtr)(int) = moo; // присваиваем функцию boo() указателю fcnPtr
    (*fcnPtr)(7);
}*/

#include <iostream> 
#include <algorithm> // для std::swap() (используйте <utility>, если поддерживается C++11)
 
// Обратите внимание, третьим параметром является пользовательский выбор выполнения сортировки
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int))
{
    // Перебираем каждый элемент массива
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        // bestIndex - это индекс наименьшего/наибольшего элемента, который мы обнаружили до этого момента
        int bestIndex = startIndex;
 
        // Ищем наименьший/наибольший элемент среди оставшихся в массиве (начинаем со startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            // Если текущий элемент меньше/больше нашего предыдущего найденного наименьшего/наибольшего элемента,
            if (comparisonFcn(array[bestIndex], array[currentIndex])) // СРАВНЕНИЕ ВЫПОЛНЯЕТСЯ ЗДЕСЬ
                // то это наш новый наименьший/наибольший элемент в этой итерации
                bestIndex = currentIndex;
        }
 
        // Меняем местами наш стартовый элемент с найденным наименьшим/наибольшим элементом
        std::swap(array[startIndex], array[bestIndex]);
    }
}
 
// Вот функция сравнения, которая выполняет сортировку в порядке возрастания (обратите внимание, это та же функция ascending(), что и в примере, приведенном выше)
bool ascending(int a, int b)
{
    return a > b; // меняем местами, если первый элемент больше второго
}
 
// Вот функция сравнения, которая выполняет сортировку в порядке убывания
bool descending(int a, int b)
{
    return a < b; // меняем местами, если второй элемент больше первого
}
 
// Эта функция выводит значения массива
void printArray(int *array, int size)
{
    for (int index=0; index < size; ++index)
        std::cout << array[index] << " ";
    std::cout << '\n';
}
 
int main()
{
    int array[8] = { 4, 8, 5, 6, 2, 3, 1, 7 };
 
    // Сортируем массив в порядке убывания, используя функцию descending()
    selectionSort(array, 8, descending);
    printArray(array, 8);
 
    // Сортируем массив в порядке возрастания, используя функцию ascending()
    selectionSort(array, 8, ascending);
    printArray(array, 8);
 
    return 0;
}