#include<iostream>
using namespace std;
#include"myArray.hpp"
#include<string>

class Demo
{
public:
	Demo() {};
	Demo(string name, int num)
	{
		this->name = name;
		this->num = num;
	};

	string name;
	int num;
};

void arrayIntPrint(myArray <int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}
void arrayDemoPrint(myArray <Demo>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "name " << arr[i].name << " num " << arr[i].num << endl;
	}
	cout << endl;
}

void test01()
{
	myArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.backPush(i);
	}
	cout << "arr1数组输出为：";
	arrayIntPrint(arr1);
	myArray <int>arr2(arr1);
	cout << "arr2数组输出为：";
	arrayIntPrint(arr2);
	arr2.backPop();
	cout << "arr2数组修改后输出为：";
	arrayIntPrint(arr2);
	//myArray <int>arr3(100);
	//arr3 = arr1;
}

void test02()
{
	myArray<Demo> arr(10);
	Demo D1("A", 1);
	Demo D2("B", 2);
	Demo D3("C", 3);
	Demo D4("D", 4);
	Demo D5("E", 5);
	Demo D6("F", 6);
	Demo D7("G", 7);

	arr.backPush(D1);
	arr.backPush(D2);
	arr.backPush(D3);
	arr.backPush(D4);
	arr.backPush(D5);
	arr.backPush(D6);
	arr.backPush(D7);

	cout << "输出Demo类数组：" << endl;
	arrayDemoPrint(arr);
	cout << "Demo类数组容量为：" << arr.getCapacity() << endl;
	cout << "Demo类数组大小为：" << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
}