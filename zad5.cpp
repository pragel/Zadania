#include <iostream>
using namespace std;

double temp(double n);

int main(){
	cout << "Podaj temp w stopniach celcjusza: ";
	double n;
	cin >> n;
	double fah = temp(n);
	cout << n << " stopnie celcjusza to: " << fah << " to stopnie Farhrenheita";
}

double temp(double n){
	return 1.8 * n + 32;
	
}
