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
		cout << "1. 계좌개설 " << endl;
		cout << "2. 입 금 " << endl;
		cout << "3. 출 금 " << endl;
		cout << "4. 계좌정보 전체 출력 " << endl;
		cout << "5. 종료 " << endl;

		cout << " 선택 : "; cin >> sel;
		if (sel == 5) return 0;

		switch (sel)
		{
		case 1:
			int AccountNumber;
			char Name[20];
			int money;

			cout << "계좌 ID : "; cin >> AccountNumber;
			cout << "이 름 : ";  cin >> Name;

			cout << "입금액 : "; cin >> money;
			Acc[AccNum++] = new Account(AccountNumber, Name, money);

			break;

		case 2:
			int AccountNumber2;
			int money2;
			cout << "계좌 ID : "; cin >> AccountNumber2;
			cout << "입금액 : ";  cin >> money2;

			for (int i = 0; i < AccNum; i++)
			{
				if (Acc[i]->GetAccNum() == AccountNumber2) Acc[i]->Insert(money2);
			}

			break;
		case 3: //출금
			int AccountNumber3;
			int money3;
			cout << "계좌 ID : "; cin >> AccountNumber3;
			cout << "출금액 : ";  cin >> money3;

			for (int i = 0; i < AccNum; i++)
			{
				if (Acc[i]->GetAccNum() == AccountNumber3) Acc[i]->Withraw(money3);
			}

			break;

		case 4: //계좌정보출력
			for (int j = 0; j < AccNum; j++)
				Acc[j]->PrintOfAccount();
			break;

		}
	}

	return 0;
}