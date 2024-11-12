class Anything
{
private:
    static int s_value;
public:
    static int getValue() { return s_value; } // статический метод
};
 
int Anything::s_value = 3; // определение статической переменной-члена класса
 
int main()
{
    std::cout << Anything::getValue() << '\n';
}