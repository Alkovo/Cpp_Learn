#include<iostream>

using namespace std;

template<typename T>
void swapFunc(T&a , T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void sortFunc(T arry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int Max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arry[Max] < arry[j])
			{
				Max = j;
			}
		}
		if (Max != i)
		{
			swapFunc(arry[Max], arry[i]);
		}
	}
}


template<typename T>
void printFunc(T arry[] , int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arry[i] << "\t";
	}
	cout << endl;
}

void test_01()
{
	char charArry[] = "badcfe";
	int num = sizeof(charArry) / sizeof(char);
	sortFunc(charArry,num);
	printFunc(charArry, num);
}

void test_02()
{
	int intArry[] = {7,6,5,4,3,2,1};
	int num = sizeof(intArry) / sizeof(int);
	sortFunc(intArry, num);
	printFunc(intArry, num);

int main()
{
	test_01();
	test_02();
	system("pause");
}
