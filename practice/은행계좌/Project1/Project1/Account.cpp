#define _CRT_SECURE_NO_WARNINGS

#include "Account.h"
#include <iostream> 

using namespace std;

Account::Account(int AccountNumber, char *Name, int money) : AccountNumber(AccountNumber), money(money)
{
	this->AccountNumber = AccountNumber;
	this->Name = new char[strlen(Name)+1];
	strcpy(this->Name, Name);

	this->money = money;

}

Account::~Account()
{
	delete []Name;
	cout << " Account �Ҹ��� ȣ�� " << endl;
}

void Account::PrintOfAccount()
{
	cout << "����ID : " << this->AccountNumber << endl;
	cout << "�� �� : " << this->Name << endl;
	cout << "�� �� : " << this->money << endl;

}

int Account::Insert(int Num)
{ 
	this->money = this->money + Num;
	
	return this->money;
}
int Account::Withraw(int Num)
{
	this->money = this->money - Num;
	return this->money;
}

int Account::GetAccNum()
{
	return this->AccountNumber;
}

