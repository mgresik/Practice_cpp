#include "iostream"
#include "string"  //Добавление инициализации строк
#include "vector"  // Добавление инициализации векторов
#include "cassert" //Добавление информации об билде, ошибках, дебаге
using namespace std;


template <class elemType>  // Создание шаблона класса
class Array {  // Название нового класса по шаблону
public:
   explicit Array( int sz = DefaultArraySize );
   Array( const elemType *ar, int sz );
   Array( const Array &iA );

   virtual ~Array() { delete[] _ia; }

   Array& operator=( const Array & );
   int size() const { return _size; }
   virtual elemType& operator[]( int ix )
      { return _ia[ix]; }

   virtual void sort( int,int );
   virtual int find( const elemType& );
   virtual elemType min();
   virtual elemType max();
protected:
   void init( const elemType*, int );
   void swap( int, int );
   static const int DefaultArraySize = 12;
   int _size;
   elemType *_ia;
};