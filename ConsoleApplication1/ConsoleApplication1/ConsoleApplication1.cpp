#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "User.h"
using namespace std;




void saveUser(User& user, string path) 
{
    ofstream file(path);
    if (!file.good()) return;

    file << user.GetName() << endl;
    file << user.GetSurname() << endl;
    file << user.GetPassportNum() << endl;
    file.close();
}
void loadUser(User& user, string path) 
{
    ifstream file(path);
    if (!file.good()) return;

    file >> user.Name;
    file >> user.Surname;
    file >> user.PassportNum;
    
    file.close();
}


int MainMenu(int& choise) {

    cout << endl;
    cout << "\t1-Показать данные пользователя" << endl;
    cout << "\t2-Сменить данные пользователя" << endl;
    cout << "\t3-Записать статью расходов" << endl;
    cout << "\t4-Записать статью доходов" << endl;
    cout << "\t5-Взять долг/кредит" << endl;
    cout << "\t6-Выйти из программы" << endl;


    cout << "\n\nВведите цифру:"; cin >> choise;
    return  choise;
}
void DoActions(User& user, int choise) {
    if (choise == 1) {
        user.OutputInfo();
        cin.get();
    }
    else if (choise == 2) {
        user.SetInfo();
        saveUser(user, "UserData.txt");
        cin.get();
    }
    else if (choise == 3) {
        cout << "I worked about it";
    }
    else if (choise == 4) {
        cout << "I worked about it";
    }
    else if (choise == 5) {
        cout << "I worked about it";

    }
}

bool is_file_exist(string fileName)
{
    ifstream infile(fileName);
    return infile.good();
}

void localizated() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
}
int main() {
    localizated();

    User MainUser; 
    //проверка на существование файла
    if (!is_file_exist("UserData.txt")) {
        MainUser.SetInfo();
        saveUser(MainUser, "UserData.txt");
    }
    else {
        loadUser(MainUser, "UserData.txt");
    }


    
    system("cls");
    cout << "Name: " << MainUser.GetName() << endl << "Surname: " << MainUser.GetSurname() << endl;
    int choise{ 0 };
    while (choise != 6) {
        MainMenu(choise);
        if (choise != 6)
            DoActions(MainUser, choise);
    }
  
    return 0;
}




//TODO сделать нормальную локализацию под мак и винду