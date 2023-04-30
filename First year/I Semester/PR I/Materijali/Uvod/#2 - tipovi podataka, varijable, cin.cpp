// Tipovi podataka, varijable, cin
/* U svim programskim jezicima, podacima manipulišemo tako što definišemo njihov tip i
spašavamo ih u varijable, nizove ili objekte (o nizovima i objektima detaljnije u sljedećim materijalima).
Programski jezik c++ ima nekoliko predefinisanih tipova podataka, ali osnovni i najkroišteniji su:
int (integer) - cjelobrojne vrijednosti;
float - decimalne vrijednosti;
double - decimalne vrijednosti (veća preciznost u odnosu na float);
char - karakteri definisani ascii kodom;
bool - pamti samo dva stanja [True / False];
void - tip podatka koji ne zahtjeva povratnu informaciju;
[Za detaljnije informacije o svakom tipu podatka, proguglajte].

Varijable 
 - Tipovi podataka koji imaju:
	- naziv
	- adresu u memoriji
	- definisan tip podatka
	- vrijednost koju pamte
*/
#include<iostream>

using namespace std;

int main() {

	int broj;
	/* Deklarisanje varijable
	Definisanje tipa podatka [int]
	Davanje imena 'broj'
	*/
	int broj2 = 5;
	/* Deklarisanje i inicijalizacija varijable
	Definisanje tipa podatka [int]
	Davanje imena 'broj2'
	Dodjeljivanje vrijednosti '5'
	*/
	cout << "Unesite vrijednost broja: ";
	cin >> broj;
	/* Unos vrijednosti u varijablu broj
	std::cin (iz standardnih komandi pozovi komandu cin) je komanda koja znači 'console-in'
	i zadužena je za učitavanje podataka sa konzole.
	Znakovi redirekcije >> dio su sintakse za komandu cin. Znakovima redirekcije možemo
	razdvojiti unos pojedinačnih varijabli.*/

	/* u ovoj liniji koda, varijabla broj2 ima vrijednost 5.
	Varijabla broj će imati vrijednost unesenu sa tastature.*/
	cout << "Broj: " << broj << " i broj2: " << broj2 << endl;
	
	system("pause>nul");

	float realanBroj;
	float realanBroj2 = 14.4f; //f znači float

	// cout << realanBroj << " " << realanBroj2 << endl;

	/* Ispis sadržaja varijabli 'realanBroj' i 'realanBroj2'
	* Program se neće izvršiti jer pokušavamo da ispišemo sadržaj varijable koja nije
	* inicijalizovana. 
	*/
	realanBroj = 1.02f;
	cout << realanBroj << " " << realanBroj2 << endl;
	/* Program će izvršiti ispis jer obe varijable sadržavaju neku vrijednost.
	* Inicijalizaciju varijabli možemo raditi bilo gdje u kodu, jedini uslov je da je
	* varijabla prije unosa ili inicijalizacije deklarisana.
	*/
	system("pause>nul");

	int a, b;
	/* Ukoliko želimo deklarisati više varijabli istog tipa podatka, možemo
	i na ovaj način [razdvajanjem imena zarezom].*/

	cout << "Unesite a i b: " << endl;
	cin >> a >> b;

	cout << "a: " << a << " / b: " << b << endl;
	system("pause>nul");

	char karakter;
	cout << "Unesite karakter: "; 
	cin >> karakter;
	cout << (int)karakter << " - " << karakter;
	/* linije 78 - 81
	Deklarisali smo varijablu tipa char i dali joj ime 'karakter'. U sljedeće dvije linije
	koda, unijeli smo karakter sa tastature. U liniji 81 ispisivamo ascii kod unesenog karaktera
	i sam karakter. Karakteri su poseban tip podatka u svim programskim jezicima, tako da se
	isti pamte po ascii tabeli koja definiše cjelobrojnu vrijednost za određeni karakter.
	Ascii kod možemo saznati castingom (linija 81). Casting je način explicitne konverzije
	određenog tipa podatka u drugi tip. [ (tip_podatka)naziv_varijable ].
	U liniji 81 smo uradili casting nad varijablom karakter koja je tipa char, te nam je
	program vratio integer vrijednost unijetog karaktera.
	*/

	system("pause>nul");
	return 1;
}
