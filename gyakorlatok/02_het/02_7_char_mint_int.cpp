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