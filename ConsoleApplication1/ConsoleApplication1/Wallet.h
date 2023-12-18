#pragma once
#include <iostream>
#include "Money.h"
#include "Cash.h"
#include "Cards.h"
using namespace std;

class Wallet : public Money{
private:
    double balance;
public:
    bool HaveCreditCard;
    bool HaveDebitCard;
    bool HaveCash;

    Wallet(bool credit, bool debit, bool Cash) : Money(), HaveCreditCard{ credit }, HaveDebitCard{ debit }, HaveCash{ Cash } {}
    Wallet() : Wallet(0, 0, 1) {}


    double getBalance(Cash cashUser, DebitCardUser debitCard) {

        balance = cashUser.GetBalance() + debitCard.GetBalance();
        return Balance; 
    }
};