#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int location = -1;
int arr[100] = { 0 };

//Push�Լ�
void Push(int input)
{
	location = location + 1;
	arr[location] = input;

}

//Pop�Լ�
void Pop()
{
	int TopNumber = 0;
	//����, ���ÿ� ������ ������� ������ -1�� ����
	if (location == -1) cout << -1 << endl;

	//������ ����, �� ���� ����Ѵ�
	else {
		TopNumber = arr[location];
		cout << arr[location] << endl;

		arr[location] = -1;
		location = location - 1;
	}
}

//SiZE�Լ�
void Size()
{
	if (location < -1) cout << 0 << endl;
	else cout << location + 1 << endl;
}

//TOP�Լ�
void Top()
{
	if (location == -1) cout << " -1 " << endl;
	else cout << arr[location] << endl;

}

//EMPTY �Լ�
void Empty()
{
	if (location == -1)
		cout << 1 << endl;
	else cout << 0 << endl;

}

int main()
{
	int Num = 0;
	
	char *ptr = NULL;
	char *charX = NULL;
	int X;
	scanf("%d", &Num);
	if (Num < 1 || Num > 10000) return 0;
	for (int i = 0; i < Num; i++)
	{
		char *Sentence = (char*)malloc( sizeof(char) * 11);
		//printf(" ddd ");
		getchar();
		scanf("%[^\n]s", Sentence);
		if (strncmp("push", Sentence, 4) == 0) //���� push ��ɾ���
		{
			//��� �ϸ�, push ������ ������ ���� integer�� ��ȯ��ų �� ������
			//push 123
			charX = strtok(Sentence, " ");
			charX = strtok(NULL, " ");
	
			X = atoi(charX);
			//printf("atoi : %d", X); //push X�� x�� ��Ƽ���� ����
			Push(X);
		
		} //X���� ��� ��ȯ��ų ���̳İ� ����.

		else if (strcmp("pop", Sentence) == 0) Pop();
		else if (strcmp("size", Sentence) == 0) Size();
		else if (strcmp("empty", Sentence) == 0) Empty();
		else Top();

	}
	
	//��ɾ� ���� �Է¹޴´�
	
	//��ɾ�a ������ŭ �Է��� �޴´�.



	return 0;
}