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
    while (choise != 7) {
        MainMenu(choise);
        if (choise != 7)
            DoActions(MainUser, choise);
    }
    saveUser(MainUser, "UserData.txt");
    return 0;
}




//TODO сделать нормальную локализацию под мак и винду