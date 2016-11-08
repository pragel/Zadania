#include <iostream>
using namespace std;

int main()
{
	const int rozmiar = 20;
	char name[rozmiar];
	char nazwisko[rozmiar];
	cout << "Podaj swoje imie: ";
	cin.getline(name, rozmiar); 
	cout << "Podaj swoje nazwisko: ";
	cin.getline(nazwisko, rozmiar);
	cout << "Na jaka ocene zaslugujesz: ";
	int ocena;
	cin >> ocena;
	cout << "Ile masz lat: ";
	int wiek;
	cin >> wiek;
	cout << "Nazwisko: " << nazwisko << " " << name << endl;
	ocena = ocena - 1;
	cout << "Ocena: " << ocena << endl;
	cout << "Wiek: " << wiek;
	
	return 0;
}
