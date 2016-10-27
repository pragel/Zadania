#include <iostream>	
using namespace std;

int main()
{
	cout << "Podaj liczbe populacji swiata: ";
	double populacja;
	cin >> populacja;
	cout << "Podaj liczbe populacji Polski: ";
	double polska;
	cin >> polska;
	double procent;
	procent = ( 100 * polska ) / populacja;
	cout << "Populacja Polski stanowi " << procent << "% populacji swiata\n KONIEC";

}

