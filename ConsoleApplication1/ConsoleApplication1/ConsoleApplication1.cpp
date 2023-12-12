#include <iostream>
#include <windows.h>
#include <fstream>
#include <sys/stat.h>
#include "User.h"
using namespace std;

class Money {
protected:
    float balance;

    Money() :balance{ 0 } {}

    virtual void spend() = 0;
    virtual void earn() = 0;
};



class Wallet :public Money {
public:
    bool HaveCreditCard;
    bool HaveDebitCard;

    Wallet(bool credit, bool debit) : HaveCreditCard{ credit }, HaveDebitCard{ debit } {}
    Wallet() : Wallet(0, 0) {}

};




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
        cout << "Name: " << user.GetName() << endl;
        cout << "Surname: " << user.GetSurname() << endl;
        cout << "Number of Passport: " << user.GetPassportNum() << endl;
        cout << "Balance: " << "I worket about it!" << endl;
        cin.get();
    }
    else if (choise == 2) {
        user.SetInfo();
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
    std::ifstream infile(fileName);
    return infile.good();
}

void localizated() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
}
int main() {
    ofstream file;
    file.open("data.txt");
    localizated();

    User MainUser; 
    {
        bool file = is_file_exist("data.txt");
        if(file==false)
            MainUser.SetInfo();
        else {

        }
    }//проверка на существование файла


    
    system("cls");
    cout << "Name: " << MainUser.GetName() << endl << "Surname: " << MainUser.GetSurname() << endl;
    int choise{ 0 };
    while (choise != 6) {
        MainMenu(choise);
        if (choise != 6)
            DoActions(MainUser, choise);
    }
    file.close();
    return 0;
}
