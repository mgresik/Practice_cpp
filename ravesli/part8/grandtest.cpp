#include <iostream>
#include <cmath>

class Point
{
private:
    double m_a;
    double m_b;
public:
    Point(){m_a = 0.0, m_b = 0.0;}

    Point(double a, double b)
    {
        m_a = a;
        m_b = b;
    }

    double distanceTo(const Point &point) const
    {
        return (sqrt((m_a - point.m_a) * (m_a - point.m_a) + (m_b - point.m_b) * (m_b - point.m_b)));
    }

    void print()
    {
        std::cout << "Point("<< m_a << ", " << m_b << ")" << std::endl;
    }
};

int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
 
    return 0;
}
