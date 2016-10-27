#include <iostream>
using namespace std;

double rok(double);

int main(){
	cout << "Podaj liczbe lat swietlnych: ";
	double n;
	cin >> n;
	double sw = rok(n);
	cout << n << " lat swietlnych = " << sw << " jednostek astronomicznych."; 
}

double rok(double n){
	return n * 63240;
}
