// Headers
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>
using namespace std;
#define TELL cout <<
#define ASK cin >>

// Szám bekerő függvény
int szambeker(int MIN, int MAX)
{
    bool szambe_ok = false;
    int akt;
    do
    {
        TELL "Adja meg a számot!" << endl;
        ASK akt;
        if (akt >= MIN && akt <= MAX)
            szambe_ok = true;
        else
            TELL "Adjon meg " << MIN << "-től " << MAX << "-ig tartományba tartozó számot!" << endl;
    } while (szambe_ok == false);
    return akt;
}

// Karakter bekerő függvény
int karbeker(char KEZD, char VEG)
{
    bool karbe_ok = false;
    char akt;
    do
    {
        TELL "Adja meg a karaktert!" << endl;
        ASK akt;
        // akt = tolower(akt);
        // akt = toupper(akt);
        if (akt >= KEZD && akt <= VEG)
            karbe_ok = true;
        else
            TELL "Adjon meg " << KEZD << "-től " << VEG << "-ig tartományba tartozó karaktert!" << endl;
    } while (karbe_ok == false);
    return akt;
}

int main()
{
    // Szám bekerő függvény tesztelő
    int MAX = 10;
    int MIN = 1;
    int szam_akt = szambeker(MIN, MAX);
    TELL szam_akt << endl;

    // Karakter bekerő függvény tesztelő
    char KEZD = 'A';
    char VEG = 'D';
    char kar_akt = karbeker(KEZD, VEG);
    TELL kar_akt << endl;
    return 0;
}