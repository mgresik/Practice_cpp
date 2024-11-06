#include <cstdint>
#include <string>
#include <iostream>

class RGBA
{
private:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;

public:
    RGBA(std::uint8_t red = 0, std::uint8_t green = 0, std::uint8_t blue = 0, std::uint8_t alpha = 255) : 
        m_red(red), m_green(green), m_blue(blue), m_alpha(alpha){}

    void print()
    {
        std::cout << static_cast<int>(m_red);
    }
};

int main()
{
    RGBA color(0, 135, 135);
    color.print();

    return 0;
}
