#pragma once
#include "account.h"

class Checking: public Account
{

public:
    using Account::Account;
    //Checking(const std::string &name, double balance);
    ~Checking();
    void Withdraw(double amount) override;
};