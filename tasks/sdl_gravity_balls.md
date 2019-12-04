# Gravitace

Obrátili se na Vás vývojáři nové herní konzole, abyste jim pomohli s vývojem jednoduché hry.
Herní konzole je programována v knihovně [SDL](/exercises.md#Exercise-11).


## Gravitace působící na objekt

Naprogramujte, aby na kuličku působila gravitace. Kulička postuplně padá dolů, jakmile narazí na spodní hranu hrací plochy, odrazí se zpět nahoru. Tento odraz je včak doprovázen tlumením. Rychlost po odrazu je tedy nižší, než rychlost před odrazem. Kulička se tedy po několika odrazech zastaví na spodní hraně plochy.

Gravitaci realizujte tak, ze při každém vykreslení se kulička posune o nějaký definovany posun dolů (gravitační zrychlení).
Při dotyku se spodním okrajem se tento posuv obrátí a sníží o tlumící faktor, např.: `0.8`.


## Více objektů ve scéně

Naimplementujte, aby v hrací ploše bylo více kuliček. Počet může být předán přes parametr příkazové řádky (pro ladění si jej definujte někde v programu). Kuličky si uložte do dynamicky alokovaného pole. Počáteční poloha kuliček bude náhodně generována v rozměrech hrací plochy.
