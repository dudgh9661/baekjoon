#pragma once
#include <iostream>
#include <cstring>
class Account
{
private:
	int AccountNumber;
	char *Name;
	int money;

public:
	Account(int AccountNumber, char *Name, int money); //������ 
	~Account();
	void PrintOfAccount();
	int Insert(int Num);
	int Withraw(int Num);
	int GetAccNum();


};