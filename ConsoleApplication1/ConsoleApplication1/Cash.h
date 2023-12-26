#pragma once
#include <iostream>
#include "Money.h"
using namespace std;

class Cash : public Money {
public:
	double Coins;
	double Banknotes;

	Cash(double Coins, double Banknotes) :Money(), Coins{ Coins }, Banknotes{ Banknotes } {}

	double GetBalance() {
		Balance = Coins + Banknotes;
		return Balance;
	}

	virtual void spend(Transaction transaction) {
		if (Balance > transaction.amount) {
			Balance -= transaction.amount;
			Coins = Balance;
			transactions.push_back(transaction);
		}

	}
	virtual void earn(double amount) {
		Balance += amount;
		Coins = Balance;
	}

};