#include <iostream>
using namespace std;

void ent(int n);
void czer(int n);

int main()
{
	ent(5);
	czer(3);
}

void ent(int n)
{
	for (int i = 0; i < n; i++) {
		cout << "entliczek pentliczek\n";
	}
}
void czer(int n)
{
	for (int i = 0; i < n; i++) {
		cout << "czerwony stoliczek\n";
	}
}
