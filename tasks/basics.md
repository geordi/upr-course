Zkuste napsat...
- Program, který vypíše pouze sudá čísla v rozsahu [0, 100]
- Funkci, která vrátí absolutní hodnotu parametru
```c
my_abs(5);  // 5
my_abs(0);  // 0
my_abs(-1); // 1
```
- Funkci, která vypočte faktoriál parametru
```c
factorial(0);   // 1
factorial(1);   // 1
factorial(4);   // 24
factorial(5);   // 120
```
- Funkci, která vrátí n-té Fibonacciho číslo
```c
fibonacci(0);   // 0
fibonacci(1);   // 1
fibonacci(2);   // 1
fibonacci(3);   // 2
fibonacci(4);   // 3
fibonacci(5);   // 5
fibonacci(6);   // 8 
```
- Hru "guessing game"

Hra vygeneruje náhodné číslo. Uživatel bude opakovaně hádat číslo,
program mu napíše, jestli je jeho tip moc velký nebo moc malý.
Jakmile uživatel uhádne číslo, tak program skončí.

Vygenerování náhodného čísla v C:
```c
#include <time.h>
#include <stdlib.h>

int main()
{
    // inicializace náhodného generátoru
    srand(time(NULL));

    // Náhodné číslo bude v intervalu <0, 200>
    int rnd = rand() % 201;

    return 0;
}
```

- Program, který načte od uživatele dvě čísla a matematický operátor (+, -, *, /) a vypíše
výsledek zadané operace.

- Program, který vypočte dostupnost služby za rok v procentech (např. 99,9).
Pro kontrolu můžete použít např. [SLA Calculator](https://uptime.is/99.9)

Ukázka programu:
```
Zadejte smluvený uptime (např. 99.9)
99.9
Služba bude nedostupná maximálně 8.7600 hodin
```

- Program, který bude postupně načítat ze vstupu čísla, dokud uživatel nezadá 0.
Program poté vypíše součet všech zadaných čísel.

- Program, který 10 000x hodí kostkou (vygeneruje náhodné číslo v rozsahu [1, 6]) a poté
vypíše průměrnou hodnotu všech vygenerovaných hodnot.

- Program, který nejprve načte od uživatele PIN (4 číslice). Poté bude opakovaně vyzývat
uživatele k zadání PINu. Pokud uživatel zadá 3x nesprávný PIN, vypište chybovou hlášku a ukončete
program. 

- Funkce, které budou vykreslovat různé geometrické obrazce na výstup
```c
# řádek
xxxxxxxxxxxxx

# sloupec
x
x
x
x
x

# čtverec
xxxx
xxxx
xxxx
xxxx

# dutý čtverec
xxxx
x  x
x  x
xxxx

# diagonálu
x
 x
  x
   x
    x

# trojúhelník
    x
   x x
  x   x
 x     x
xxxxxxxxx
```
