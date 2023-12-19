#pragma once
#include <iostream>
using namespace std;


class Money {
public:
    double Balance;

    Money() :Balance{ 0 } {}

    virtual void spend(/*принимаю транкзакцию*/) = 0;
    virtual void earn(/*принимаю транкзакцию*/) = 0;

    virtual double GetBalance() = 0;
};