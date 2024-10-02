#include <cassert> // для assert()
#define NDEBUG // Отключает все assert

int getArrayValue(const std::array<int, 10> &array, int index)
{
    // Предполагается, что значение index-а находится между 0 и 8
    assert(index >= 0 && index <= 8); // это строка 6 в Program.cpp
 

    assert(found && "Animal could not be found in database"); // found это логическое утверждение
    // Даст понимание, что конкретно не так

    static_assert(sizeof(long) == 8, "long must be 8 bytes");  // Обрабатывается ещё на компиляции
    return array[index];
}