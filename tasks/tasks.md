- Vypočtěte směrodatnou odchylku pro pole o N prvcích
    - Vzorec naleznete např. zde https://www.mathsisfun.com/data/standard-deviation-formulas.html
- Deklarujte trojici polí (dat. typ int) o velikostech N1, N2, N3 = N1 + N2 (např. N1 = N2 = 10)
  - Vytvořte funkci s trojici parametrů pro uvedená pole, předejte do funkce rovněž délky polí
  - První dvě pole nejprve seřaďte (můžete použít např. bubble sort, https://algoritmy.net/article/3/Bubble-sort)
    - pozn. pozor na tzv. side effect - změna pole, které bylo bráno jako vstupní parametr, možné vyřešit pomocí seřazení kopie - dynamická alokace paměti
  - Ve funkci postupně vybírejte dvojice prvků z prvních dvou polí, které jsou na začátku
    - Začátek se bude postupně posouvat!
        - Příklad:
        - Na počátku je začátek obou polí na indexu 0
        - V prvním kroku bude menší číslo v prvním poli, zapíšu jej tedy na nultý index třetího pole, ten inkrementuji
        - Vybral jsem prvek z prvního pole, proto posunu začátek tohoto pole o jeden prvek doprava
        - Začátek druhého pole zůstává nezměněný
  - Do třetího pole postupně vkládejte vždy menší z dvojice čísel
  - Pozor na situaci na konci, v jednom z polí mohou zůstat nezařazená čísla, zatímco druhé pole je "prázdné", v tomto případě stačí zbávající položky zařadit na konec výsledného pole
- Načtěte od uživatele dvojici řetězců (maximální délka je 10 znaků pro oba řetězce)
  - Deklarujte třetí řetězec (délku zvolte minimálně 22 znaků)
  - Třetí řetězec bude obsahovat oba načtené řetězce oddělené mezerou
  - Vytvořte zálohu prvního řetězce (vytvořte nové pole znaků o 10 prvcích) pomocí strncpy
  - V prvním řetězci převeďte malá písmena na velká a obráceně
  - Zaměňte první znak s posledním, druhý s předposledním, ...
  - Takto vytvořený řetězec vypište společně s původním řetězcem
- Načtěte od uživatele řetězec dlouhý maximálně 30 znaků
  - Vytvořte funkci, která bude vracet pozici prvního výskytu zvoleného znaku
  - Vytvořte funkci, která bude vracet pozici prvního výskytu zvoleného podřetězce
  - Pokud znak/řetězec nebude nalezen, tak funkce vrátí -1
- Shift šifra
  - Vytvořte program, který uživateli dá na výběr, zda chce šifrovat či dešifrovat zadaný text
  - Vstupem je řetězec o maximální délce 50 znaků (otevřený, resp. šifrový, text)
  - Na vstupu jsou povoleny pouze velká písmena A - Z
  - Nejprve musíte vstup ošetřit, tzn. malá písmena převést na velká, ostatní znaky z řetězce odstranit, ...
    - Např. přes pomocné pole znaků, ve kterém bude uložený "čistý" vstup
  - Následně uživatele vyzvěte k zadání klíče K
  - Klíč K je celé číslo v intervalu <0, 25>
  - Program bude obsahovat dvě funkce, jednu pro šifrování, druhou pro dešifrování
  - Šifrování probíhá tak, že každý znak otevřeného textu je nahrazen znakem o K pozic v abecedě dále
    - např. Pro K = 2, A je nahrazeno za C, B za D, Z za B, ...
  - Dešifrování funguje na stejném principu, jen jsou znaky šifrového textu nahrazovány znaky abecedy o K pozic dříve
    - např. Pro K = 2, C je nahrazeno za A, D za B, B za Z, ...
  - Po zašifrování otevřeného textu proveďte jeho dešifování zvoleným klíčem a pomocí *strncmp* porovnejte, zda se oba řetězce shodují (výsledek bude 0)
  - Ukázka - Posun v abecedě o 3 znaky:
    - M = ABCDEFGHIJKLMNOPQRSTUVWXYZ (otevřený text)
    - C = DEFGHIJKLMNOPQRSTUVWXYZABC (šifrový text)
  - Otevřený, resp. šifrový, text je následně vypsán uživateli na std. výstup
- Zjednodušený Blackjack
  - Vytvořte program, který umožní uživateli hraní blackjacku
  - Hodnoty karet jsou 7 až A 
    - J = Q = K = 10 
    - A = 11 nebo A = 1, záleží na uživateli
    - Pravidla pro počítač (dealer)
      - Počítač dostane 2 karty, hodnota první z nich bude vypsána na obrazovku
      - Pokud je součet >= 17, nebere si další kartu
      - Pokud je součet < 17, bere si další kartu
      - Pokud má počítač A a zaroveň je součet >= 17 (v případě, že A je bráno jako 11), nebere další kartu
      - Pokud má počítač A a zaroveň je součet < 17 (v případě, že A je bráno jako 1), bere další kartu
    - Pravidla pro hráče
      - Hráč dostane 2 karty
      - Počítač dá hráči na výběr dvě možnosti - STAND (nebere kartu) a HIT (bere další kartu)
      - Hráč je dotazován, zda chce další kartu až do chvíle než zvolí volbu STAND nebo součet jeho karet > 21
    - Po zvolení možnosti STAND je na obrazovku vypsán součet hodnot karet hráče a počítače
    - Vyhráva ten, kdo dosáhne vyššího součtu
      - Suočet musí být <= 21, při vyšší hodnotě prohráváte
    - Poté je na obrazovku vypsána informace kdo vyhrál, případně remíza
    - Stávající řešení upravte tak, aby po skončení kola mohl hráč začít novou hru
    - BONUS: Vylepšete hru dle vlastní fantazie 
      - kontrola počtu rozdaných karet (nemohou být rozdány více než čtyři esa apod.)
      - jednoduchý systém sázek
      - ...
- PIN lockout
    - Zvolte čtyřmístný PIN z číslic 0-9
    - Vypište hlášku pro vložení PINu uživatelem
    - Po zadání PINu jej zkontrolujte s předem zvoleným PINem, v případě 3 neúspěšných pokusů vypište na obrazovku informaci o překročení limitu pro pokusy a program ukončete
    - Upravte řešení tak, aby uživatel na počátku zvolil PIN sám, včetně opětovného potvrzení zadaného PINU
- Hod kostkou
  - Simulujte 10 000 hodů kostkou
  - Vypište součet všech padlých čísel
  - Vypište počet 1, 2, ...
  - Vypište pravděpodobnosti 1, 2, ...
- Leibnizův vzorec pro aproximaci PI
  - PI ~ (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ....)*4
  - Počet iterací zvolte aespoň 10000
  - Vypočtěte přibližnou hodnotu PI pomocí cyklu for
  - Přepište řešení pomocí cyklu while
  - Výsledek vypište do konzole na 8 desetinných míst 
- Kalkulačka
  - Vytvořte program, který bude schopen realizovat základní aritmetické operace +, -, *, /, % pro dva celočíselné operandy zadané uživatelem
  - Operátor bude volen rovněž uživatelem, načtení proběhne do proměnné typu char
  - Operace bude vybrána pomocí konstrukce switch
  - Dělení nulou bude ošetřeno pomocí konstrukce if-else
  - V případě špatného vstupu (dělení 0, neplatná operace, ...) vypíše program chybovou hlášku a ukončí se
  - Výsledek zvolené operace bude vypsán na obrazovku
- Deklarujte dvojici polí o stejné délce, které budou reprezentovat dvojici vektorů, délku zadá uživatel
  - Obě pole naplňte náhodnými hodnotami - rozsah opět volí uživatel
  - Vypočtěte skalární součin
  - Vypočtěte euklidovskou vzdálenost mezi těmito vektory
  - Vypočtěte cosinovu podobnost
    - Vzorec naleznete např. zde https://en.wikipedia.org/wiki/Cosine_similarity
- Vytvořte program, který načte od uživatele hledaný součet
  - POZN: Zvolte počet prvků pole pevně 10 - nyní stačí řešení bez malloc/new
  - Následně uživatel zadá jednotlivé prvky pole
  - Vytvořte funkci, která vrátí indexy počátku a konce podsekvence, jejíž součet se rovná zadanému součtu - přes pointery jako výstupní parametry
  - Vytvořte funkci, která tuto podsekvenci vypíše
  - V případě, že podsekvence v poli není nalezena, vrátí se v obou parametrech hodnota -1
<!-- Zadejte délku pole a hledaný součet
8
20  -->
<!-- Zadejte délku pole a hledaný součet
6
15  -->
~~~
Zadejte hledaný součet
20
Zadejte prvky pole
4
2
10 
3
-3 
10 
5
5
Nalezená sekvence se nachází mezi indexy: 2, 5
Nalezená sekvence je: 10 3 -3 10 
Zadejte hledaný součet
15
Zadejte prvky pole
5
1
-6 
7
7
3
Sekvence nenalezena
~~~
- Vygenerujte pole N čísel čísel v rozsahu <10, 21>
~~~C
  int num = rand() % (max_number + 1 - minimum_number) + minimum_number;
~~~
<!-- Délku N volí uživatel  -->
- Nechte uživatele zadat číslo z uvedeného rozsahu
- Program vypíše na std. výstup kolikrát se číslo v poli vyskytuje
- Vypište počet všech čísel z uvedeného rozsahu v poli
  ~~~
  10 -> 3x
  11 -> 2x
  12 -> 8x
  atd 
  ~~~
- *BONUS: Upravte program tak, aby byl uživateli vypsán i počet čísel, které obsahují první, resp. druhou, cifru ze zadaného čísla*
