#include<iostream>
#include<vector>

using namespace std;

void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << '.';
	}
	cout << endl;
}
int max(vector<int>tab)
{
	int wynik = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] > wynik)
		{
			wynik = tab[i];
		}
	}
	return wynik;
}
bool czyNalezy(vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}
	return false;
}
bool czyZawiera(vector<int>tab1, vector<int>tab2)
{
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!czyNalezy(tab1, tab2[i]))
		{
			return false;
		}
	}
	return true;
}
vector<int>unikalnosc(vector<int>tab)
{
	vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czyNalezy(wynik, tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
int suma(vector<int>tab)
{
	int wynik = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		wynik = wynik + tab[i];
	}
	return wynik;
}
int avg(vector<int>tab)
{
	double wynik = suma(tab);
	return wynik / tab.size();
}
vector<int>podzielna(vector<int>tab, int dzielnik, int reszta = 0)
{
	vector<int>wynik ;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % dzielnik == reszta)
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
int main()
{
	vector<int>tab1 = {1,4,3,6,5,3,2,7,9,8};
	vector<int>tab2 = { 6,3,5,7,2 };
	vector<int>tab3 = {4,6,5,3,5,2};
	vector<int>tab4 = { 5,7,8,3,2,5 };
	vector<int>tab = { 8,7,1,2,2,7,8,7,2 };
	int element = 3;

	cout << max(tab1) << endl;
	cout << czyNalezy(tab1, element) << endl;
	cout << czyZawiera(tab1, tab2) << endl;
	vector<int>x = unikalnosc(tab3);
	wypisz(x);
	cout << suma(tab3) << endl;
	cout << avg(tab3) << endl;
	int dzielnik;
	cin >> dzielnik;
	vector<int>y = podzielna(tab4,dzielnik);
	wypisz(y);

}
/*
1.prsszygotowac przyklad
2.sprawdzic czy przyklad jest kompletny
3.sformalizowac parametry (ile jest parametrow i jaki jest typ)
4.naglowek funkcji
5.cialo funkcji
6.jak nie wies co pisac wroc do przykladu 
*/