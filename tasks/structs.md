# Structury (`struct`)

Struktura definuje složený datový typ.
Jsme tak schopni kombinovat základní datové typy a také struktury pro vytvoření nových datových typů, které nám reprezentují potřebná data.


## Kruh (Circle)


### Definice struktury pro kruh

Naimplementujte strukturu pro reprezentaci kruhu `Circle`, která reprezentuje kruh.
Ten může být reprezentován polohou středu v prostoru (`center`) a poloměrem (`radius`).

- Střed kruhu nejprve definujte jako dva `float`y pro definici polohy `x` a `y`.
- Pak definujte střed kruhu jako další strukturu `Point2`, která obsahuje dva atributy `x` a `y` typu `float`.


### Operace s kruhem


#### `circle_circumference` - výpočet obvodu
```c
float circle_circumference( const Circle * self );
```

Funkce vrátí obvod kruhu podle dobře známého vzorce.


#### `circle_area` - výpočet obsahu
```c
float circle_area( const Circle * self );
```

Funkce vrátí obsah kruhu podle dobře známého vzorce.


#### `circle_diameter` - vrátí průměr kruhu
```c
float circle_diameter( const Circle * self );
```

Funkce vrátí průměr kruhu (ve struktuře je delkarován pouze poloměr kruhu).


#### `circle_contains_circle` - je jiný kruh obsažen v kruhu?
```c
bool circle_contains_circle( const Circle * self, const Circle * other );
```

Funkce vrátí logickou hodnotu, zdali je kruh `other` obsažen v kruhu `self`.

