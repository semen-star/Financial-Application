#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Money.h"
#include "Cash.h"
#include "Cards.h"
#include "User.h"
#include "Wallet.h"

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
    cout << "\t6-Показать баланс/состояние доходов\\расходов" << endl;
    cout << "\t7-Выйти из программы" << endl;


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
    else if (choise == 6) {
        cout << "I worked about it";

    }
}

bool is_file_exist(string fileName)
{
    ifstream infile(fileName);
    return infile.good();
}
