#include <iostream>
using namespace std;

long sek;
long godzina();
long min();
long sekunda();
long dzien();

int main()
{
	cout << "Podaj ilosc sekund: ";
	cin >> sek;
	cout << "To "<< dzien() << " dni " << godzina() << " godzin " <<  min() << " minut " << sekunda() << " sekund " ;
}

long godzina()
{
	return (sek / 3600) % 24;
}
long min()
{ 
	return (sek / 60) % 60;
}
long sekunda()
{
	
	long sekund = sek % 60;
	return sekund;
}
long dzien()
{
	return sek / 86400;
}




