#include "account.h"
#include <iostream>

int Account::s_ANGenerator{1000};
Account::Account(const std::string &name, double balance):
m_Name(name), m_Balance(balance)
{
    m_Accno = ++s_ANGenerator;
}

Account::~Account()
{
}

const std::string Account::GetName()const
{
    return this->m_Name;
}

double Account::GetBalance() const
{
    return this->m_Balance;
}

int Account::GetAccountNo() const
{
    return this->m_Accno;
}

void Account::AccumulateInterest()
{

}

void Account::Withdraw(double amount)
{
    if (amount < this->m_Balance)
    {
        this->m_Balance -= amount;
        std::cout << "Withdraw: " << amount << std::endl;
    }
    else   
        std::cout << "Insufficient Balance" << std::endl;
}

void Account::Deposit(double amount)
{
    this->m_Balance += amount;
    std::cout << "Deposit: " << amount << std::endl;
}

double Account::GetInterestRate() const
{
    return 0.0;
}