#include <iostream>
#include <string>

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
 	// Равномерно распределяем генерацию случайного числа в диапазоне значений
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool toGame(std::string& str)
{
    int change = 0;
    do
    {
        std::string inStr;
        std::cout << "Введите число: ";
        std::cin >> inStr;
        for (int i = 0; i < 3; i++)
        {
            if (inStr[i] == str[i])
            {
                change++;
            }
        }
        if (change == 0)
        {
            std::cout << "Нет совпадений \n";
        }
        else if (change == 1)
        {
            std::cout << "Есть одно совпадение \n";
        }
        else if (change == 2)
        {
            std::cout << "Есть два совпадения \n";
        };
    } while (!(change == 3));
    
    return true;
}

void checkAnswer(std::string& str, std::string& answer)
{

}
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    rand();
    int startAnswer = getRandomNumber(0, 999);
    std::string answer = std::to_string(startAnswer);
    bool rezult = toGame(answer);
    if (rezult)
    {
        std::cout << "Вы угадали! \n";
    }
    return 0;
}