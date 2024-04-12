#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray
{
public:
	myArray(int num_Capacity)//�вι��죬��������������
	{
		this->array_Capacity = num_Capacity;
		this->array_Size = 0;
		this->array_Address = new T[this->array_Capacity];
		//cout << "�������вι��캯������" << endl;
	}

	~myArray()//��������
	{
		if (this->array_Address != NULL)
		{
			delete[] this->array_Address;
			this->array_Address = NULL;
			//cout << "������������������" << endl;
		}
	}

	myArray(const myArray& arr)//��������
	{
		//cout << "�����࿽�����캯������" << endl;
		this->array_Capacity = arr.array_Capacity;
		this->array_Size = arr.array_Size;
		this->array_Address = new T[arr.array_Capacity];

		for (int i = 0; i < this->array_Size; i++)
		{
			this->array_Address[i] = arr.array_Address[i];
		}
	}

	myArray& operator=(const myArray& arr)//���ظ�ֵ"="��ͬʱ��ֹǳ����
	{
		//cout << "���������ظ�ֵ��������" << endl;
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

	void backPush(const T & val)//β�巨
	{
		if (this->array_Capacity == this->array_Size)
		{
			return;
		}
		this->array_Address[this->array_Size] = val;
		this->array_Size++;
	}

	void backPop()//βɾ��
	{
		if (this->array_Size == 0) 
		{
			return;
		}
		this->array_Size--;
	}

	T& operator[](int index)//����[]��ȡԪ��ֵ
	{
		return this->array_Address[index];
	}

	int getCapacity()//��ȡ��������
	{
		return this->array_Capacity;
	}

	int getSize()//��ȡ�����С
	{
		return this->array_Size;
	}

private:
	T* array_Address;//��ַָ��
	int array_Capacity;//��������
	int array_Size;//�����С
};
