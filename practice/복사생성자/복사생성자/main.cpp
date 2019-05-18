#include <stdio.h>

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num;

	vector<int> vec;

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &num);
		vec.push_back(num);
	}
	
	for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
		printf("%d ", *itr);
		
	
}