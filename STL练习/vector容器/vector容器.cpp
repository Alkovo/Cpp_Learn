#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void test01(vector<int>::iterator begin, vector<int>::iterator end)
{
	while (begin != end)
	{
		cout << *begin << "\t";
		begin++;
	}
	cout << endl;
}

void test02(vector<int>::iterator begin, vector<int>::iterator end)
{
	for ( begin; begin != end; begin++)
	{
		cout << *begin << "\t";
	}
	cout << endl;
}

void printElement(int elem)
{
	cout << elem << "\t";
}

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator itBegin = v.begin();//.begin起始迭代器，指向容器中第一个元素
	vector<int>::iterator itEnd = v.end();//.end结束迭代器，指向容器中最后一个元素的下一个位置

	test01(itBegin,itEnd);
	test02(itBegin, itEnd);
	for_each(v.begin(), v.end(), printElement);
	cout << endl;

	system("pause");
	return 0;
}