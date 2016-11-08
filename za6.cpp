#include <iostream>
using namespace std;


struct batonik
{
	char marka[20];
	float waga;
	int kalorie;
};

int main()
{
	batonik snack[3] = 
	{
		{"Mocha Munch", 2.3, 350},
		{"Mars", 1.4, 250},
		{"Snickers", 2.5, 375}
	};
		cout << "Marka: " << snack[0].marka <<"\nWaga: " << snack[0].waga << "\nKalorie: " << snack[0].kalorie << endl;
		cout << "\nMarka: " << snack[1].marka <<"\nWaga: " << snack[1].waga << "\nKalorie: " << snack[1].kalorie << endl;
		cout << "\nMarka: " << snack[2].marka <<"\nWaga: " << snack[2].waga << "\nKalorie: " << snack[2].kalorie;
}
