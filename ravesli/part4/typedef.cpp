#include <iostream>

typedef double time_t; // используем time_t в качестве псевдонима для типа double
 
// Следующие два стейтмента эквивалентны
double howMuch;
time_t howMuch;

typedef double time_t;

// То же самое что и

using time_t = double;  //type alias

typedef int status_t;
status_t editData();

using status_t = int;
status_t editData();