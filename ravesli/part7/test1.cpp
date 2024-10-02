#include <iostream>

typedef int (*arithmeticFcn)(int, int);
char getAction()
{
    while (true)
    {
        std::cout << "Введите действие\n";
        char action;
        std::cin >> action;
        std::cin.ignore(32767,'\n');
        if (action == '+' || action == '-' || action == '*' || action == '/')
        {         
            return action;
        }
        else{    
            std::cout << "Что-то не так, попробуй снова";
        }
    }
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

arithmeticFcn getArithmeticFcn(char action)
{
    switch (action)
	{
	default: // функцией по умолчанию будет add()
	case '+': return add;
	case '-': return subtract;
	case '*': return multiply;
	case '/': return divide;
	}
}

int main()
{
    std::cout << "Введите числа\n";
    int a, b;
    std::cin >> a >> b;
    char action = getAction();

    arithmeticFcn fcn = getArithmeticFcn(action);
    std::cout << a << action << b << " = " << fcn(a, b) << '\n';

    return 0;
}