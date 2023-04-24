#include "checking.h"
#include <iostream>

/*Checking::Checking(const std::string &name, double balance):
Account(name, balance)
{
}
*/

Checking::~Checking()
{
}

void Checking::Withdraw(double amount)
{
    if (this->m_Balance - amount >= 50)
    {
        this->m_Balance -= amount;
        std::cout << "Withdraw: " << amount << std::endl;
    }
    else   
        std::cout << "Invalid Amount" << std::endl; 
}
