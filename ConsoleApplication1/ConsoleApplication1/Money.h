#pragma once
#include <iostream>
#include <vector>
#include "Transaction.h"

using namespace std;


class Money {
public:
    double Balance;
    vector<Transaction> transactions;
    Money(double balance) :Balance{ balance } {}
    Money() :Balance{ 0 } {}

    virtual void spend(Transaction transaction) = 0;
    virtual void earn(double amount) = 0;

    virtual double GetBalance() = 0;
};