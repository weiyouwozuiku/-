#include "Customer.h"

Customer::Customer(string name, int age) :m_strName(name), m_iAge(age)
{
}


Customer::~Customer()
{
}

void Customer::printInfo()const
{
	cout << "������" << m_strName << endl;
	cout << "���䣺" << m_iAge << endl;
	string a;
}
