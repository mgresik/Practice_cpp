#include <iostream>
#include <utility>
#include <string>

struct Student
{
	std::string name;
	int grade;
};
 
void sortNames(Student *students, int length)
{

	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int largestIndex = startIndex;
 
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (students[currentIndex].grade > students[largestIndex].grade)
				largestIndex = currentIndex;
		}
 
		std::swap(students[startIndex], students[largestIndex]);
	}
}
 
int main()
{
	int numStudents = 0;
	do
	{
		std::cout << "How many students do you want to enter? ";
		std::cin >> numStudents;
	} while (numStudents <= 1);
 
	// Динамически выделяем массив для хранения студентов
	Student *students = new Student[numStudents];
 
	// Записываем имя и оценку каждого студента
	for (int index = 0; index < numStudents; ++index)
	{
		std::cout << "Enter name #" << index + 1 << ": ";
		std::cin >> students[index].name;
		std::cout << "Enter grade #" << index + 1 << ": ";
		std::cin >> students[index].grade;
	}
 
	// Сортируем студентов
	sortNames(students, numStudents);
 
	// Выводим имена студентов и их оценки
	for (int index = 0; index < numStudents; ++index)
		std::cout << students[index].name << " got a grade of " << students[index].grade << "\n";
 
	// Не забываем об освобождении памяти
	delete[] students;
 
	return 0;
}