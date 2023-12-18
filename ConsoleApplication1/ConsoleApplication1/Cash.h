#pragma once
#include <iostream>
#include "Money.h"
using namespace std;

class Cash : public Money {
public:
	double Coins;
	double Banknotes;

	Cash(double Coins, double Banknotes) :Money(), Coins{ Coins }, Banknotes{ Banknotes } {}

	virtual double GetBalance() {
		Balance = Coins + Banknotes;
		return Balance;
	}

	void spend() {

	}
	void earn() {

	}

};