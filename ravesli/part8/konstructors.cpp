#include <iostream>
#include <string>

class Ball
{
private:
    std::string m_color;
    double m_radius;
public:
    Ball(double radius)
	{
		m_color = "red";
		m_radius = radius;
	}
 
    // Конструктор с параметрами color и radius.
    // Обрабатываются такие случаи, как не предоставлено никаких параметров, только color, color + radius
	Ball(const std::string &color="red", double radius=20.0)
	{
		m_color = color;
		m_radius = radius;
	}

    void print()
    {
        std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
    }

    ~Ball();
};

int main()
{
	Ball def;
	def.print();
 
	Ball black("black");
	black.print();
	
	Ball thirty(30.0);
	thirty.print();
	
	Ball blackThirty("black", 30.0);
	blackThirty.print();
 
	return 0;
}
