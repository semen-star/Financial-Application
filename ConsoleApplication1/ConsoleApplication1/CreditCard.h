#pragma once
#include "ICreditCard.h"

class CreditCard : public ICreditCard {
public:
	virtual double GetBalance() {

	}

	virtual void spend(/*принимаю транкзакцию*/) {

	}
	virtual void earn(/*принимаю транкзакцию*/) {

	}
};