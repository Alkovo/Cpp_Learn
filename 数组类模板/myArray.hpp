#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray
{
public:
	myArray(int num_Capacity)//有参构造，参数：数组容量
	{
		this->array_Capacity = num_Capacity;
		this->array_Size = 0;
		this->array_Address = new T[this->array_Capacity];
		//cout << "数组类有参构造函数调用" << endl;
	}

	~myArray()//析构函数
	{
		if (this->array_Address != NULL)
		{
			delete[] this->array_Address;
			this->array_Address = NULL;
			//cout << "数组类析构函数调用" << endl;
		}
	}

	myArray(const myArray& arr)//拷贝构造
	{
		//cout << "数组类拷贝构造函数调用" << endl;
		this->array_Capacity = arr.array_Capacity;
		this->array_Size = arr.array_Size;
		this->array_Address = new T[arr.array_Capacity];

		for (int i = 0; i < this->array_Size; i++)
		{
			this->array_Address[i] = arr.array_Address[i];
		}
	}

	myArray& operator=(const myArray& arr)//重载赋值"="，同时防止浅拷贝
	{
		//cout << "数组类重载赋值函数调用" << endl;
		if (this->array_Address != NULL)
		{
			delete[] this->array_Address;
			this->array_Address = NULL;
			this->array_Capacity = 0;
			this->array_Size = 0;
		}
		this->array_Capacity = arr.array_Capacity;
		this->array_Size = arr.array_Size;
		this->array_Address = new T[arr.array_Capacity];

		for (int i = 0; i < this->array_Size; i++)
		{
			this->array_Address[i] = arr.array_Address[i];
		}
		return *this;
	}

	void backPush(const T & val)//尾插法
	{
		if (this->array_Capacity == this->array_Size)
		{
			return;
		}
		this->array_Address[this->array_Size] = val;
		this->array_Size++;
	}

	void backPop()//尾删法
	{
		if (this->array_Size == 0) 
		{
			return;
		}
		this->array_Size--;
	}

	T& operator[](int index)//重载[]获取元素值
	{
		return this->array_Address[index];
	}

	int getCapacity()//获取数组容量
	{
		return this->array_Capacity;
	}

	int getSize()//获取数组大小
	{
		return this->array_Size;
	}

private:
	T* array_Address;//地址指针
	int array_Capacity;//数组容量
	int array_Size;//数组大小
};
