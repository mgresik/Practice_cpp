#include <vector>
#include <algorithm>
#include <iostream>

int ia[ 10 ] = {
   51, 23, 7, 88, 41, 98, 12, 103, 37, 6
};

int main()
{
   vector< int > vec( ia, ia+10 );
   vector<int>::iterator it = vec.begin(), end_it = vec.end();
   cout << "Начальный массив: ";

   for ( ; it != end_it; ++ it ) cout << *it << ' ';
   cout << "\n";

   // сортировка массива
   sort( vec.begin(), vec.end() );

   cout << "упорядоченный массив: ";
   it = vec.begin(); end_it = vec.end();
   for ( ; it != end_it; ++ it ) cout << *it << ' ';
      cout << "\n\n";
   int search_value;
   cout << "Введите значение для поиска: ";
   cin >> search_value;
   
   // поиск элемента
   vector<int>::iterator found;
   found = find( vec.begin(), vec.end(), search_value );

   if ( found != vec.end() )
      cout << "значение найдено!\n\n";
   else cout << "значение найдено!\n\n";
   // инвертирование массива
   reverse( vec.begin(), vec.end() );
   cout << "инвертированный массив: ";
   it = vec.begin(); end_it = vec.end();

   for ( ; it != end_it; ++ it ) cout << *it << ' ';
      cout << endl;
}