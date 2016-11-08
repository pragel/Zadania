#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int rozmiar = 15;
	char imie[rozmiar];
	char nazwisko[rozmiar];
	cout << "Podaj swoje imie: ";
	cin >> imie;
	cout << "Podaj swoje nazwisko: ";
	cin >> nazwisko;
	 
	cout << "Oto informacje zestawione w jeden napis: " << nazwisko << ", " << imie <<".\n";
}
