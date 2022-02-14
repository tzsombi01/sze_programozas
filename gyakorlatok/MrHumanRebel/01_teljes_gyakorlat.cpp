// 1/1 => Kiíratás

// Ez egy 1 soros megjegyzés
/* Ez egy több
						soros
								megjegyzés */

#include<iostream>

using namespace std;
 /* Egy névtérben logikailag összefüggő változókat, függvényeket, típusokat tárolunk.
     Egy osztály/struktúra egyben a nevével azonos nevű névteret is definiál. */

int main() {
  cout << "\n Ez az első C++ programunk!" << endl; // új sor + puffer ürítés
  // std::cout << "\n Ez az első C++ programunk!" << std::endl; // új sor + puffer ürítés
return 0;
}
/***************************************************************************************/
// 1/2 => Konstansok/Literálok

#include<iostream>

/* #define NK 42
   #define FJ '!'
   #define SZ "\n\t Az élet értelme: " */

using namespace std;

int main() {
    cout << "\n\t Az élet értelme: 42!\n" << endl; // Literálok
	// cout << SZ << NK << FJ  << "\n" << endl;
return 0;
}
/***************************************************************************************/
// 1/3 => Alap-operátorok, változó, while ciklus

#include<iostream>

#define NK 42
#define AP 2
#define KT 10

using namespace std;

int main() {
    cout << "Összeg: " << NK + 2 << "\n" << "Különbség: " << NK - 2 << "\n" 
	        << "Szorzat: " << NK * 2 << endl;
	cout << "Hányados: " << NK / 2 << "\n" << "Maradék: " << NK % 2 << "\n" << endl;
	int f_k=1, k_e=1;
    while(f_k <= KT) {
	  cout << AP << "^" << f_k << ". hatványa: " << AP * k_e << endl;
	  f_k = f_k + 1;
	  k_e = AP * k_e;
	 }
return 0;
}
/***************************************************************************************/
// 1/4 => if-else vezérlési szerkezet

#include<iostream>

#define NK 42
#define AP 2
#define KT 10

using namespace std;

int main() {
    cout << "Összeg: " << NK + 2 << "\n" << "Különbség: " << NK - 2 << "\n" 
	        << "Szorzat: " << NK * 2 << endl;
	cout << "Hányados: " << NK / 2 << "\n" << "Maradék: " << NK % 2 << "\n" << endl;
	int f_k=0, k_e=1;
    while(f_k <= KT) {
	  if(f_k!=0) k_e *= AP;
	  cout << AP << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k += 1;
	 }
return 0;
}
/***************************************************************************************/
// 1/5 => Bekérés (2, 3, 16)

#include<iostream>

#define KT 10

using namespace std;

int main() {
	int f_k=0, k_e=1, alap;
	cout << "Kérem az alapot: ";
	cin >> alap; cout << endl;
    while(f_k <= KT) {
	  if(f_k!=0) k_e *= alap;
	  cout << alap << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k += 1;
	 }
return 0;
}
/***************************************************************************************/
// 1/6 => Számábrázolási tartomány 

#include<iostream>

#define KT 10

using namespace std;

int main() {
	int f_k=0, alap;
	double k_e=1;
	cout << "Kérem az alapot: ";
	cin >> alap; cout << endl;
    while(f_k <= KT) {
	  if(f_k!=0) k_e *= alap;
	  cout << alap << "^" << f_k << ". hatványa: " << k_e << endl;
	  f_k += 1;
	 }
return 0;
}
/***************************************************************************************/
