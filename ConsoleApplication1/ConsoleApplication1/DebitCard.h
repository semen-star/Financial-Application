#pragma once
#include "IDebitCard.h"

class DebitCard :public IDebitCard {
private:
	double DebitBalance;
public:

	virtual double GetBalance() {
		return DebitBalance;
	}

	virtual void spend(/*�������� �����������*/) {

	}
	virtual void earn(/*�������� �����������*/) {

	}
};