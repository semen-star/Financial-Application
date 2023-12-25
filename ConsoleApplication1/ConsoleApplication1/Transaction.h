#pragma once
#include <iostream>

using namespace std;

enum Categories 
{
	children = 0,
	taking_care_of_yourself,
	health_and_fitness,
	Cafes_and_restaurants,
	The_car,
	Education,
	Recreation_and_entertainment,
	Payments_and_commissions,
	Gifts,
	Purchases,
	products,
	transit,
	other
};

struct Date {
	int day;
	int month;
	int year;
};

struct Transaction 
{
	Categories category;
	double amount;
	Date date;

	friend istream& operator>>(istream& in, Transaction& transaction) 
	{
		int cat;
		cout << "Enter category:" << endl;
		cout << "1-children\n2-taking_care_of_yourself\n3-health_and_fitness\n4Cafes_and_restaurants\n5-The_car\n6-Education\n7-Recreation_and_entertainment\n8-Payments_and_commissions\n9-Gifts\n10-Purchases\n11-products\n12-transit\n13-other" << endl;
		cout << "Enter your choice(number):";
		in >> cat;
		transaction.category = (Categories)cat;
		cout << "Enter amount:" << endl;
		in >> transaction.amount;
		cout << "Enter date dd mm yyyy:" << endl;
		in >> transaction.date.day;
		in >> transaction.date.month;
		in >> transaction.date.year;
		return in;
	}

};