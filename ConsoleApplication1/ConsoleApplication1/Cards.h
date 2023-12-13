#pragma once
#include <iostream>
#include "Money.h"
using namespace std;


class CreditCard :public Money {
public:


};
class CreditCardUser : public CreditCard {
public:

};

class DebitCard :public Money {
public:

};
class DebitCardUser :public DebitCard {

};