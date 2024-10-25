// КОД НЕ МОЙ, НО ЕГО СЛЕДУЕТ РАЗОБРАТЬ
#include <iostream>
#include <string>
#include <sstream>
 
double str2num(std::string str)
{
	double num = NAN;
	if (!str.empty())
	{
		std::stringstream ss;
		ss << str;
		ss >> num;
		if (int(num) == 0 && str[0] != '0')	num = NAN;
	//	if (int(num) == 0 && str.size() > 1) num = NAN;
	//  Можно добавлять критерии идентификации числового значения
	}
	return num;
}
 
// Удаление "пробела" в текущей позиции строки до появления отличного от него символа
void del_space(std::string* str, unsigned pos)
{
	while (!str->empty() && (*str)[pos] == ' ')
	{
		str->erase(pos, 1);
		if (!str->empty() && pos > str->size() - 1)
			pos = str->size() - 1;
	}
}
 
// Создание динамического числового массива для вычисленного количества введенных
// цифровых значений
void create_arr_num(std::string* str, double*& arr_num, unsigned count_num)
{
	if (count_num > 0)
	{
		arr_num = new double[count_num];
		unsigned pos = 0;
		count_num--;
		while (str->find(' ', pos) != std::string::npos)
		{
			unsigned end_pos = str->find(' ', pos);
			arr_num[count_num] = str2num(str->substr(pos, end_pos - pos));
			pos = end_pos + 1;
			count_num--;
		}
		arr_num[count_num] = str2num(str->substr(pos, str->size() - pos));
	}
}
 
// Удаление "пробелов" в начале и в конце строки, а также лишних "пробелов"
// в середине строки и вычисление количества цифровых значений в строке
void str2arr_num(std::string* str, unsigned &count_num)
{
	del_space(str, 0);
	del_space(str, !str->empty() ? str->size() - 1 : 0);
	unsigned pos = 0;
	count_num = !str->empty();
	while (count_num && str->find(' ', pos) != std::string::npos)
	{
		pos = str->find(' ', pos);
		pos++;
		count_num++;
		del_space(str, pos);
	}
}
 
// Проверка корректности ввода числовых значений. Если корректны, возвращает true
bool is_corr_data(double* arr_num, unsigned count_num)
{
	bool is_corr = arr_num;
	if (is_corr)
		for (int i = 0; i < count_num; i++)
			is_corr = is_corr && arr_num[i] != NAN && arr_num[i] >= 0;
	return is_corr;
}
 
// Определение минимального значения
double minimum(double* arr_num, unsigned count_num)
{
	double min = arr_num[0];
	for (int i = 1; i < count_num; i++)
		if (arr_num[i] < min) min = arr_num[i];
	return min;
}
 
int main()
{
    std::cout << "Enter a sequence of positive numbers separated by a space:\n";
	std::string str;
	unsigned count = 0;
	double* arr_num = nullptr;
	do 
	{
		if (arr_num)
		{
			delete[] arr_num;
			arr_num = nullptr;
			std::cout << "Repeat input! (Possible reasons:"
				         " invalid number format or negative number)\n";
		}
		std::getline(std::cin, str);
		str2arr_num(&str, count);
	    create_arr_num(&str, arr_num, count);
	}
	while (!is_corr_data(arr_num, count));
	std::cout << "\nMinimum value: " << minimum(arr_num, count) << "\n";
	if (arr_num) delete[] arr_num;
    std::cin.get();
    return 0;
}