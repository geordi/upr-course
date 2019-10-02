Zkuste napsat...
- Funkci, která převede textový řetězec na velké znaky
```c
char str[] = { "hello" };
uppercase(str);
// str by tady měl být "HELLO"
```
- Funkci, která v řetězci nahradí všechny výskyty daného znaku za 'X'
```c
char str[] = { "hello" };
replace(str, 'l');
// str by tady měl být "heXXo"
```
- Funkci, která "zašifruje" řetězec tím, že ke každému znaku přičte číslo (klíč).
K ní vytvořte funkci, která řetězec opět odšifruje (odečtením klíče).
```c
char str[] = { "abc" };
encrypt(str, 1);
// str by tady měl být "bcd"
decrypt(str, 1);
// str by tady měl být opět "abc"
```
- Funkci, která vypočte délku řetězce
```c
my_strlen("");          // 0
my_strlen("abc");       // 3
my_strlen("abc 0 asd"); // 9
```
- Funkci, která vrátí 1, pokud jsou dva předané řetězce stejné.
Vytvořte i variantu funkce, která porovnává řetězce bez ohledu na velikosti znaků.
```c
strequal("ahoj", "ahoj");               // 1
strequal("ahoj", "aho");                // 0
strequal_ignorecase("ahoj", "AhOj");    // 1
```
- Funkci, která vrátí 1, pokud je předaný řetězec palindrom (slovo, které se čte stejně zepředu i pozpátku).
- Funkci, která vypočte histogram znaků v řetězci. Histogram je pole. Prvek na pozici `x` udává,
kolikrát se znak `x` vyskytoval v daném řetězci.
```c
int histogram[255] = {};
calc_histogram("aabacc", histogram);
// histogram['a'] == 3
// histogram['b'] == 1
// histogram['c'] == 2
// histogram['d'] == 0
```
- Funkci, která převede řetězec na číslo v desítkové soustavě. Pokud číslo nelze převést, vraťte 0.
```c
convert("5"); // vrátí int s hodnotou 5
convert("123"); // vrátí int s hodnotou 123
```
Zkuste přidat podporu i pro záporná čísla.
