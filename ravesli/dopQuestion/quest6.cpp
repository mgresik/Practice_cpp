#include <iostream>
#include <string>

double min(double *arr, const int &size)
{
    double min = arr[0];
    for (int i = 0; i < size; i++)
    {
        min = min < arr[i] ? min : arr[i];
    };

    return min;
}

double max(double *arr, const int &size)
{
    double max = arr[0];
    for (int i = 0; i < size; i++)
    {
        max = max < arr[i] ? max : arr[i];
    };

    return max;
}

double average(double *arr, const int &size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    };
    
    return sum / size;
}

int main()
{
    std::cout << "Введите количество чисел в последовательности \n";
    int size;
    std::cin >> size;
    double *data = new double[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите " << i + 1 << " член полседовательности \n";
        std::cin >> data[i];
    };
    
    std::cout << "Ваша последовательность ";

    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << ' ';
    };

    std::cout << '\n';
    std::cout << "Минимальное " << min(data, size) << '\n';
    std::cout << "Максимальное " << max(data, size) << '\n';
    std::cout << "Среднее " << average(data, size) << '\n';

    delete[] data;
    return 0;
}