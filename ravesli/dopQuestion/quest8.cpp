#include <iostream>
#include <string>
#include <vector>
 
struct Date {
 int day;
 int month;
 int year;
};
 
class Ticket {
private:
	std::string m_destination; // Пункт назначения
	int m_flightNumber; // Номер рейса
	std::string m_name; // ФИО пассажира
	Date m_date; // Дата рейса (день.месяц.год)
public:
	Ticket() {};
	Ticket(std::string destination, int flightNumber, std::string name, Date date)
		: m_destination(destination), m_flightNumber(flightNumber), m_name(name), m_date(date)
	{};
 
	void initTicket() {
		std::string destination;
		int flightNumber;
		std::string name;
		Date date;
		std::cout << "Enter the destination: ";
		std::cin >> destination;
		m_destination = destination;
 
		std::cout << "Enter the flight number: ";
		std::cin >> flightNumber;
		m_flightNumber = flightNumber;
 
		std::cin.ignore(32767, '\n');
		std::cout << "Enter the name of the passenger: ";
		std::getline(std::cin, name);
		m_name = name;
 
		do {
			std::cout << "Enter the day of the flight: ";
			std::cin >> date.day;
		} while (date.day > 31);
		m_date.day = date.day;
 
		do {
			std::cout << "Enter the month of the flight: ";
			std::cin >> date.month;
		} while (date.month > 12);
		m_date.month = date.month;
 
		std::cout << "Enter the year of the flight: ";
		std::cin >> date.year;
		m_date.year = date.year;
	}
	friend std::ostream& operator<< (std::ostream& out, const Ticket& t);
};
std::ostream& operator<< (std::ostream& out, const Ticket& t) {
	out << "\nDestination: " << t.m_destination
			<< "\nFlight number: " << t.m_flightNumber
			<< "\nName of passinger: " << t.m_name
	<< "\nDate: " << t.m_date.day << '.' << t.m_date.month << '.' << t.m_date.year<<"\n\n";
	return out;
}
 
	std::vector<Ticket> zakaz;
	Ticket ticket{ "", 0, "", {1, 1, 2000} };
 
void initZakaz10() {
	ticket = { "Tallinn", 23, "Ivan Ivanov", {1,7,2022} };
	zakaz.push_back(ticket);
	ticket = { "Kiyv", 2, "Vasya Pupkin", {11,2,2023} };
	zakaz.push_back(ticket);
	ticket = { "Berlin", 15, "Ivan Fjodorovich Kruzershtern", {2,12,2024} };
	zakaz.push_back(ticket);
	ticket = { "Tallinn", 23, "Ivan Ivanov", {1,7,2023} };
	zakaz.push_back(ticket);
	ticket = { "Vashington", 1, "Sergei Ivanovich", {21,7,2025} };
	zakaz.push_back(ticket);
	ticket = { "Vashington", 1, "Ivan Ivanov", {1,7,2026} };
	zakaz.push_back(ticket);
	ticket = { "Paris", 3, "Semen Gorbunkov", {1,1,2026} };
	zakaz.push_back(ticket);
	ticket = { "Tallinn", 23, "Viktor Ivanovich", {11,12,2022} };
	zakaz.push_back(ticket);
	ticket = { "New_York", 2, "Ivan Ivanovich", {1,7,2022} };
	zakaz.push_back(ticket);
	ticket = { "Tallinn", 23, "Ivan Ivanov", {1,7,2027} };
	zakaz.push_back(ticket);
}
 
void menu() {
	char choice;
	int number;
	do{
	std::cout << "\nPress your choice:\n";
	std::cout << "List of the all tickets - l\n";
	std::cout << "Adding a new ticket     - a\n";
	std::cout << "Erasing a ticket        - e\n";
	std::cout << "Quit                    - q\n";
	std::cin >> choice;
	switch (choice) {
	case 'l':
		for (int i = 0; i < zakaz.size(); ++i) {
			std::cout << i + 1 << zakaz[i];
		}
		break;
	case 'a':
		ticket.initTicket();
		zakaz.push_back(ticket);
		break;
	case 'e':
		do {
			std::cout << "Enter the number of the ticket ( 1 - " << zakaz.size() << " ): ";
			std::cin >> number;
		} while (number < 1 || number > zakaz.size());
		
		zakaz.erase(zakaz.begin() + number - 1);
		break;
	case 'q':
		break;
	default:
		std::cout << "Wrong choice! Try again.\n";
	}
	}	while (choice != 'q');
}
 
int main() {
	initZakaz10();
	menu();
 
}