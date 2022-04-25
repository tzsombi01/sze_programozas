/***************************************************************************************/
// 8/1/1 az 5/2, dinamikus tömb-kezeléses verziója
// konstans hosszal

#include <iostream>

#define MAX 50

using namespace std;

int beker(int be_tb[])
{
    int i = 0;
    do
    {
        cout << " Kérem a tömb " << i + 1 << ". elemét: ";
        cin >> be_tb[i];
        if (be_tb[i] % 2 == 1 or be_tb[i] % 2 == -1)
        {
            i++;
            cout << endl;
        }
    } while (i < MAX and be_tb[i] != -2);
    cout << endl;
    return i;
}

void kiir(int tomb[], int ig)
{
    for (int fut = 0; fut < ig; fut++)
    {
        cout << " A tömb " << fut + 1 << ". eleme a(z): '";
        cout.width(2);
        cout << tomb[fut] << "' amely a(z) " << fut << ". indexű!" << endl;
    }
}

void buborek(int tb[], int lt)
{
    for (int v = lt - 1; v >= 1; v--)
    {
        for (int e = 0, csere; e < v; e++)
        {
            if (tb[e] > tb[e + 1])
            {
                csere = tb[e];
                tb[e] = tb[e + 1];
                tb[e + 1] = csere;
            }
        }
    }
    cout << endl;
}

int main()
{
    int *mutat;
    mutat = new int[MAX];
    // int* mutat = new int[MAX];
    int n = beker(mutat);
    kiir(mutat, n);
    buborek(mutat, n);
    kiir(mutat, n);
    delete[] mutat;
    // mutat=0;
    // delete [] mutat; // 2x!!
    cout << endl;
    return 0;
}
/***************************************************************************************/
// 8/1/2
// változó hosszal

#include <iostream>

using namespace std;

int h_be()
{
    int h = 0;
    do
    {
        cout << "\n\t Kérem a tömb hosszát: ";
        cin >> h;
    } while (h <= 0);
    cout << "\n"
         << endl;
    return h;
}

void beker(int be_tb[], int h)
{
    int i = 0;
    do
    {
        cout << " Kérem a tömb " << i + 1 << ". elemét: ";
        cin >> be_tb[i];
        if (be_tb[i] % 2 == 1 or be_tb[i] % 2 == -1)
        {
            i++;
            cout << endl;
        }
    } while (i < h);
    cout << endl;
}

void kiir(int tomb[], int ig)
{
    for (int fut = 0; fut < ig; fut++)
    {
        cout << " A tömb " << fut + 1 << ". eleme a(z): '";
        cout.width(2);
        cout << tomb[fut] << "' amely a(z) " << fut << ". indexű!" << endl;
    }
}

