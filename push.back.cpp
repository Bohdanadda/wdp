#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>tab;
	tab.push_back(10);
	cout << tab[0] << endl;
	tab[0] = 8;
	cout << tab[0] << endl;
	tab[0] = tab[0] - 2;
	cout << tab[0] << endl;
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << endl;
	}
}