#include <iostream>
#include <string>
using namespace std;

int main()
{
	string imie;
	string nazwisko;
	cout << "Podaj swoje imie: ";
	cin >> imie;
	cout << "Podaj swoje nazwisko: ";
	cin >> nazwisko;
	 
	cout << "Oto informacje zestawione w jeden napis: " << nazwisko << ", " << imie <<".\n";
}
