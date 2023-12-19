#pragma once
#include "Money.h"

class IDebitCard :public Money {
private:
	double DebitBalance;
};