#include <iostream>
#include <string>
using namespace std;

struct pizza
{ 
	string nazwa_firmy;
	float srednica;
	float waga;
};



int main()
{
	pizza *analiza = new pizza;
	cout << "Podaj srednice pizzy: ";
	(cin >> analiza->srednica).get();
	cout << "Podaj nazwe firmy: ";
	getline(cin, analiza->nazwa_firmy);
	cout << "Podaj wage pizzy: ";
	cin >> analiza->waga ;
	cout << "Informacje odnosnie Pizzy\n......................";
	cout << "\nNazwa firmy: " << analiza->nazwa_firmy << "\nSrednica pizzy: " << analiza->srednica << "\nWaga pizzy: " << analiza->waga;
	delete analiza;
	return 0;
}
