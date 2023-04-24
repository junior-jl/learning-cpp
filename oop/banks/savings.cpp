#include "savings.h"

Savings::Savings(const std::string &name, double balance, double rate):Account(name, balance), m_Rate(rate)
{

}

Savings::~Savings()
{
}

double Savings::GetInterestRate() const
{
    return m_Rate;
}

void Savings::AccumulateInterest()
{
    m_Balance += (m_Balance * m_Rate);
}
