#include <iostream>
#include <string>
#include <chrono>
#include <thread>
 
int main() {
    std::cout << "Введите сообщение: ";
    std::string str;
    std::getline(std::cin, str);
    std::chrono::milliseconds duration(400);
    for (auto &item : str) 
    {
        std::cout << item << std::flush;       // flush сбрасывает содержимое буфера потока для
        std::this_thread::sleep_for(duration); // немедленного отображения в консоли
    };
    return 0;
}