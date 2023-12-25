#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Money.h"
#include "Cash.h"
#include "CreditCard.h"
#include "DebitCard.h"
#include "User.h"
#include "Wallet.h"
#include "Report.h"
#include "Transaction.h"

using namespace std;

void saveUser(User& user, string path)
{
    ofstream file(path);
    if (!file.good()) return;

    file << user.GetName() << endl;
    file << user.GetSurname() << endl;
    file << user.GetPassportNum() << endl;
    /*file << если есть кошелёк, записать 1, если нет 0 */
    if (user.wallet->credit == NULL){
        file << 1 << endl;
        file << user.GetBalance()<<endl; 
        /*file << получить баланс кредитки*/
        /*file << получить баланс дебетовой*/
    }
    else {
        file << 0;
    }
    file.close();
}
//void loadUser(User& user, string path)
//{
//    ifstream file(path);
//    if (!file.good()) return;
//
//    file >> user.Name;
//    file >> user.Surname;
//    file >> user.PassportNum;
//    int wallet; 
//    file >> wallet;
//    if (wallet == 1) {
//        file >> user.Balance;
//        /*file << записать баланс кредитки*/
//        /*file << записать баланс дебетовой*/
//    }
//    
//
//    file.close();
//}


int MainMenu(int& choise) {

    cout << endl;
    cout << "\t1-Показать данные пользователя" << endl;
    cout << "\t2-Сменить данные пользователя" << endl;
    cout << "\t3-Записать статью расходов" << endl;
    cout << "\t4-Записать статью доходов" << endl;
    cout << "\t5-Показать баланс/состояние доходов\\расходов" << endl;
    cout << "\t6-Выйти из программы" << endl;


    cout << "\n\nВведите цифру:"; cin >> choise;
    return  choise;
}
void DoActions(User& user, int choise) {
    if (choise == 1) {
        user.OutputInfo();
        cin.get();
    }
    else if (choise == 2) {
        user.SetInfo();
        saveUser(user, "UserData.txt");
        cin.get();
    }
    else if (choise == 3) {
        Transaction transaction;
        cin >> transaction;
        cout << "Choose: Cash - 0/ Debit - 1/ Credit - 2\n";
        int num{};
        cin >> num;
        switch (num)
        {
        case 0:
            user.wallet->cash->spend(transaction);
            break;
        case 1:
            user.wallet->debit->spend(transaction);
            break;
        case 2:
            user.wallet->credit->spend(transaction);
            break;
        default:
            cout << "enter it correctly";
            break;
        }
    }
    else if (choise == 4) {
        double amounth;
        cout << "Введите сумму:";
        cin >> amounth;
        cout << "Choose: \n Cash - 0\n Debit - 1\n Credit - 2\n";
        cout << "В какой кошелёк положить ваш доход:";
        int num{};
        cin >> num;
        switch (num)
        {
        case 0:
            user.wallet->cash->earn(amounth);
            break;
        case 1:
            user.wallet->debit->earn(amounth);
            break;
        case 2:
            user.wallet->credit->earn(amounth);
            break;
        default:
            cout << "enter it correctly";
            break;
        }
    }
    else if (choise == 5) {
        /*
        cout << "YOUR TOTAL BALANCE:" << user.GetBalance()<<endl;
        cout << "\n\n\n";
        cout << "Cash balance:" << user.wallet->cash->GetBalance() << endl;
        cout << "Credit card balance:" << user.wallet->credit->GetBalance() << endl;
        cout << "Debit card balance:" << user.wallet->debit->GetBalance() << endl;
        */

        int choose1, choose2;
        cout << "Sorting by: \n1) All transactions \n2) in between by amount \n3)on a certain day \n4) by a certain category\n\nChoose:";
        cin >> choose1;
        cout << "Do you want to export to a file(1) or look at the screen(2):";
        cin >> choose2;
        if (choose1 == 1 && choose2 == 2) 
            Report::RegularReport(*(user.wallet));
        if (choose1 == 1 && choose2 == 1)
            Report::RegularReportFile(*(user.wallet));

        if (choose1 == 2 && choose2 == 2) {
            double summ1, summ2;
            cout << "Введите значение от:";
            cin >> summ1;
            cout << "Введите значение до:";
            cin >> summ2;
            Report::AmounthReport(*(user.wallet),summ1,summ2);
        }
        if (choose1 == 2 && choose2 == 1) {
            double summ1, summ2;
            cout << "Введите значение от:";
            cin >> summ1;
            cout << "Введите значение до:";
            cin >> summ2;
            Report::AmounthReportFile(*(user.wallet), summ1, summ2);
        }  

        if (choose1 == 3 && choose2 == 2) {
            Date date;
            cout << "Введите дату в формате dd mm yyyy";
            cin >> date.day;
            cin >> date.month;
            cin >> date.year;
            Report::DateReport(*(user.wallet),date);
        }
        if (choose1 == 3 && choose2 == 1) {
            Date date;
            cout << "Введите дату в формате dd mm yyyy";
            cin >> date.day;
            cin >> date.month;
            cin >> date.year;
            Report::DateReportFile(*(user.wallet),date);
        }
            
        if (choose1 == 4 && choose2 == 2) {
            int cat;
            Categories category;
            cout << "Введите категорию\n1 - children\n2 - taking_care_of_yourself\n3 - health_and_fitness\n4Cafes_and_restaurants\n5 - The_car\n6 - Education\n7 - Recreation_and_entertainment\n8 - Payments_and_commissions\n9 - Gifts\n10 - Purchases\n11 - products\n12 - transit\n13 - other\nВвод:";
            cin >> cat;
            category = (Categories)cat;
            Report::CategoryReport(*(user.wallet),category);
        }
            
        if (choose1 == 4 && choose2 == 1) {
            int cat;
            Categories category;
            cout << "Введите категорию\n1 - children\n2 - taking_care_of_yourself\n3 - health_and_fitness\n4Cafes_and_restaurants\n5 - The_car\n6 - Education\n7 - Recreation_and_entertainment\n8 - Payments_and_commissions\n9 - Gifts\n10 - Purchases\n11 - products\n12 - transit\n13 - other\nВвод:";
            cin >> cat;
            category = (Categories)cat;
            Report::CategoryReportFile(*(user.wallet),category);
        }
    }
}

bool is_file_exist(string fileName)
{
    ifstream infile(fileName);
    return infile.good();
} 
