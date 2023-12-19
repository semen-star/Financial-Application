#pragma once
#include "Money.h"

class IDebitCard :public Money {
protected:
	double DebitBalance;
};