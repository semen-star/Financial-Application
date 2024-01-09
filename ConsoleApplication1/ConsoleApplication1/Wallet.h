pragma once
#include <iostream>
#include "Cash.h"
#include "CreditCard.h"
#include "DebitCard.h"

using namespace std;

class Wallet {
public:
    Wallet() = default;
    Wallet(const Wallet& other) : credit{new CreditCard(*other.credit)}, debit{ new DebitCard(*other.debit) }, cash{ new Cash(*other.cash) } {}

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
        return cash->GetBalance() + debit->GetBalance() + credit->GetBalance();
    }

    ~Wallet()
    {
        delete credit;
        delete debit;
        delete cash;
    }
};