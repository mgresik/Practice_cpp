#include <iostream>
#include <cmath> // для функции fabs()
 
// Возвращаем true, если разница между a и b в пределах процента эпсилона 
bool approximatelyEqual(double a, double b, double epsilon)
{
	return fabs(a - b) <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}
 
// Возвращаем true, если разница между a и b меньше absEpsilon или в пределах relEpsilon 
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	// Проверяем числа на равенство их друг другу - это нужно в случаях, когда сравниваемые числа являются нулевыми или около нуля
	double diff = fabs(a - b);
	if (diff <= absEpsilon)
		return true;
 
	// В противном случае, возвращаемся к алгоритму Кнута
	return diff <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}
 
int main()
{
	// Значение a очень близко к 1.0, но, из-за ошибок округления, чуть меньше 1.0
	double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
 
	std::cout << approximatelyEqual(a, 1.0, 1e-8) << "\n";     // сравниваем "почти 1.0" с 1.0
	std::cout << approximatelyEqual(a - 1.0, 0.0, 1e-8) << "\n"; // сравниваем "почти 0.0" с 0.0
	std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, 1e-12, 1e-8) << "\n"; // сравниваем "почти 0.0" с 0.0
}