void buborek(int tb[], int lt)
{
    for (int v = lt - 1; v >= 1; v--)
    {
        for (int e = 0, csere; e < v; e++)
        {
            if (tb[e] > tb[e + 1])
            {
                csere = tb[e];
                tb[e] = tb[e + 1];
                tb[e + 1] = csere;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    int *mutat = new int[n = h_be()];
    beker(mutat, n);
    kiir(mutat, n);
    buborek(mutat, n);
    kiir(mutat, n);
    delete[] mutat;
    mutat = 0;
    cout << endl;
    return 0;
}
/***************************************************************************************/
// 8/1/3
// bővíthető hosszal

#include <iostream>
#include <cstring>

using namespace std;

#define VZ 256

int *bovit(int *n, int *j, int nb, int tomb[])
{
    /*cout << " Erre az eredeti címre mutat a 'mutat': "
         << tomb;
    cout << "\n Erre az eredeti tartalomra mutat a 'mutat': "
         << (*tomb); //tomb[0] */
    (*j) = (*n);
    (*n) += nb;
    int *mutat_b = new int[*n];
    /*cout << "\n Erre a bővített címre mutat a 'mutat_b': "
         << mutat_b << endl;*/
    for (int i = 0; i < (*j); i++)
    {
        mutat_b[i] = tomb[i];
    }
    delete[] tomb;
    /*cout << "\n A törlés után ez lett az eredeti tartalom: "
         << tomb[0]; */
    tomb = mutat_b;
    /*cout << "\n A cím átadása után erre a bővített új címre mutat a 'mutat': "
         << tomb << endl;*/
    mutat_b = 0;
    delete[] mutat_b; // nem kell!
    return tomb;
}

int h_be(bool ezt)
{
    int h = 0;
    do
    {
        if (ezt)
            cout << "\n\t Kérem a tömb hosszát: ";
        else
            cout << "\n\t Kérem a bővítés db számát: ";
        cin >> h;
    } while (h <= 0);
    cout << "\n"
         << endl;
    return h;
}

int tovabb()
{
    char valasz[VZ];
    int db = -1;
    cin.getline(valasz, VZ); // billentyűzet puffer űrítése!
    cout << "\n Szeretne további adatokat tárolni? [i/n]: ";
    cin.getline(valasz, VZ);
    if (valasz[0] == 'i')
        db = h_be(0);
    return db;
}

void beker(int be_tb[], int h, int i)
{
    do
    {
        cout << " Kérem a tömb " << i + 1 << ". elemét: ";
        cin >> be_tb[i];
        if (be_tb[i] % 2 == 1 or be_tb[i] % 2 == -1)
        {
            i++;
            cout << endl;
        }
    } while (i < h);
    cout << endl;
}

void kiir(int tomb[], int ig)
{
    for (int fut = 0; fut < ig; fut++)
    {
        cout << " A tömb " << fut + 1 << ". eleme a(z): '";
        cout.width(2);
        cout << tomb[fut] << "' amely a(z) " << fut << ". indexű!" << endl;
    }
}

void buborek(int tb[], int lt)
{
    for (int v = lt - 1; v >= 1; v--)
    {
        for (int e = 0, csere; e < v; e++)
        {
            if (tb[e] > tb[e + 1])
            {
                csere = tb[e];
                tb[e] = tb[e + 1];
                tb[e + 1] = csere;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n, nb, j = 0;
    int *mutat = new int[n = h_be(1)];
    /*cout << " Erre az eredeti címre mutat a 'mutat': "
         << mutat << "\n\n";*/
    do
    {
        beker(mutat, n, j);
        kiir(mutat, n);
        buborek(mutat, n);
        kiir(mutat, n);
        nb = tovabb();
        if (nb != -1)
        {
            mutat = bovit(&n, &j, nb, mutat);
            /*cout << "\n Erre a bővített új címre mutat a main-ben a 'mutat': "
                 << mutat;
            cout << "\n Erre a bővített tartalomra mutat a main-ben a 'mutat': "
                 << *mutat << "\n\n";*/
        }
    } while (nb != -1);
    delete[] mutat;
    mutat = 0;
    cout << endl;
    return 0;
}
/***************************************************************************************/
// 8/2, amely az 5/4 könyvtári fgv.-es és dinamikus tömb-kezeléses verziója

#include <iostream>
#include <cstring> // karakterlánc fgv.-ekhez

#define MAX 128
#define LT 7

using namespace std;

bool beker_t(char rszm[], int s)
{
    cout << " Kérem a(z) " << s << ". rendszámot: ";
    cin.getline(rszm, MAX);
    cout << endl;
    int hsz = strlen(rszm);
    if (hsz != LT)
        return false;
    for (int i = 0; i < LT; i++)
    {
        if (i < 3 and not isalpha(rszm[i]))
            return false;
        else if (i >= 4 and not isdigit(rszm[i]))
            return false;
        else if (not(rszm[3] == '-' or rszm[3] == '_' or isspace(rszm[3])))
            return false;
        if (i < 3)
            rszm[i] = toupper(rszm[i]);
        if (i == 3 and rszm[i] != '-')
            rszm[i] = '-';
    }
    return true;
}

void hasonlit(char rsz[], char ref[])
{
    int azonos = strcmp(rsz, ref);
    if (azonos < 0)
        cout << "\t Az 1. a korábbi rendszám!" << endl;
    else if (azonos > 0)
        cout << "\t Az 1. a későbbi rendszám!" << endl;
    else
        cout << "\t Egyező rendszámok!" << endl;
}

void o_fuz(char rsz_o[], char ref_o[])
{
    strcat(rsz_o, " + ");
    strcat(rsz_o, ref_o);
    cout << "\t Az összefűzött rendszámok: " << rsz_o << endl;
}

void beker_s(string *e, string m)
{
    string ek, mk;
    cout << "\n\n Kérem az 1. szerző vezeték-, és keresztnevét: ";
    cin >> (*e) >> ek; // szóköznél leáll!
    (*e) += " " + ek;
    cout << "\n Kérem a 2. szerző vezeték-, és keresztnevét: ";
    cin >> m >> mk;
    m += " " + mk;
}

void has_string(string e, string m)
{
    cout << "\n\t Az 1. szerző: '" << e << "'\n"
         << "\n\t A 2. szerző: '" << m << "'" << endl;
    if (e < m)
        cout << "\n\t Az 1. szerző neve előrébb van az ABC-ben!" << endl;
    else if (e > m)
        cout << "\n\t Az 1. szerző neve hátrább van az ABC-ben!" << endl;
    else
        cout << "\n\t Azonos szerző nevek!" << endl;
}

/*inline*/ void masol(string *h, string e, char rsz_m[], char mslt[])
{
    (*h) = e;
    strcpy(mslt, rsz_m);
}

void komplex(char *p_v, string h, char kl[])
{
    strcpy(p_v, h.c_str());
    strcat(p_v, " ++ ");
    strcat(p_v, kl);
    cout << "\n\n A dinamikus memóriában lévő összefűzött \
'string' és 'char' típusú tartalmak: \n\t\t"
         << p_v << endl;
}

int main()
{
    char rsz[MAX], ref[MAX], klon[MAX];
    // string el="Asimov, Isaac", ms="King, Stephen", hr;
    bool helyes;
    int fut = 1;
    do
    {
        cout << endl;
        if (fut == 1)
            helyes = beker_t(rsz, fut);
        if (helyes or fut == 2)
        {
            if (fut == 1)
                fut++;
            helyes = beker_t(ref, fut);
        }
        if (not helyes)
            cout << " Helytelen a rendszám!";
    } while (not helyes);
    hasonlit(rsz, ref);
    cout << endl;
    o_fuz(rsz, ref);
    /*beker_s(&el, ms);
    has_string(el, ms);*/
    /*masol(&hr, el, rsz, klon);
    cout << "\n\n A másolt szerző: " << hr
         << "\n A másolt összefűzött rendszámok: "
         << klon << endl;*/
    /*char* p_vegyes = new char[hr.length()+4+strlen(klon)+1];
    komplex(p_vegyes, hr, klon);
    delete [] p_vegyes; p_vegyes=0;*/
    cout << endl;
    return 0;
}
/***************************************************************************************/
// 8/3 Mátrixok

#include <iostream>

#define SR 4
#define OP 20

using namespace std;

void kiir(const char szk[][OP], char m[][OP], bool mit)
{
    int j;
    char t;
    string io;
    if (mit)
        io = " alap ";
    else
        io = " monogram ";
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z)" << io << "mátrix " << i + 1 << ". eleme: " << szk[i];
        if (mit)
        {
            m[i][0] = szk[i][0];
            m[i][1] = '.';
            m[i][2] = ' ';
            t = '!';
            for (j = 0; t != ' '; j++)
            {
                t = szk[i][j];
            }
            m[i][3] = szk[i][j];
            m[i][4] = '.'; // m[i][5]='\0';
        }                  // if
    }                      // külső for
}

int main()
{
    char mgm[SR][OP];
    char szerzok[SR][OP] = {
        {"Clarke, Arthur C."},
        {"Tolkien, John R. R."},
        {"Asimov, Isaac"},
        {"King, Stephen"}};
    cout << "\n A mátrix címe: " << szerzok
         << "\n A mátrix 1. eleme: "
         << szerzok[0] << endl; // szerzok[0]
    kiir(szerzok, mgm, 1);
    cout << endl;
    kiir(mgm, mgm, 0);
    cout << endl;
    return 0;
}
/***************************************************************************************/
// 8/3/S1 Mátrixok kezelése mutató aritmetikával/indirekcióval(közvetve)

void kiir(const char (*szk)[OP], char m[][OP], bool mit)
{
    int j;
    char t;
    string io;
    if (mit)
        io = " alap ";
    else
        io = " monogram ";
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z)" << io << "mátrix " << i + 1 << ". eleme: "
             << *(szk + i); // szk, (*szk), (*szk)+i != *(szk+i)!!!
        if (mit)
        {
            m[i][0] = (*(szk + i))[0];
            m[i][1] = '.';
            m[i][2] = ' ';
            t = '!';
            for (j = 0; t != ' '; j++)
            {
                t = (*(szk + i))[j];
            }
            m[i][3] = (*(szk + i))[j];
            m[i][4] = '.';
            m[i][5] = '\0';
        }
    }
}
/******************/
// 8/3/S2 Mátrixok kezelése mutató aritmetikával/indirekcióval(közvetve)

void kiir(const char (*szk)[OP], char m[][OP], bool mit)
{
    int j;
    char t;
    string io;
    if (mit)
        io = " alap ";
    else
        io = " monogram ";
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z)" << io << "mátrix " << i + 1 << ". eleme: "
             << *(szk + i); // szk, (*szk), (*szk)+i != *(szk+i)!!!
        if (mit)
        {
            m[i][0] = *((*(szk + i)) + 0);
            m[i][1] = '.';
            m[i][2] = ' ';
            t = '!';
            for (j = 0; t != ' '; j++)
            {
                t = *((*(szk + i)) + j);
            }
            m[i][3] = *((*(szk + i)) + j);
            m[i][4] = '.';
            m[i][5] = '\0';
        }
    }
}
/******************/
// 8/3/S3 Mátrixok kezelése mutató aritmetikával/indirekcióval(közvetve)

