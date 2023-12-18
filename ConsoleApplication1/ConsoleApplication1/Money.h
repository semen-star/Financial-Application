#pragma once
#include <iostream>
using namespace std;


class Money {
public:
    double Balance;

    Money() :Balance{ 0 } {}

    virtual void spend() = 0;
    virtual void earn() = 0;
};