#pragma once
#include <iostream>
#include "Cash.h"
#include "CreditCard.h"
#include "DebitCard.h"

using namespace std;

class Wallet : public Money{
private:
    double balance;
public:
    CreditCard* credit = NULL;
    DebitCard* debit = NULL;
    Cash* cash = NULL;

    void NewCreditCard() {
        credit = new CreditCard();
    }
    void NewDebitCard() {
        debit = new DebitCard();
    }
    void NewCash() {
        cash = new Cash(0,0);
    }

    double getBalance() {
        balance = cash->GetBalance() + debit->GetBalance();
        return Balance; 
    }

    ~Wallet()
    {
        delete credit;
        delete debit;
        delete cash;
    }
};