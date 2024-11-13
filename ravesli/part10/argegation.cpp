#include <iostream>
#include <string>
#include <vector>
 
class Worker
{
private:
	std::string m_name;
 
public:
	Worker(std::string name)
		: m_name(name)
	{
	}
 
	std::string getName() { return m_name; }
};
 
class Department
{
private:
	std::vector<Worker*> m_worker;
 
public:
	Department()
	{
	}
 
	void add(Worker *worker)
	{
		m_worker.push_back(worker);
	}
 
	friend std::ostream& operator<<(std::ostream &out, const Department &department)
	{
		out << "Department: ";
		for (unsigned int count = 0; count < department.m_worker.size(); ++count)
			out << department.m_worker[count]->getName() << ' ';
		out << '\n';
 
		return out;
	}
};
 
 
int main()
{
	// Создаем Работников вне области видимости класса Department
	Worker *w1 = new Worker("Anton");
	Worker *w2 = new Worker("Ivan");
	Worker *w3 = new Worker("Max");
 
	{
		// Создаем Отдел и передаем Работников в качестве параметров конструктора
		Department department; // создаем пустой Отдел
		department.add(w1);
		department.add(w2);
		department.add(w3);
 
		std::cout << department;
 
	} // department выходит из области видимости и уничтожается здесь
 
	std::cout << w1->getName() << " still exists!\n";
	std::cout << w2->getName() << " still exists!\n";
	std::cout << w3->getName() << " still exists!\n";
 
	delete w1;
	delete w2;
	delete w3;
 
	return 0;
}