#include <iostream>
using namespace std;

int mies(int);

int main(){
	cout << "Podaj swoj wiek: ";
	int n;
	cin >> n;
	int wiek = mies(n);
	cout << "Twoj wiek to: " << n << " w miesiacach: " << wiek;
}

int mies(int n){
	return 12 * n;
}
