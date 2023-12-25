#pragma once
#include "Wallet.h"
#include "Transaction.h"
#include <fstream>

class Report 
{
public:

	static void RegularReport(Wallet wallet) {
		cout << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			cout << transaction.category << endl;
			cout << transaction.amount << endl;
			cout << transaction.date.day << ".";
			cout << transaction.date.month << ".";
			cout << transaction.date.year << endl;
		}

		cout << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			cout << transaction.category << endl;
			cout << transaction.amount << endl;
			cout << transaction.date.day << ".";
			cout << transaction.date.month << ".";
			cout << transaction.date.year << endl;
		}

		cout << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			cout << transaction.category << endl;
			cout << transaction.amount << endl;
			cout << transaction.date.day << ".";
			cout << transaction.date.month << ".";
			cout << transaction.date.year << endl;
		}


	}

	static void CategoryReport(Wallet wallet, Categories category) {
		cout << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			if (transaction.category == category) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}

		cout << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			if (transaction.category == category) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}

		cout << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			if (transaction.category == category) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}
	}

	static void AmounthReport(Wallet wallet, double summ1, double summ2) {
		cout << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			if (transaction.amount >= summ1 && transaction.amount <= summ2) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}

		cout << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			if (transaction.amount >= summ1 && transaction.amount <= summ2) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}

		cout << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			if (transaction.amount >= summ1 && transaction.amount <= summ2) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}
	}

	static void DateReport(Wallet wallet, Date date) {
		cout << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			if (transaction.date.day == date.day && transaction.date.month == date.month && transaction.date.year == date.year) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}

		cout << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			if (transaction.date.day == date.day && transaction.date.month == date.month && transaction.date.year == date.year) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}

		cout << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			if (transaction.date.day == date.day && transaction.date.month == date.month && transaction.date.year == date.year) {
				cout << transaction.category << endl;
				cout << transaction.amount << endl;
				cout << transaction.date.day << endl;
				cout << transaction.date.month << endl;
				cout << transaction.date.year << endl;
			}
		}
	}



	static void RegularReportFile(Wallet wallet) {
		ofstream file("Report.txt");
		file << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			file << transaction.category << endl;
			file << transaction.amount << endl;
			file << transaction.date.day << ".";
			file << transaction.date.month << ".";
			file << transaction.date.year << endl;
		}

		file << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			file << transaction.category << endl;
			file << transaction.amount << endl;
			file << transaction.date.day << ".";
			file << transaction.date.month << ".";
			file << transaction.date.year << endl;
		}

		file << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			file << transaction.category << endl;
			file << transaction.amount << endl;
			file << transaction.date.day << ".";
			file << transaction.date.month << ".";
			file << transaction.date.year << endl;
		}

		file.close();
	}

	static void CategoryReportFile(Wallet wallet, Categories category) {
		ofstream file("Report.txt");
		file << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			if (transaction.category == category) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}

		file << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			if (transaction.category == category) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}

		file << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			if (transaction.category == category) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}
		file.close();
	}

	static void AmounthReportFile(Wallet wallet, double summ1, double summ2) {
		ofstream file("Report.txt");
		file << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			if (transaction.amount >= summ1 && transaction.amount <= summ2) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}

		file << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			if (transaction.amount >= summ1 && transaction.amount <= summ2) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}

		file << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			if (transaction.amount >= summ1 && transaction.amount <= summ2) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}
		file.close();
	}

	static void DateReportFile(Wallet wallet, Date date) {
		ofstream file("Report.txt");
		file << "Cash:" << endl;
		for (const Transaction& transaction : wallet.cash->transactions)
		{
			if (transaction.date.day == date.day && transaction.date.month == date.month && transaction.date.year == date.year) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}

		file << "Debit:" << endl;
		for (const Transaction& transaction : wallet.debit->transactions)
		{
			if (transaction.date.day == date.day && transaction.date.month == date.month && transaction.date.year == date.year) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}

		file << "Credit:" << endl;
		for (const Transaction& transaction : wallet.credit->transactions)
		{
			if (transaction.date.day == date.day && transaction.date.month == date.month && transaction.date.year == date.year) {
				file << transaction.category << endl;
				file << transaction.amount << endl;
				file << transaction.date.day << endl;
				file << transaction.date.month << endl;
				file << transaction.date.year << endl;
			}
		}
		file.close();
	}

};