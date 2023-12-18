#pragma once
#include <iostream>
#include "Money.h"
using namespace std;

class Wallet : public Money {
private:
    double Balance;
public:
    bool HaveCreditCard;
    bool HaveDebitCard;
    bool HaveCash;

    Wallet(bool credit, bool debit, bool Cash) : Money(), HaveCreditCard{ credit }, HaveDebitCard{ debit }, HaveCash{ Cash } {}
    Wallet() : Wallet(0, 0, 1) {}


    double GetBalance() {
        //Balance = Cash.Coins + Cash.Banknots + DebitCardUser.Balance;
        return Balance; 
    }
};