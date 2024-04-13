#include<iostream>
#include<string>
#include<vector>

using namespace std;

void test01()
{
	vector<vector<int>> V;

	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+11);
		v3.push_back(i+21);
		v4.push_back(i+31);
	}

	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);
	
	for (vector<vector<int>>::iterator i = V.begin();i != V.end();i++)
	{
		for(vector<int>::iterator j = (*i).begin(); j != (*i).end() ;j++)
		{
			cout  << *j << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

int main() 
{
	test01();
	system("pause");
	return 0;
}