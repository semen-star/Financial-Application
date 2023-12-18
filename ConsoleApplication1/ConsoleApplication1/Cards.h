#pragma once
#include <iostream>
#include "Money.h"
using namespace std;


class CreditCard :public Money {
private:
	double Balance;
public:

	virtual double GetBalance() = 0;
	void spend(/*�������� �����������*/) = 0;
	void earn() = 0;

};
class CreditCardUser : public CreditCard {
public:
	virtual double GetBalance() {

	}

	void spend(/*�������� �����������*/) {

	}
	void earn() {

	}
};

class DebitCard :public Money {
private:
	double Balance;
public:

	virtual double GetBalance() = 0;
	void spend(/*�������� �����������*/) = 0;
	void earn() = 0;
};
class DebitCardUser :public DebitCard {
	virtual double GetBalance() {

	}

	void spend(/*�������� �����������*/) {

	}
	void earn() {

	}
};