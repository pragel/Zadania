#include <iostream>
using namespace std;

int stopy(int cm);
const double cale(double s);
const int stop = 30;

int main()
{
	cout << "Podaj zwrost w cm: \n";
	int cm;
	cin >> cm;
	double cal = cm % stop;
	cout << "Twoj zwrost to: " << stopy(cm) << " stop i " << cal << " cali";
}

int stopy( int cm)
{
	return cm / stop;
}

