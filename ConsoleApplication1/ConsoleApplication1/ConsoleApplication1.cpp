#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class Money {
protected:
    float balance;

    Money() :balance{ 0 } {}

    virtual void spend() = 0;
    virtual void earn() = 0;
};

class CreditCard :public Money {
public:


};
class CreditCardUser : public CreditCard {
public:

};

class DebitCard :public Money {
public:

};
class DebitCardUser :public DebitCard {

};

class Wallet :public Money {
public:
    bool HaveCreditCard;
    bool HaveDebitCard;

    Wallet(bool credit, bool debit) : HaveCreditCard{ credit }, HaveDebitCard{ debit } {}
    Wallet() : Wallet(0, 0) {}

};

class User {
protected:
    string Name;
    string Surname;
    string PassportNum;
public:
    User(string name, string surname, string PassportNum) :Name{ name }, Surname{ surname }, PassportNum{ PassportNum } {}
    User() : User("None", "None", "") {}

    string GetPassportNum() {
        return PassportNum;
    }
    string GetName() {
        return Name;
    }
    string GetSurname() {
        return Surname;
    }
};


void setInfo(User& user) {
    string name;
    string Surname;
    string PassportNum;
    {
        cout << "Input Name:";
        cin >> name;
        cout << "Input Surname:";
        cin >> Surname;
        cout << "Input number of Passport(without space):";
        cin >> PassportNum;
    }
    User TempUser{ name, Surname,PassportNum };
    user = TempUser;
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
        cout << "Name: " << user.GetName() << endl;
        cout << "Surname: " << user.GetSurname() << endl;
        cout << "Number of Passport: " << user.GetPassportNum() << endl;
        cout << "Balance: " << "I worket about it!" << endl;
        cin.get();
    }
    else if (choise == 2) {
        setInfo(user);
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


void localizated() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
}
int main() {
    ofstream file;
    file.open("data.txt");
    localizated();

    User semyon;
    setInfo(semyon);
    cout << "Name: " << semyon.GetName() << endl << "Surname: " << semyon.GetSurname() << endl;
    int choise{ 0 };
    while (choise != 6) {
        MainMenu(choise);
        if (choise != 6)
            DoActions(semyon, choise);
    }
    file.close();
    return 0;
}
