## Opis
Program został napisany w języku C, drukuję postać bajtową liczb całkowitych, zmiennoprzecinkowych oraz typu double. 
Te same liczby również wyświetla w formacie binarnym. Wykonuję odejmowanie w formacie U2, drukuję wyniki w postaci dziesiętnej jak i binarnej, 
przedstawia konwersję liczb DEC -> FLOAT oraz FLOAT -> DEC

## Funkcje
- **Reprezentacja bajtowa liczb** - program wyświetla dane w formie reperzentacji bajtowej (postać szesnastkowa).
- **Reprezentacja binarna liczb** - program wyświetla liczby w formacie binarnym.
- **Odejmowanie w U2** - program pokazuję odejmowanie w U2.
- **Konwersje typów** - program umożliwa konwersję liczb pomiędzy typami DEC -> FLOAT, FLOAT -> DEC.

## Opis Funkcji 
### 1. drukujBajty

**Opis**:  
Funkcja drukuję postać bajtową dla typów int, float, double.

**Argumenty**:  
- void* dane – wskaźnik na dane (liczba, której bajty chcemy wyświetlić).  
- size_t rozmiar – rozmiar liczby w bajtach.  
  
  
**Kod funkcji**:
```c
void drukujBajty(void* dane, size_t rozmiar) {
    unsigned char* bajty = (unsigned char*)dane;
    for (size_t i = 0; i < rozmiar; i++) {
        printf("%02X ", bajty[i]);
    }
    printf("\n");
}
```
**Opis działania pętli**
W pętli for pobierany jest pojedyńczy bajt i drukowany jest jego odpowiednik w formacie szesnastkowym.

### 2. drukujBinarnie

**Opis**
Funkcja wyświetla postać binarną podanej liczby

**Argumenty** 
- void* dane – wskaźnik na dane (liczba, której bajty chcemy wyświetlić).  
- size_t rozmiar – rozmiar liczby w bajtach.
  

**Kod funkcji**:
```c
void drukujBinarnie(void* dane, size_t rozmiar) {
    unsigned char* bajty = (unsigned char*)dane;
    for (size_t i = 0; i < rozmiar; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (bajty[i] >> j) & 1);
        }
        printf(" ");
    }
    printf("\n");
}
```
**Opis działania pętli**
Pierwsza pętla for iteruje przez każdy bajt danych, druga pętla for przetwarza każdy bajt zaczynając od najbardziej znaczącego. Wynik obliczany jest za pomocą operacji przesunięcia bitowego.

### 3. U2_odejmowanie

**Opis** 
Funkcja przedstawia zasadę odejmowania w U2.

**Argumenty**
- int liczbaA - pierwsza liczba całkowita.
- int liczbaB - druga liczba całkowita.

**Kod funkcji**:
```c
void U2_odejmowanie(int liczbaA, int liczbaB) {
    printf("Operand A w postaci binarnej: ");
    drukujBinarnie(&liczbaA, sizeof(liczbaA));
    printf("Operand B w postaci binarnej: ");
    drukujBinarnie(&liczbaB, sizeof(liczbaB));

    int wynik = liczbaA - liczbaB;

    printf("Wynik w postaci binarnej: ");
    drukujBinarnie(&wynik, sizeof(wynik));
    printf("Wynik w postaci dziesietnej: %d\n", wynik);
}
```
**Opis działania**
Wyświetla reprezentację binarną podanych przez użytkownika liczb za pomocą funkcji drukujBinarnie. Następnie obliczany jest wynik odejmowania wynik = liczbaA - liczbaB, po czym wynik wyświetlany jest w postaci binarnej oraz dziesiętnej.
