// 2/1 Egymásba ágyazott ciklusok, if-else_if, logikai operátorok ''and" és "not", postfix

#include <iostream>

#define KT 10

using namespace std;

int main()
{
  int f_k = 0, alap;
  double k_e = 1;
  bool beker = true;
  // bool beker=0;
  while (f_k <= KT)
  {
    while (beker)
    { // while(!beker)
      cout << "Kérem a nem nulla, egyszámjegyű  alapot: ";
      cin >> alap;
      cout << endl;
      if (alap > 0 && alap <= 9)
        beker = false; // beker=1;
      else
        cout << "A megadott alap nem egyszámjegyű!" << endl;
      /* else if(alap>9 && alap<=99)
                    cout << "A megadott alap kétszámjegyű!" << endl;
         else if(alap>99 && alap<=999)
                    cout << "A megadott alap három-számjegyű!" << endl;
       else cout << "A megadott alap több mint három-számjegyű!" << endl;*/
    } // belső ciklus
    if (f_k != 0)
      k_e *= alap;
    cout << alap << "^" << f_k << ". hatványa: " << k_e << endl;
    f_k++;
  } // külső ciklus
  return 0;
}
/***************************************************************************************/
// 2/2 A postfix/prefix

#include <iostream>

using namespace std;

int main()
{
  int fut = 0, eredet, klon;
  while (fut < 2)
  {
    eredet = 1;
    klon = 0;
    if (fut == 0)
      klon = eredet++;
    else
      klon = ++eredet;
    cout << "A másolat: " << klon << " és az eredeti: " << eredet << endl;
    fut++;
  }
  return 0;
}
/***************************************************************************************/
// 2/3 logikai operátor ''or"

#include <iostream>

using namespace std;

int main()
{
  char kar;
  int szam = 0;
  do
  {
    szam++;
    cout << "\n Kérem a(z) " << szam << ". karaktert: ";
    cin >> kar;
    cout << "A megadott karakter a(z): " << kar << endl;
  } while (kar == 'a' || kar == 'A' || kar == 'z' || kar == 'Z');
  cout << "\n Az Ön kilépő karaktere a(z): " << kar
       << " amely a(z) " << szam << "." << endl;
  return 0;
}
/***************************************************************************************/
// 2/4 do while ciklus (több/ékezetes karakter egyidejű megadása!), get() fgv.

#include <iostream>

using namespace std;

int main()
{
  char kar;
  int szam = 0;
  do
  {
    szam++;
    cout << "\n Kérem a(z) " << szam << ". karaktert: ";
    cin >> kar;
    // cin >> kar  >> kar >> kar; // 3 kar esete pl.: b C d, szóköz!
    // kar=cin.get();
    cout << "A megadott karakter a(z): " << kar << endl;
  } while (kar != 'a' && kar != 'A' && kar != 'z' && kar != 'Z');
  // while(kar!='\n'); // elso masodik
  cout << "\n Az Ön kilépő karaktere a(z): " << kar
       << " amely a(z) " << szam << "." << endl;
  return 0;
}
/***************************************************************************************/
// 2/5 vessző operátor a ciklusfejben

#include <iostream>

using namespace std;

int main()
{
  char kar;
  int szam = 1;
  while (cout << "\n Kérem a(z) " << szam << ". karaktert: ",
         kar = cin.get(), kar != '\n')
  {
    szam++;
    cout << "A megadott karakter a(z): " << kar << endl;
  }
  cout << "\n Az Ön kilépő karaktere a(z): " << kar
       << " amely a(z) " << szam << "." << endl;
  return 0;
}
/***************************************************************************************/
// 2/6 szöveg végének megadása

#include <iostream>
#include <cstdio> // Ctrl+D == EOF

using namespace std;

int main()
{
  char kar;
  int szam = 1;
  while (cout << "\n Kérem a(z) " << szam << ". karaktert: ",
         kar = cin.get(), kar != EOF)
  {
    szam++;
    cout << "A megadott karakter a(z): " << kar << endl;
  }
  cout << "\n Az Ön kilépő karaktere a(z): " << kar
       << " amely a(z) " << szam << "." << endl;
  return 0;
}
/***************************************************************************************/
// 2/7 char mint int, ASCII kódtábla

#include <iostream>
#include <cstdio> // Ctrl+D == EOF

using namespace std;

int main()
{
  int kar;
  int szam = 1;
  while (cout << "\n Kérem a(z) " << szam << ". karaktert: ",
         kar = cin.get(), kar != EOF)
  {
    szam++;
    cout << "A megadott karakter a(z): " << kar << endl;
  }
  cout << "\n Az Ön kilépő karaktere a(z): " << kar
       << " amely a(z) " << szam << "." << endl;
  return 0;
}
/***************************************************************************************/
// 2/8 	 switch/case utasítás

#include <iostream>

using namespace std;

int main()
{
  char kar;
  do
  {
    cout << "\n Kérek egy betűt: ";
    cin >> kar;
    switch (kar)
    {
    case 'a':
    case 'A':
      if (kar == 'a')
        kar = 'e';
      else
        kar = 'E';
      break;
    case 'b':
    case 'B':
      if (kar == 'b')
        kar = 'd';
      else
        kar = 'D';
      break;
    case 'y':
    case 'Y':
      if (kar == 'y')
        kar = 'x';
      else
        kar = 'X';
      break;
    case 'z':
    case 'Z':
      if (kar == 'z')
        kar = 's';
      else
        kar = 'S';
      break;
    default:
      kar = '!';
      break;
    }
    cout << " Az átkódolás utáni kimenet a(z): ' " << kar << " '" << endl;
  } while (kar != '!');
  return 0;
}
/***************************************************************************************/