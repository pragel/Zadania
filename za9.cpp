#include <iostream>
using namespace std;


struct batonik
{
	string marka;
	float waga;
	int kalorie;
};

int main()
{
	batonik *snack = new batonik[3];
	snack[0].marka = "snik"; 
	snack[0].waga = 3.4;
	snack[0].kalorie = 370;
	snack[1].marka = "twist"; 
	snack[1].waga = 3.9;
	snack[1].kalorie = 400;	
	snack[2].marka = "mars"; 
	snack[2].waga = 2.5;
	snack[2].kalorie = 350;
		cout << "Marka: " << snack[0].marka <<"\nWaga: " << snack[0].waga << "\nKalorie: " << snack[0].kalorie << endl;
		cout << "\nMarka: " << snack[1].marka <<"\nWaga: " << snack[1].waga << "\nKalorie: " << snack[1].kalorie << endl;
		cout << "\nMarka: " << snack[2].marka <<"\nWaga: " << snack[2].waga << "\nKalorie: " << snack[2].kalorie;
}
