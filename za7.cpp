#include <iostream>
using namespace std;

struct pizza
{
	char nazwa_firmy[30];
	int srednica;
	double waga;
};



int main()
{
	pizza analiza;
	cout << "Podaj nazwe firmy: ";
	cin.getline(analiza.nazwa_firmy,30);
	cout << "Podaj srednice pizzy: ";
	cin >> analiza.srednica;
	cout << "Podaj wage pizzy: ";
	cin >> analiza.waga ;
	cout << "Informacje odnosnie Pizzy\n......................";
	cout << "\nNazwa firmy: " << analiza.nazwa_firmy << "\nSrednica pizzy: " << analiza.srednica << "\nWaga pizzy: " << analiza.waga;
}
