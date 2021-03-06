[Pascal-háromszög](https://en.wikipedia.org/wiki/Pascal%27s_triangle)

Kérje be a sorok számát!

Hozzon létre dinamikusan egy háromszög-mátrixot a tároláshoz (az első sor 1 hosszú, majd egyesével növekszik)!

Számolja ki az egyes elemeket: minden sor szélein 1, a köztes elemek a fölötte lévő két elem összegei!

Jelenítse meg a háromszög-mátrixot (a sorokat nem kell középre igazítani)!

Szabadítsa fel a használt memóriaterületet!

[Megoldás](https://szelearning.sze.hu/pluginfile.php/123818/mod_page/content/2/megoldas09pascal3szog.cpp)
 

 
[Vigenére-rejtjelezés](https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher)

A Vigenére-rejtjel egy olyan titkosítási módszer, amely egy kódszó betűi alapján tolja el az egyes karaktereket az ábécében (a Caesar-kód továbbfejlesztése).

Pl. ha a kódszó CODE, akkor minden k*4+1-edik betűt a C betű ábécé-indexével tol el (2), minden k*4+2-ik betűt az O indexével, stb.

A kézi kódoláshoz a tabula recta nevű táblázatot használták, ahol minden oszlopban az abc szerepel egyre nagyobb eltolással, így a kódolandó betű sorában a kódszó jelenlegi betűjéhez tartozó oszlopában található a kódolt betű.

A feladat egy olyan program megírása, ami bekér egy kódszót, majd megjeleníti a kódszó betűihez tartozó oszlopokat.

A táblázatot egy dinamikusan lefoglalt mátrixban tárolja el!

Szabadítsa fel a lefoglalt memóriaterületet!

Feladat folytatása: A táblázat megjelenítése után üres sorig kérjen be sorokat, és írja ki a kódolt szöveget a táblázat alapján!

A program ne tegyen különbséget a kis- és nagybetűk között és hagyja figyelmen kívül a fehér karaktereket!

[Megoldás](https://szelearning.sze.hu/pluginfile.php/123818/mod_page/content/2/megoldas09vigenere.cpp)
