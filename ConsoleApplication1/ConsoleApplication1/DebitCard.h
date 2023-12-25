#pragma once
#include "IDebitCard.h"

class DebitCard :public IDebitCard {
protected:
	double DebitBalance;
public:

	double GetBalance() {
		return DebitBalance;
	}

	virtual void spend(Transaction transaction) {
		if (DebitBalance > transaction.amount) {
			DebitBalance -= transaction.amount;
			transactions.push_back(transaction);
		}
	}
	virtual void earn(double amount) {
		DebitBalance += amount;
	}
};