// If uslov, switch case
/* Pomoću if uslova, možemo izvršavati više različitih blokova koda u ovisnosti od samog uslova
Switch case koristimo ukoliko imamo velik broj uslova a funkcionalnost za isti je drugačija.
*/
#include<iostream>

using namespace std;

int main() {

	int broj;
	cout << "Unesite broj: "; 
	cin >> broj;

	if (broj < 10 && broj > 0) { // Prvi uslov
		/* Ukoliko je prvi uslov zadovoljen, ostali uslovi se zanemaruju i izvršava se blok
		koda unutar prvog uslova
		*/
		cout << "Unijeli ste broj manji od 10" << endl;
	}
	else if (broj >= 10 && broj < 100) { // Drugi uslov
		// Ukoliko prvi uslov nije zadovoljen, provjerava se drugi.
		cout << "Unijeli ste dvocifren broj" << endl;
	}
	else if (broj < 0) { // Treći uslov
		// Ukoliko prva dva uslova nisu zadovoljena, provjerava se treći.
		cout << "Unijeli ste negativan broj" << endl;
	}
	else { // Posljednji uslov
		// Ukoliko ni jedan od prethodnih uslova nije zadovoljen, izvršava se blok koda u 'else' dijelu
		cout << "Unijeli ste broj veci od 100" << endl;
	}

	if (broj % 2 == 0) // Provjera: Da li je uneseni broj paran
		cout << "Broj je paran" << endl;
	else // Ukoliko nije paran, izvršava se 'else'
		cout << "Broj je neparan" << endl;

	// Ukoliko imamo samo jednu liniju koda u if uslovu, ne moramo koristiti {}

	int mjesec;
	cout << "Unesite broj mjeseca: ";
	cin >> mjesec;
	
	// Kada imamo velik broj uslova, koristimo switch case
	switch (mjesec) { // U ovoj liniji koda provjeravamo vrijednost proslijeđene varijable
	case 1: cout << "Januar" << endl; break; // U ovoj liniji koda provjeravamo za slučaj da je mjesec == 1;
	case 2: cout << "Februar" << endl; break;
	case 3: cout << "Mart" << endl; break;
	case 4: cout << "April" << endl; break;
	case 5: cout << "Maj" << endl; break;
	case 6: cout << "Juni" << endl; break;
	case 7: cout << "Juli" << endl; break;
	case 8: cout << "August" << endl; break;
	case 9: cout << "Septembar" << endl; break;
	case 10: cout << "Oktobar" << endl; break;
	case 11: cout << "Novembar" << endl; break;
	case 12: cout << "Decembar" << endl; break;
	/* Ukoliko ne bismo stavili break na kraju svakog case-a, izvršio bi se svaki case ispod njega
	do kraja vitičastih zagrada. Npr. da je mjesec == 4, ispunio bi se case 4, 5, ..., 12 i default.
	*/
	default: cout << "Nevalidan mjesec" << endl; break;
	// Default case nam je slučaj ukoliko vrijednost proslijeđene varijable ne odgovara ni jednom definisanom case-u.
	}

	/* If uslov provjerava uslov po uslov, počevši od prvog if-a, pa prvi else if, i sve do else-a
	Za razliku od if uslova, switch case je dosta brži, jer u istom trenutku svaki se case provjeri,
	dok kod if uslova, svaki uslov mora da sačeka prethodnog. Iako se to u realnosti ne primjeti, 
	u real-time embeded sistemima može biti od izuzetne važnosti.
	*/

	// Ternary operator ? je zapravo one-liner za if uslov
	int a = 10;

	if (a % 2 == 0) cout << "Paran" << endl;
	else cout << "Neparan" << endl;

	(a % 2 == 0) ? cout << "Paran" << endl : cout << "Neparan" << endl;
	// Oba koda rade istu stvar

	system("pause>nul");
	return 1;
}