#pragma once
#include "IDebitCard.h"

class DebitCard :public IDebitCard {
public:
	double DebitBalance;

	double GetBalance() {
		return DebitBalance;
	}

	virtual void spend(/*принимаю транкзакцию*/) {

	}
	virtual void earn(/*принимаю транкзакцию*/) {

	}
};