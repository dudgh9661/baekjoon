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
	cout << " Account ¼Ò¸êÀÚ È£Ãâ " << endl;
}

void Account::PrintOfAccount()
{
	cout << "°èÁÂID : " << this->AccountNumber << endl;
	cout << "ÀÌ ¸§ : " << this->Name << endl;
	cout << "ÀÜ ¾× : " << this->money << endl;

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

