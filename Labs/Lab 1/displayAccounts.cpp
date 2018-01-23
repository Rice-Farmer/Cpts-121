/**
 * This function takes a BankAccount array and outputs it's data in a set format
 * Name   Account Id   Balance   Date Opened   Premium
 */
#include <string>
#include <iostream>
#include <iomanip>
#include "bankAccount.h"

using namespace std;

void displayAccounts(BankAccount accounts[],int size)
{
    int i = 0;
    cout<<"Name              Account ID             Balance  Date Opened         Premium"<<endl;
    for(i = 0; i < size; i++)
    {
        cout<<setw(18)<<left<<accounts[i].name<<setw(10)<<right<<accounts[i].accountId<<setw(20)<<setprecision(7)<<right<<accounts[i].balance<<"  "<<setw(20)<<left<<accounts[i].dateOpened<<setw(6)<<boolalpha<<left<<accounts[i].isPremium<<endl;
    }
    
}
