#pragma once
#include <iostream>
#include "Money.h"
#include "Cards.h"
using namespace std;


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


    void SetInfo() {
        cout << "Input Name:";
        cin >> Name;
        cout << "Input Surname:";
        cin >> Surname;
        cout << "Input number of Passport(without space):";
        cin >> PassportNum;
    }
};



