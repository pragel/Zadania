#include <iostream>
#include <array>
using namespace std;

int main()
{
	array < double, 3> bieg;
	cout << "Podaj trzy wynik sprintu na 100m(w sekundach):\n";
	cin >> bieg[0];
	cin >> bieg[1];
	cin >> bieg[2];
	cout << "Twoje wynik na 100m to:\n1.";
	cout << bieg[0] << "s\n2.";
	cout << bieg[1] << "s\n3.";
	cout << bieg[2] << "s";
	cout << "\nTwoj sredni czas sprintu wynosi: " << (bieg[0]+bieg[1]+bieg[2])/3 << "s";  
}
