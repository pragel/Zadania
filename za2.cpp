#include <iostream>
using namespace std;

int main()
{
	string imie;
	string deser;
	cout << "Jak sie nazywasz? ";
	getline(cin, imie);
	cout << "Podaj swoj ulubiony deser: ";
	getline(cin, deser);
	cout << "Mam dla Ciebie " << deser;
	cout << ", " << imie << ".\n";
}
