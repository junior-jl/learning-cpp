#pragma once
#include "account.h"
class Savings : 
public Account
{
    double m_Rate;
public:
    Savings(const std::string &name, double balance, double rate);
    ~Savings();
    double GetInterestRate()const override;
    void AccumulateInterest() override;
};