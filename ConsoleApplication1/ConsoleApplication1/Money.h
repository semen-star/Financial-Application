#pragma once
#include <iostream>
using namespace std;


class Money {
public:
    double Balance;
    Money(double balance) :Balance{ balance } {}
    Money() :Balance{ 0 } {}

    virtual void spend(/*�������� �����������*/) = 0;
    virtual void earn(/*�������� �����������*/) = 0;

    virtual double GetBalance() = 0;
};