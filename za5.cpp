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
	batonik snack =
	{
		"Mocha munch",
		2.3,
		350	
	};
	cout << "Marka: " << snack.marka <<"\nWaga: " << snack.waga << "\nKalorie: " << snack.kalorie;
}
