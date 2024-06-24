#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// Изменить путь прочтения и сохранения файлов, настроить запуск и компиляцию
// проекта

bool IsLoggedIN() {
  string username, password, un, pw;
  cout << "enter username: ";
  cin >> username;
  cout << "enter password: ";
  cin >> password;

  ifstream read("data\\" + username + ".txt");
  getline(read, un);
  getline(read, pw);

  if (un == username && pw == password) {
    return true;
  } else {
    return false;
  };
}
int main() {
  int choice;
  cout << "1: Registration\n2: Login\nChoice var: ";
  cin >> choice;
  if (choice == 1) {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "enter password: ";
    cin >> password;

    ofstream file;
    file.open("data\\" + username + ".txt");
    file << username << endl << password;
    file.close();
    main();
  } 
  else if (choice == 2) {
    bool status = IsLoggedIN();
    if (!status) {
      cout << "Обманщик!" << endl;
      system("Pause");
      return 0;
    }
   else {
    cout << "Добро пожаловать!" << endl;
    system("PAUSE");
    return 1;
    }
  }
};