void kiir(const char (*szk)[OP], char (*m)[OP], bool mit)
{
    int j;
    char t;
    string io;
    if (mit)
        io = " alap ";
    else
        io = " monogram ";
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z)" << io << "mátrix " << i + 1 << ". eleme: "
             << *(szk + i); // szk, (*szk), (*szk)+i != *(szk+i)!!!
        if (mit)
        {
            *((*(m + i)) + 0) = *((*(szk + i)) + 0);
            *((*(m + i)) + 1) = '.';
            *((*(m + i)) + 2) = ' ';
            t = '!';
            for (j = 0; t != ' '; j++)
            {
                t = *((*(szk + i)) + j);
            }
            *((*(m + i)) + 3) = *((*(szk + i)) + j);
            *((*(m + i)) + 4) = '.';
            *((*(m + i)) + 5) = '\0';
        }
    }
}
/***************************************************************************************/
// 8/4 Mátrixok kezelése mutatókkal.
//  Ez, a mutatóra mutató mutató, avagy a mutató tömb.

#include <iostream>

#define SR 4
#define OP 20

using namespace std;

void kiir(const char szk[][OP], char m[][OP], bool mit)
{
    int j;
    char t;
    string io;
    if (mit)
        io = " alap ";
    else
        io = " monogram ";
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z)" << io << "mátrix " << i + 1 << ". eleme: "
             << szk[i];
        if (mit)
        {
            m[i][0] = szk[i][0];
            m[i][1] = '.';
            m[i][2] = ' ';
            t = '!';
            for (j = 0; t != ' '; j++)
            {
                t = szk[i][j];
            }
            m[i][3] = szk[i][j];
            m[i][4] = '.';
            m[i][5] = '\0';
        }
    }
}

