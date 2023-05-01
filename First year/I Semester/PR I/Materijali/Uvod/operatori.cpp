// Operatori
/* Operatori se mogu podijeliti na šest vrsta, a to su:
1. Aritmetički
2. Assignment
3. Relacioni
4. Logički
5. Bitwise
6. Ostali.
*/
#include<iostream>

using namespace std;

int main() {

	// 1. Aritmetički operatori
	/* U aritmetičke operatore spadaju operacije sabiranja (+), oduzimanja (-), množenja (*),
	dijeljenja (/), modulo operator (%), increment (++) i decrement (--);
	*/
	int broj1 = 12, broj2 = 4; // Inicijalizovat ćemo dvije varijable s kojima ćemo manipulisat operatorima

	// +
	cout << ":: Sabiranje [+] ::" << endl;
	cout << broj1 + broj2 << endl; // Output: 16;
	int suma = broj1 + broj2; // suma = 16;
	cout << "Suma: " << suma << endl;

	// - 
	cout << "\n:: Oduzimanje [-] ::" << endl;
	cout << broj1 - broj2 << endl; // Output: 8;
	int razlika = broj1 - broj2; // razlika = 8;
	cout << "Razlika: " << razlika << endl;

	// *
	cout << "\n:: Mnozenje [*] ::" << endl;
	cout << broj1 * broj2 << endl; // Output: 48;
	int proizvod = broj1 * broj2; // proizvod = 48;
	cout << "Proizvod: " << proizvod << endl;

	// /
	cout << "\n:: Dijeljenje [/] ::" << endl;
	cout << broj1 / broj2 << endl; // Output: 3;
	int kolicnik = broj1 / broj2; // kolicnik = 3;
	cout << "Kolicnik: " << kolicnik << endl;
	/* note: Ukoliko spašavate vrijednost količnika u int varijablu, a rezultat vrijednost sa decimalnim
	zarezom, sve cifre poslije decimalnog zareza se brišu. Npr. 7 / 2 = 3;
	Da biste izbjegli ovaj problem, rezultat spašavate u varijablu tipa float ili double, i 
	djeljenik ili djelilac moraju biti float/double. Npr. float kolicnik = (float)broj1 / broj2; -> (float)7 / 2 = 3.5;
	*/

	// % - operator modulo vraća ostatak dijeljenja dva broja
	cout << "\n:: Modulo [%] ::" << endl;
	cout << broj1 % broj2 << endl; // Output: 0;
	int ostatak = broj1 % broj2; // ostatak = 0;
	cout << "Ostatak: " << ostatak << endl;
	// note: modulo operator može se koristiti samo sa integer varijablama. 
	/* dodatni primjeri:
	7 % 3 = 1  ->  7 = 3*2 + 1 -> ostatak 1
	27 % 4 = 3  ->  27 = 4*6 + 3 -> ostatak 3
	5 % 2 = 1  ->  5 = 2*2 + 1 -> ostatak 1
	*/

	// Increment
	/* Increment je operator koji varijablu ovećava za 1;
	Imamo dva tipa incrementa: pre i post;
	*/

	// Post-increment - varijabla++;
	cout << "\n:: Post-increment [var++] ::" << endl;
	cout << broj1++ << endl; // Output: 12
	cout << broj1 << endl; // Output: 13
	int postIncrement = broj1++; // postIncrement = 13;
	cout << broj1 << endl; // Output: 14;
	cout << "Post increment: " << postIncrement << endl; // Output: 13
	/* Post-increment radi na sljedećem principu:
	Prvo se spasi trenutna vrijednost, a zatim se ista poveća za 1.
	U liniji 70, varijabla broj1 ima vrijednost 12, što će biti ispisano na konzoli.
	Korištenjem post-incrementa u sljedećoj liniji koda, varijabla broj1 čuva vrijednost 13.
	Isti slučaj je i u liniji 72, u varijablu postIncrement se čuva vrijednost 13 (trenutna vrijednost broj1 varijable)
	te se u sljedećoj liniji varijabla broj1 povećava za 1.
	*/

	// Pre-increment - ++varijabla;
	broj1 = 12; // radi lakšeg praćenja vrijednosti, incijalizovat ćemo varijablu broj1 na početnu vrijednost.
	cout << "\n:: Pre-increment [++var] ::" << endl;
	cout << ++broj1 << endl; // Output: 13;
	cout << broj1 << endl; // Output: 13;
	int preIncrement = ++broj1; // preIncrement = 14;
	cout << broj1 << endl; // Output = 14;
	cout << "Pre increment: " << preIncrement << endl; // Output = 14;
	/* Za razliku od pre-incrementa, post-increment u istoj liniji koda poveća trenutnu vrijednost
	za 1 i istu vrijednost spasi.
	U liniji 86, varijabli broj1 će vrijednost biti veća za 1 i konzola će ispisati vrijednost 13.
	Isti slučaj je i u liniji 88.
	*/

	// Decrement
	/* Za razliku od incrementa, decrement operator umanjuje vrijednost varijable za 1;
	Isto kao i incremenet, imamo post i pre decrement. 
	*/

	// Post-decrement - varijabla--;
	broj1 = 12;
	cout << "\n:: Post-decrement [var--] ::" << endl;
	cout << broj1-- << endl; // Output: 12;
	cout << broj1 << endl; // Output: 11;
	int postDecrement = broj1--; // postDecrement = 11;
	cout << broj1 << endl; // Output: 10;
	cout << "Post decrement: " << postDecrement << endl; // Output: 11;

	// Pre-decrement - --varijabla;
	broj1 = 12;
	cout << "\n:: Pre-decrement [--var] ::" << endl;
	cout << --broj1 << endl; // Output: 11;
	cout << broj1 << endl; // Output: 11;
	int preDecrement = --broj1; // postDecrement = 10;
	cout << broj1 << endl; // Output: 10;
	cout << "Pre decrement: " << preDecrement << endl; // Output: 10;

	// ------------------------------------------------------------------------------------

	// 2. Assignment operatori
	// U assignment operatore sapadaju operacije [ = ], [ += ], [ -= ], [ *= ], [ /= ], [ %= ]; 
	
	int a = 10, b = 17;

	// =
	cout << "\n:: [ = ] ::" << endl;
	cout << "a -> " << a << " -- b -> " << b << endl;
	a = b; // varijabla a će poprimiti vrijednost varijable b;
	b = 32; // varijabli b ćemo dodijeliti vrijednost 32;
	cout << "a -> " << a << " -- b -> " << b << endl;

	// += 
	cout << "\n:: [ += ] ::" << endl;
	a = 10, b = 17;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 10; b = 17;
	a += b; // a = 27; b = 17;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 27; b = 17;
	/* Primjer a += b; -> ovo je ekvivalentno a = a + b 
	Operator += će u varijabli sa lijeve strane dodati vrijednost varijable sa desne strane
	*/

	// -= 
	cout << "\n:: [ -= ] ::" << endl;
	a = 10, b = 17;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 10; b = 17;
	a -= b; // a = -7; b = 17;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = -7; b = 17;
	// Primjer a -= b; -> ovo je ekvivalentno a = a - b;

	// *= 
	cout << "\n:: [ *= ] ::" << endl;
	a = 10, b = 17;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 10; b = 17;
	a *= b; // a = 170; b = 17;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 170; b = 17;
	// Primjer a *= b; -> ovo je ekvivalentno a = a * b;
	
	// /= 
	cout << "\n:: [ /= ] ::" << endl;
	a = 144, b = 12;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 144; b = 12;
	a /= b; // a = 12; b = 12;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 12; b = 12;
	// Primjer a /= b; -> ovo je ekvivalentno a = a / b;

	// %= 
	cout << "\n:: [ %= ] ::" << endl;
	a = 144, b = 27;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 144; b = 27;
	a %= b; // a = 9; b = 27;
	cout << "a -> " << a << " -- b -> " << b << endl; // a = 9; b = 27;
	// Primjer a %= b; -> ovo je ekvivalentno a = a % b;

	// ------------------------------------------------------------------------------------

	// 3. Relacioni operatori
	// U realacione operatore spadaju operatori: [ == ], [ != ], [ < ], [ <= ], [ > ], [ >= ];
	// Relacioni operatori vraćaju bool vrijednost [True / False] u ovisnosti da li je uslov ispunjen;

	a = 5, b = 3;
	cout << "\n* a -> " << a << " -- b -> " << b << " *" << endl; // a = 5; b = 3;

	// ==  -  operator poređenja
	cout << "\n:: [ == ] ::" << endl;
	cout << "a == b  ->  " << (a == b) << endl; // Output: 0; [0 - False / 1 - True];
	// Pošto a i b nisu jednaki (vrijednosti su im različite), razultat je 0 - False;

	// !=  -  operator poređenja
	cout << "\n:: [ != ] ::" << endl;
	cout << "a != b  ->  " << (a != b) << endl; // Output: 1; [0 - False / 1 - True];
	// Pošto a i b nisu jednaki (vrijednosti su im različite), razultat je 1 - True;

	// <  -  operator poređenja
	cout << "\n:: [ < ] ::" << endl;
	cout << "a < b  ->  " << (a < b) << endl; // Output: 0; [0 - False / 1 - True];
	// Pošto a nije manje od b, rezultat je 0 - False;

	// <=  -  operator poređenja
	cout << "\n:: [ <= ] ::" << endl;
	cout << "a <= b  ->  " << (a <= b) << endl; // Output: 0; [0 - False / 1 - True];
	// Pošto a nije manje ili jednako od b, rezultat je 0 - False;

	// >  -  operator poređenja
	cout << "\n:: [ > ] ::" << endl;
	cout << "a > b  ->  " << (a > b) << endl; // Output: 1; [0 - False / 1 - True];
	// Pošto je a veće od b, rezultat je 1 - True;

	// >=  -  operator poređenja
	cout << "\n:: [ >= ] ::" << endl;
	cout << "a >= b  ->  " << (a >= b) << endl; // Output: 1; [0 - False / 1 - True];
	// Pošto je a veće ili jednako od b, rezultat je 1 - True;

	// ------------------------------------------------------------------------------------

	// 4. Logički operatori
	// U logičke operatore spadaju: [ && ], [ || ], [ ! ];
	// Sintaksa: uslov1 (logički operator) uslov2; npr. a < 3 || a > 5;
	// Logički operatori vraćaju bool vrijednost [True / False] u ovisnosti od definisanja uslova

	a = 5, b = 3;
	cout << "\n* a -> " << a << " -- b -> " << b << " *" << endl; // a = 5; b = 3;

	// && - Logičko AND  // shift + 6
	// Vraća True samo ako su oba (ili svi ukoliko ih je više) zadovoljena
	cout << "\n:: [ && ] ::" << endl;
	cout << "((a > b) && (a < 10))  ->  " << ((a > b) && (a < 10)) << endl; // Output: 1; [0 - False / 1 - True];
	cout << "((a == b) && (a < 10))  ->  " << ((a == b) && (a < 10)) << endl; // Output: 0; [0 - False / 1 - True];

	// || - Logičko OR  // altgr + w
	// Vraća True samo ako je samo jedan uslov zadovoljen
	cout << "\n:: [ || ] ::" << endl;
	cout << "((a != b) || (a != 5))  ->  " << ((a != b) || (a != 5)) << endl; // Output: 1; [0 - False / 1 - True];
	cout << "((a == b) || (a >= 10))  ->  " << ((a == b) || (a >= 10)) << endl; // Output: 0; [0 - False / 1 - True];

	// ! - Logičko NOT  // shift + 1
	// Mijenja stanje True u False i obrnuto
	cout << "\n:: [ ! ] ::" << endl;
	cout << "!(a == 5)  ->  " << !(a == 5) << endl; // Output: 0; [0 - False / 1 - True];
	cout << "!(b == 5)  ->  " << !(b == 5) << endl; // Output: 1; [0 - False / 1 - True];

	// ------------------------------------------------------------------------------------

	// 5. Bitwise operatori
	/* Bitwise operatori se koriste za operacije na individualnim bitovima. Mogu se koristiti
	samo na char i int varijablama. Pošto su ovo kompleksni operatori, nećemo ih obrađivati niti koristiti.
	Bitwise operatori su: Binarno AND [&], Binarno OR [|], Binarno XOR [^], Binarni prvi komplement [~],
	Binarni lijevi Shift [<<], Binarni desni Shift [>>];
	*/

	// ------------------------------------------------------------------------------------
	// 6. Ostali operatori
	// Spomenućemo i obraditi one najbitnije.

	// &  -  adresni operator 'ampersand'
	// adresni operator nam prikazuje adresu određene varijable, objekta, funkcije u memorijskom prostoru;
	cout << "\n:: [&] :: " << endl;
	int x = 15;
	cout << "x: " << x << " na adresi: " << &x << endl;

	// ?  -  ternary operator
	// operator ? nam omogućava definisanje operacija za određeni uslov ukoliko je on True ili False;
	cout << "\n:: [?] :: " << endl;
	int y = 15;
	cout << "y: " << y << endl; // Output: 15;
	(y < 50) ? y = 25 : y = 100;
	// sintaksa  ->  uslov ? Operacija ukoliko je true : Operacija ukoliko je false;
	cout << "y: " << y << endl; // Output: 25;

	(y == 25) ? y = 100 : y = -1;
	cout << "y: " << y << endl; // Output: 100;

	system("pause>nul");
	return 1;
}