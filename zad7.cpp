#include <iostream>
using namespace std;

void godz(int);
void min(int);

int main(){
	int g;
	cin >> g;
	int m;
	cin >> m;
	godz(g);
	min(m);
	cout << "Czas: " << g << ":" << m; 
}

void godz(int g){
	cout << "Podaj liczbe godzin: " << g << endl; 
}

void min(int m){
	cout << "Podaj liczbe minut: " << m << endl;
}
