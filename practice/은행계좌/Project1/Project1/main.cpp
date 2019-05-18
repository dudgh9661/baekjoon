#include <iostream>

#include "Account.h"

using namespace std;

int main(void)
{
	Account *Acc[10];
	int sel;
	int AccNum = 0;

	
	while (1)
	{
		cout << "1. ���°��� " << endl;
		cout << "2. �� �� " << endl;
		cout << "3. �� �� " << endl;
		cout << "4. �������� ��ü ��� " << endl;
		cout << "5. ���� " << endl;

		cout << " ���� : "; cin >> sel;
		if (sel == 5) return 0;

		switch (sel)
		{
		case 1:
			int AccountNumber;
			char Name[20];
			int money;

			cout << "���� ID : "; cin >> AccountNumber;
			cout << "�� �� : ";  cin >> Name;

			cout << "�Աݾ� : "; cin >> money;
			Acc[AccNum++] = new Account(AccountNumber, Name, money);

			break;

		case 2:
			int AccountNumber2;
			int money2;
			cout << "���� ID : "; cin >> AccountNumber2;
			cout << "�Աݾ� : ";  cin >> money2;

			for (int i = 0; i < AccNum; i++)
			{
				if (Acc[i]->GetAccNum() == AccountNumber2) Acc[i]->Insert(money2);
			}

			break;
		case 3: //���
			int AccountNumber3;
			int money3;
			cout << "���� ID : "; cin >> AccountNumber3;
			cout << "��ݾ� : ";  cin >> money3;

			for (int i = 0; i < AccNum; i++)
			{
				if (Acc[i]->GetAccNum() == AccountNumber3) Acc[i]->Withraw(money3);
			}

			break;

		case 4: //�����������
			for (int j = 0; j < AccNum; j++)
				Acc[j]->PrintOfAccount();
			break;

		}
	}

	return 0;
}