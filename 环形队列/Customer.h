#pragma once
#ifndef COUTOMER_H
#define COUTOMER_H
#include<iostream>
#include<string>
using namespace std;
class Customer
{
public:
	Customer(string name = "", int age = 0);
	void printInfo()const;
	~Customer();
private:
	string m_strName;
	int m_iAge;
};

#endif // !1
