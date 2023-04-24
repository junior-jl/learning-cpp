#include <iostream>
#include "account.h"
#include "savings.h"
#include "checking.h"
#include "transaction.h"

int main()
{
    Savings acc("Bob", 100, 0.5);
    Transact(&acc);
    return 0;
}