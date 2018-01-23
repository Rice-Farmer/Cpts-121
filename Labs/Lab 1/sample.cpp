/**
 * @author: William Rice (william.rice@wsu.edu)
 * @description: This program displays an array of Bank accounts in a proper format
 *
 * compiling instructions: make, and run prog1
 */

#include <string>
#include "displayAccounts.h"
#include "bankAccount.h"

using namespace std;

int main()
{
    BankAccount accounts[] = {{"Smith, Mark", 12323, 2142.45, "January 2, 1998", true},
                              {"Smith, James", 383277, 214.42, "February 2, 2004", false},
                              {"Stone, Andy", 2838994, 5312.35, "October 18, 2008", false},
                              {"Powers, Jason", 23920, 142.95, "January 2, 1997", false},
                              {"Bishop, Matt", 122341, 21042.43, "August 2, 2004", true}
                             };
    displayAccounts(accounts, 5);
}