#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "User.h"
#include "Functions.h"
using namespace std;

void localizated() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
}
int main() {
    localizated();

    User MainUser; 
    MainUser.SetInfo();
    //проверка на существование файла
    /*if (!is_file_exist("UserData.txt")) {  
        MainUser.SetInfo();
        saveUser(MainUser, "UserData.txt");
    }
    else {
        loadUser(MainUser, "UserData.txt");
    }*/


    
    system("cls");
    //cout << "Name: " << MainUser.GetName() << endl << "Surname: " << MainUser.GetSurname() << endl;
    int choise{ 0 };
    while (choise != 6) {
        MainMenu(choise);
        if (choise != 6)
            DoActions(MainUser, choise);
    }
    saveUser(MainUser, "UserData.txt");
    return 0;
}
