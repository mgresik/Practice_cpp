#include "cassert" //Добавление информации об билде, ошибках, дебаге
#include "iostream"
#include "string" //Добавление инициализации строк
#include "vector" // Добавление инициализации векторов
using namespace std;

void readIn() { cout << "He's work?\n"; }
void outPut() { cout << "Is it he's work and this is work!\n"; }
string stroka = "Well done!"; //  Инициализация строки
vector <string> Kloun(15); // Инициализация вектора на 15 строковых значений
int first_massiv[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0} // Создание массива
    // int ival = 123;
    // int *pint;   //  Объявление указателя на объект типа инт
    // pint = &ival;  //  Указатель получил значение адреса, в котором лежит
    // переменная ival

        // ival = ival + 1:
        *pint =
            *pint +
            1; //  Это косвенная адресация. 17 и 18 строки делают одно и тоже
int *pint = new int(1024); //  Выделение памяти на динамический единичный объект
                           //  типа int, функция new возвращает адрес памяти,
                           //  поэтому pint есть указатель на адрес памяти
int *pia = new int[4]; //  Выделение памяти на динамический массив с кол-вом
                       //  ячеек 4 типа int, new возвращает адрес памяти,
                       //  поэтому pia есть указатель на адрес памяти
delete pint; // Ф-ия удаления динамических объектов, рчистка памяти
int main() // Функция без параметров, на выходе функции должно быть int-число
{
  cout << "Hello world\n";
  cout << "234\n";
  readIn();
  outPut();
  int iterations = 0;
  bool iter_state = true;
  while (iter_state != false) {
    iterations++;

    cout << "Цикл был выполнен " << iterations << " раз\n";
    if (iterations == 5)
      iter_state = false;
  }

  return 0; // Индикатор успешного завершения функции
}
