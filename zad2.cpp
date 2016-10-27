#include <iostream>
using namespace std;

double mile(double n);

int main()
{
	cout << "Podaj mile" << endl;
	double n;
	cin >> n;
	double mil = mile(n);
	cout <<  n << " mil" << " to " << mil << " metrow" ;
}

double mile(double n){
	return 1852 * n;
}
