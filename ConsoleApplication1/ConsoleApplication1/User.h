#pragma once
#include <iostream>
#include "Wallet.h"
using namespace std;


class User {
protected:
    string Name;
    string Surname;
    string PassportNum;
    double Balance;
   
public:

    Wallet* wallet;

    
    User(string name, string surname, string PassportNum) :Name{ name }, Surname{ surname }, PassportNum{ PassportNum } {}
    User() : User("None", "None", "") {}

    void NewWallet() {
        wallet = new Wallet();
    }

    string GetPassportNum() {
        return PassportNum;
    }
    string GetName() {
        return Name;
    }
    string GetSurname() {
        return Surname;
    }
    double GetBalance() {
        return Balance;
    }
        
    
    void SetName(string Name_) {
        Name = Name_;
    }
    void SetSurname(string Surname_) {
        Surname = Surname_;
    }
    void SetPassNum(string PassNum_) {
        PassportNum=PassNum_;
    }
    void OutputInfo() {
        cout << "Name: " << Name << endl;
        cout << "Surname: " << Surname << endl;
        cout << "Number of Passport: " << PassportNum << endl;
        cout << "Balance(Without a credit card): " << wallet->getBalance() << endl;
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



