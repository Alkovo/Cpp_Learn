#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Demo
{
public:
	Demo(string name,int id)
	{
		this->Name = name;
		this->Id = id;
	}

	string Name;
	int Id;

};

void test01(vector<Demo> &v)
{
	Demo D1("AAA", 1);
	Demo D2("BBB", 2);
	Demo D3("CCC", 3);
	Demo D4("DDD", 4);
	Demo D5("EEE", 5);

	v.push_back(D1);
	v.push_back(D2);
	v.push_back(D3);
	v.push_back(D4);
	v.push_back(D5);

	for (vector<Demo>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name: " << (*it).Name << " id: " << (*it).Id << endl;
	}
}

void test02(vector<Demo *>& v)
{
	Demo D1("AAA", 1);
	Demo D2("BBB", 2);
	Demo D3("CCC", 3);
	Demo D4("DDD", 4);
	Demo D5("EEE", 5);

	v.push_back(&D1);
	v.push_back(&D2);
	v.push_back(&D3);
	v.push_back(&D4);
	v.push_back(&D5);

	for (vector<Demo*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name: " << (*it)->Name << " id: " << (*it)->Id << endl;
	}
}

int main() 
{
	//vector<Demo> V1;
	//test01(V1);

	vector<Demo*> V2;
	test02(V2);

	system("pause");
	return 0;
}