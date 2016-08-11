#include "Customer.h"

Customer::Customer(string name, int age) :m_strName(name), m_iAge(age)
{
}


Customer::~Customer()
{
}

void Customer::printInfo()const
{
	cout << "ÐÕÃû£º" << m_strName << endl;
	cout << "ÄêÁä£º" << m_iAge << endl;
	string a;
}
