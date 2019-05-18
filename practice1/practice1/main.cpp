#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int location = -1;
int arr[100] = { 0 };

//Push함수
void Push(int input)
{
	location = location + 1;
	arr[location] = input;

}

//Pop함수
void Pop()
{
	int TopNumber = 0;
	//만약, 스택에 정수가 들어있지 않으면 -1을 리턴
	if (location == -1) cout << -1 << endl;

	//정수를 빼고, 그 수를 출력한다
	else {
		TopNumber = arr[location];
		cout << arr[location] << endl;

		arr[location] = -1;
		location = location - 1;
	}
}

//SiZE함수
void Size()
{
	if (location < -1) cout << 0 << endl;
	else cout << location + 1 << endl;
}

//TOP함수
void Top()
{
	if (location == -1) cout << " -1 " << endl;
	else cout << arr[location] << endl;

}

//EMPTY 함수
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
		if (strncmp("push", Sentence, 4) == 0) //만약 push 명령어라면
		{
			//어떻게 하면, push 다음에 나오는 수들 integer로 변환시킬 수 있을까
			//push 123
			charX = strtok(Sentence, " ");
			charX = strtok(NULL, " ");
	
			X = atoi(charX);
			//printf("atoi : %d", X); //push X에 x를 인티저로 뽑음
			Push(X);
		
		} //X값을 어떻게 변환시킬 것이냐가 문제.

		else if (strcmp("pop", Sentence) == 0) Pop();
		else if (strcmp("size", Sentence) == 0) Size();
		else if (strcmp("empty", Sentence) == 0) Empty();
		else Top();

	}
	
	//명령어 수를 입력받는다
	
	//명령어a 갯수만큼 입력을 받는다.



	return 0;
}