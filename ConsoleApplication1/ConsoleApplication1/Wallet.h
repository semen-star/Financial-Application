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

    void SetCreditCard() {

    }
    void SetDebitCard() {

    }
    void SetCash() {

    }

    double getBalance(Cash cashUser, DebitCard debitCard) {
        balance = cashUser.GetBalance() + debitCard.GetBalance();
        return Balance; 
    }

    ~Wallet()
    {
        delete credit;
        delete debit;
        delete cash;
    }
};