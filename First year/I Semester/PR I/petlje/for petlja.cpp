// For petlja
/* For petlja je tip petlje sa brojačem. For petljom mi znamo tačan broj iteracija(ponavljanja) 
za određeni blok koda. For petlju definiše njen brojač [najčešće je to varijabla int i ili size_t i],
uslov, i povećanje brojača.
Sintaksa:
for (deklasiranje brojača [size_t i = vrijednost], uslov, povećanje) 
{
	Blok koda;
}
note: size_t je cjelobrojna vrijednost samo za pozitivne integere; size_t == unsigned int;
*/
#include<iostream>

using namespace std;

int main() {

	// Sada ćemo izračunati sumu za prvih n brojeva
	int n;
	cout << "Unesite broj n: ";
	cin >> n; // Unosimo broj n;

	int suma = 0; // Treba nam varijabla u koju ćemo pohraniti sumu. Neutral za operaciju sabiranja je 0, tako da je to početna vrijednost;
	for (size_t i = 1; i <= n; i++) // Brojač inicijalizujemo na vrijednost 1
	{
		suma += i;
		// sve dok je brojač i manji ili jednak n, inkrementiraj ga za 1;
		// Unutar for petlje, na sumu dodaji vrijednost brojača i
		// Tako da će, do broja n, svaka cifra od 1 do n biti dodana na sumu
		/* npr.n == 5; i = 1 -> suma += 1 -> suma == 1;
		i = 2 -> suma += 2 -> suma == 1 + 2 -> suma == 3;
		i = 3 -> suma += 3 -> suma == 3 + 3 -> suma == 6;
		i = 4 -> suma += 4 -> suma == 6 + 4 -> suma == 10;
		i = 5 -> suma += 5 -> suma == 10 + 5 -> suma == 15;
		brojač i je sada 6, što je veće od n, te se u tom trenutku izlazi iz petlje
		*/
	}
	cout << "Suma prvih n brojeva je: " << suma << endl;

	// Sada ćemo da izračunamo faktorijel

	int b;
	cout << "Unesite broj: ";
	cin >> b;

	int faktorijel = 1; // Neutral za operaciju množenja je 1.
	for (size_t i = 1; i <= b; i++) // brojač ide od 1 do b, uključujući i b;
	{
		faktorijel *= i;
	}
	cout << "Faktorijel broja " << b << " je: " << faktorijel << endl;

	// Uslov i inkrement unutar for petlje možemo mijenjati
	// npr.

	// Želimo da ispišemo sve parne brojeve od 0 do 400

	for (size_t i = 0; i < 400; i += 2)
		cout << i << " ";

	// Ili ako želimo da ispišemo neparne brojeve

	for (size_t i = 1; i < 400; i++)
		cout << i << " ";

	// Unutar for petlje, možemo čak da definišemo dva brojača, pa da se oni simultano mijenjaju

	for (size_t i = 0, j = 100; i < 100 || j > 0; i++, j--) // Uslove, promjene i deklaracije razdvajamo zarezom ili logičkim operatorom
	{
		cout << "i: " << i << ", j: " << j << endl;
 	}

	system("pause>nul");
	return 1;
}