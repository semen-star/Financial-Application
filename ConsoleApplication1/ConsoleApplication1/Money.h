#pragma once
#include <iostream>
using namespace std;


class Money {
protected:
    float balance;

    Money() :balance{ 0 } {}

    virtual void spend() = 0;
    virtual void earn() = 0;
};