// UVOD
/* Programiranje je vještina kojom računaru kroz algoritme definišemo određenu funkcionalnost
nekog koda. Proces programiranja zahtjeva strpljenje, upornost, trud, rješavanje logičkih problema i
znanje. Kroz ovaj repozitorij proći ćemo kroz oblasti neophodne za savladavanje osnovna programiranja.

Programski jezik u kojem ćemo raditi je C++. 
Kroz ovaj program ćemo objasniti značenje svake linije koda i šta omogućava ovom kodu.*/

#include<iostream>
/* Aktiviranje biblioteke iostream.
Ova biblioteka nam ogućava osnovne input i output komande na konzoli, koju ćemo koristiti za
testiranje našeg koda. Ključna riječ 'include' se korsiti za aktiviranje biblioteka koje su dostupne
programeru (definisanje ličnih biblioteka je moguće).*/

using namespace std;
/* Aktiviranje standardnih komandi unutar biblioteke.
Iako možda nije najbolja praksa, na nivou učenja, tj. kreiranja programa koji koristi samo jedan
korisnik, radi lakše implementacije cjelokupnog koda, neće izazvati nikakvu šetetu ova linija koda.
Slučaj u kojem ne bismo trebali primjenjivati ovu liniju koda je kada radimo na većim projektima
na kojem rade više programera, sa dosta različitih ličnih biblioteka gdje postoji mogućnost da su
unutar drugih biblioteka definisane standardne komande sa istom ključnom riječju 'std'.
Standardne komande su definisane unutar biblioteke.*/

int main() {
	/* Glavna/main funkcija.
	Funkcija koja prva ulazi u stek memoriju i koja se prva pokreće.
	Definiše se tipom podatka (obično je int ili void) i ključnom riječju 'main'.
	Zagrade () definišu parametre koje funkcija prihvata (u ovom slučaju, ne proslijeđujemo ništa).
	Zagrade {} definišu tijelo funkcije, tj. kod koji će biti izvršen unutar te funkcije.*/

	cout << "Hello World!" << endl;
	/* cout komanda - definisana unutar ostream biblioteke.
	std::cout (iz standardnih komandi std, pozovi komandu cout) koja znači 'console-out' je komanda
	zadužena za ispis na konzoli.
	Znakovi redirekcije << su dio sintakse za komandu cout. Također, znakovima redirekcije možemo
	razdvajati ispis texta, varijable ili povratni podatak neke funkcije.
	Znakovi "" definišu početak i kraj textualnog zapisa koji će se pojaviti na konzoli. 
	std::endl (iz standardnih komandi std, pozovi komandu endl) koja znači 'end line' je 
	zadužena za prebacivanje u novi red nakon ispisa. Također se može koristiti i "\n" 
	npr -> cout << "Hello World\n"; 
	Kraj svake linije koda u c++ definiše znak ';' */

	system("pause>null");
	/* sistemski poziv
	U c++ su omogućeni sistemski pozivi. Isti zaustavljaju izvršavanje koda, te izvršavaju
	komandu sistemskog poziva. U ovom primjeru, pozvali smo komadnu za zaustavljanje konzole,
	što znači da će se naš kod zaustaviti na liniji 42 i nastaviće sa izvršavanjem kada
	korisnik pošalje neku interakciju.*/

	return 1;
	/* povratna vrijednost
	Funkcija 'main' je definisana tipom 'int'(tip za cjelobrojne vrijednosti [brojevi iz skupa Z])
	Svaka funckija mora da ima povratnu vrijednost (osim void funkcija), te u našem slučaju, 
	main funkcija je dužna vratiti cjelobrojnu vrijednost (kod main funkcije definisane 'void' tipom podatka, 
	ova linija nije obavezna). */
}
/* Zatvorena vitičasta zagrada '}'
U c++ programskom jeziku, znak } definiše kraj tijela funkcije (u ovom slučaju main funkcije)
i time se završava izvršavanje koda.*/