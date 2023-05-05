// Jednodimenzionalni statički nizovi
/* U svim programskim jezicima, većinu podataka čine određene liste, tabele i nizovi.
Nizovi su skup podataka istog tipa. Pozicije podataka unutar niza zovu se index, i kreću od 0.
*/
#include<iostream>
using namespace std;

int main() {
	// Kreiraćemo jedan jednodimenzionalni statički niz integera
	int niz[5];
	// Deklaracija niza je slična deklaraciji varijable
	// tip podatka - naziv niza [veličina niza];
	// note: veličina statičkog niza MORA biti konstanta vrijednost

	const int velicina = 10;
	int array[velicina] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Primjer inicijalizacije niza

	// Niz možemo ispisati preko for petlje na sljedeći način.
	for (size_t i = 0; i < velicina; i++)
	{
		cout << array[i] << " "; // U ovom slučaju, uglastim zagradama pristupamo članovima niza.
	}

	// U niz možemo unositi elemente preko for petlje
	cout << "\nUnesite elemente niza: \n";
	for (size_t i = 0; i < 5; i++)
	{
		cout << "[" << i << "]: ";
		cin >> niz[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		cout << niz[i] << " ";
	}

	// Možemo pristupiti i pojedinim elementima, navodeći njihovu indexnu poziciju
	cout << "\nArray [3]: " << array[3] << endl;
	cout << "Niz [0]: " << niz[0] << endl;

	system("pause>nul");
	return 1;
}