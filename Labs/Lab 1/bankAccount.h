/**
 * This file helps programs use the bankAccount struct which holds information of a banck account like:
 * Name, account id, date opened, and if the account is premium
**/
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

using namespace std;

typedef struct
{
    string name;
    int accountId;
    double balance;
    string dateOpened;
    bool isPremium;
}BankAccount;


#endif