Zkuste napsat...
- Funkci, která přijme adresu na `int` (pomocí ukazatele) a dvě čísla a nastaví paměť na dané adrese
na větší ze zadaných čísel.
```c
int res;
set_max(&res, 5, 6);
// res == 6
```
- Funkci, která přijme dva ukazatele a prohodí hodnoty proměnných, na které ukazují.
```c
int a = 5, b = 6;
swap(&a, &b);
// a == 6, b == 5
```
- Funkci, která přijme pole (ukazatel na `int`) a počet prvků v poli, a vrátí
součet čísel v poli, největší číslo v poli a průměrnou hodnotu čísel v poli.
Vytvořte parametry datového typu ukazatele pro návrat více hodnot z funkce.
- Funkci, která přijme pole a prvek a vrátí pozici, na kterém se prvek v daném poli nachází.
Pokud prvek v poli vůbec není, vraťte z funkce -1.
- Funkci, která přijme pole a seřadí jeho hodnoty od nejmenší po největší.
Můžete použít například algoritmus Bubble sort (https://en.wikipedia.org/wiki/Bubble_sort).
- Program, který načte od uživatele číslo `n`. Poté naalokujte paměť o velikosti `n` `int`ů a 
načtěte ze vstupu `n` čísel, které postupně uložte do vytvořeného pole. Vypište součet načteného
pole.
- Funkci, která přijme pole a "obrátí ho" (první prvek se stane posledním prvkem, druhý prvek se stane
předposledním prvkem atd.).
- Funkci, která přijme dvě pole a zkopíruje prvky prvního pole do druhého pole.

