#pragma once
#include "ICreditCard.h"

class CreditCard : public ICreditCard {
protected:
	double CreditBalance;
public:
	virtual double GetBalance() {
		return CreditBalance;
	}

	virtual void spend(Transaction transaction) {
		if (CreditBalance > transaction.amount) {
			CreditBalance -= transaction.amount;
			transactions.push_back(transaction);
		}
	}

	virtual void earn(double amount) {
		CreditBalance += amount;
	}
};