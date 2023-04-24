#pragma once
#include <string>

class Account
{
    std::string m_Name;
    int m_Accno;
    static int s_ANGenerator;
protected:
    double m_Balance;
public:
    Account(const std::string &name, double balance);
    virtual ~Account();
    const std::string GetName()const;
    double GetBalance()const;
    int GetAccountNo()const;
    virtual void AccumulateInterest();
    virtual void Withdraw(double amount);
    void Deposit(double amount);
    virtual double GetInterestRate()const;
};