int main()
{
    char mgm[SR][OP];
    char szerzok[SR][OP] = {
        {"Clarke, Arthur C."},
        {"Tolkien, John R. R."},
        {"Asimov, Isaac"},
        {"King, Stephen"}};
    char *p[SR];
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z) " << i + 1 << ". elem címe: "
             << &szerzok[i] << endl;
        p[i] = szerzok[i];
        cout << " A(z) " << i + 1 << ". elem mutatott címe: "
             << /*(void*)*/ p[i] << endl;
    }
    cout << "\n A mátrix címe: " << szerzok
         << "\n A mátrix 1. eleme: " << (*szerzok) << endl;
    kiir(szerzok, mgm, 1);
    cout << endl;
    kiir(mgm, mgm, 0);
    cout << endl;
    return 0;
}
/***********************/
/* A (void*) elsődlegesen arra használatos, hogy mutatókat adjunk át olyan
    függvényeknek/objektumoknak, amelyek nem feltételeznek semmit
    az objektumok típusáról, valamint arra, hogy a függvények/objektumok
    nem típusos objektumokat adjanak vissza.
    Ahhoz, hogy ilyen objektumokat használjunk, explicit típuskonverziót kell
    alkalmaznunk.
    Azok a függvények/objektumok, amelyek (void*) típusú mutatókat használnak,
    jellemzően a rendszer legalsó szintjén helyezkednek el,
    ahol az igazi hardver-erőforrásokat kezelik. */
