// While, Do While petlja
/* Za razliku od for petlje, while petlje su uslovne petlje i koriste se kada ne možemo predvidjeti
* broj iteracija(ponavljanja) za određeni blok koda. Razlika između while i do while petlje je
* da while petlja prvo provjerava uslov, pa onda izvršava kod, dok do while radi obrnuto. Što znači
* da će se blok koda u do while petlji izvršiti makar jednom, dok kod while petlje, blok koda može
* biti u potpunosti zanemaren.
*/
#include<iostream>
using namespace std;

int main() {

	int a;
	cout << "Unesite broj: ";
	cin >> a;

	// Na koji način ćemo izračunati sumu cifri unijetog broja?
	// Ne možemo predvidjeti koji će korisnik broj unijeti.
	// Zato ćemo koristiti while petlju

	int suma = 0;

	while (a > 0) { // Sve dok je a veće od nule, izvršavaj ovaj blok koda;
		suma += a % 10; // U sumu ćemo dodati vrijednost zadnje cifre broja. 
		/*note: broj % 10 daje za rezultat zadnju cifru bilo kojeg integera
		(55 % 10 -> 55 / 10 == 5 [+ 5 ostatka]) */

		// Kako smo na sumu dodali vrijednost zadnje cifre unijetog broja, istu moramo i obrisati;
		a /= 10; // pošto je a integer, dijeljenje sa 10 će 'otkinuti' zadnju cifru od unijetog broja.
		/* 55 / 10 == 5.5 -> int: 5 */
	}

	cout << "Suma: " << suma << endl;

	/* Ako želimo ograničiti korisnika na određeni raspon brojeva za unos, a ne znamo koliko puta 
	će korisnik pogrešno unijeti, koristimo do while petlju, omogućavajući mi unos makar jednom bez 
	provjere unosa.
	*/

	// Npr. ograničavamo unos samo za pozitivne brojeve

	int broj;
	do {
		cout << "Unesite pozitivan broj: ";
		cin >> broj;
	} while (broj < 0); // Sve dok je broj manji od nule, izvršaji blok koda do while petlje

	cout << "Unijeli ste pozitivan broj: " << broj << endl;

	// ako bismo željeli izračunati proizvod svih pozitivnih cifri unutar jednog broja, koristićemo while petlju

	int broj2;
	do {
		cout << "Unesite pozitivan broj (opet..): ";
		cin >> broj2;
	} while (broj < 0); // I ovaj put ćemo ograničiti korisnika na unos samo pozitivnih brojeva

	int proizvod = 1;
	while (broj2 > 0) {
		int zadnjaCifra = broj2 % 10; // U varijablu spašavamo zadnju cifru broja. Ova varijabla je lokalna, jer je deklarisana unutar tijela while petlje
		if (zadnjaCifra % 2 == 0) { // Ukoliko je zadnja cifra parna, dodaj u proizvod.
			proizvod *= zadnjaCifra;
		}

		broj2 /= 10; // Bez obzira da li je prethodni uslov zadovoljen, svakako dijelimo broj;
	}
	cout << "Proizvod pozitivnih cifri unesenog broja: " << proizvod << endl;

	// Ako bismo željeli promjeniti redosljed cifara nekog broja, koristićemo while petlju

	int nekiBroj = 783209431;
	cout << "Neki broj: " << nekiBroj << endl;

	int obrnutiBroj = 0;
	while (nekiBroj > 0) {
		obrnutiBroj *= 10;
		/* Prvo smo broj pomnožili sa 10, jer želimo pomjeriti poziciju zadnjeg broja
		na poziciju veće potencije (npr ako smo imali broj 24, i na zadnje mjesto želimo da
		dodamo broj 7, od broja 24 moramo 'napraviti' broj 240, a to ćemo postići množenjem istog sa 10,
		te na kraju saberemo broj 7 sa novim brojem, što daje 247. 
		*/
		obrnutiBroj += nekiBroj % 10;
		/* Zatim, zadnju cifru početnog broja sabiramo sa novim brojem, tako da ona 
		* ostane na posljednjem mjestu.
		*/
		nekiBroj /= 10; // Broj dijelimo sa 10 da bismo 'otkinuli' zadnju cifru
	}
	cout << "Obrnuti od nekog broja: " << obrnutiBroj << endl;

	system("pause>nul");
	return 1;
}