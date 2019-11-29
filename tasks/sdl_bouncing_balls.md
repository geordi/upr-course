# Odrážející se kuličky

Obrátili se na Vás vývojáři nové herní konzole, abyste jim pomohli s vývojem jednoduché hry.
Herní konzole je programována s pomocí knihovny [SDL](/exercises.md#Exercise-11).


## Kuličky, které se ddrážejí od okrajů

Naprogramujte, aby se kulička pohybovala zadaným vektorem rychlosti.
Jakmile narazí na hranu hrací plochy, odrazí se od ní a pokračuje dále.
Dodržujte základní princip, při kterém se ůhel odrazu rovná úhlu dopadu.

Pro kuličku si definujte strukturu, která bude obsahovat všechny potřebné atributy.
Také si nadefinujte funkce, krteré se strukturou pracují, abyste je mohli použít v hlavní hrací smyčce programu.


## Více objektů ve scéně

Do scény vložte více kuliček.
Počet může být předán přes parametr příkazové řádky (pro ladění si jej definujte někde v programu).
Kuličky si uložte do dynamicky alokovaného pole.
Toto pole ideálně obalte strukturou, ke které opět nadefinujete patřiční funkce pro manipulaci.
Počáteční poloha kuliček bude náhodně generována v rozměrech hrací plochy.