/***************************************************************************************/
// 8/5 Mátrixok kezelése dinamikusan

#include <iostream>

#define SR 4
#define OP 20

using namespace std;

string *feltolt(const char (*a_b)[OP])
{
    string *szk = new string[SR];
    for (int i = 0; i < SR; i++)
    {
        szk[i] = a_b[i];
    }
    return szk;
}

string *kiir(const string *szk, string *m, bool mit)
{
    int j;
    char t;
    string io /*, df="12345"*/;
    if (mit)
        io = " alap ";
    else
        io = " monogram ";
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z)" << io << "mátrix " << i + 1 << ". eleme: "
             << szk[i];
        if (mit)
        {
            // m[i]=df; // ??????
            m[i][0] = szk[i][0];
            m[i][1] = '.';
            m[i][2] = ' ';
            t = '!';
            for (j = 0; t != ' '; j++)
            {
                t = szk[i][j];
            }
            m[i][3] = szk[i][j];
            m[i][4] = '.'; /*m[i][5]='\0';*/
        }
    }
    return m;
}

int main()
{
    char adat_b[SR][OP] = {
        {"Clarke, Arthur C."},
        {"Tolkien, John R. R."},
        {"Asimov, Isaac"},
        {"King, Stephen"}};
    string *mgm = new string[SR];
    string *szerzok;
    szerzok = feltolt(adat_b);
    for (int i = 0; i < SR; i++)
    {
        cout << "\n A(z) " << i + 1 << ". elem címe: "
             << &szerzok[i] << endl;
        cout << " A(z) " << i + 1 << ". elem tartalma: "
             << szerzok[i] << endl;
    }
    cout << "\n A mátrix címe: " << szerzok
         << "\n A mátrix 1. eleme: " << (*szerzok) << endl;
    mgm = kiir(szerzok, mgm, 1);
    cout << endl;
    kiir(mgm, mgm, 0);
    cout << endl;
    delete[] mgm;
    delete[] szerzok;
    return 0;
}
