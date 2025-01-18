## Opis
Jest to program w języku C, który demonstruje reprezentację binarną liczb całkowitych, zmiennoprzecinkowych oraz typu doble.
Wykonuję również odejmowanie w formacie U2, drukuję wyniki w postaci dziesiętnej jak i binarnej.

## Funkcje
- **Reprezentacja bajtowa liczb** - program wyświetla dane w formie reperzentacji bajtowej (postać szesnastkowa).
- **Reprezentacja binarna liczb** - program wyświetla liczby w formacie binarnym.
- **Odejmowanie w U2** - program pokazuję odejmowanie w U2.
- **Konwersje typów** - program umożliwa konwersję liczb pomiędzy typami float, int oraz double.

## Opis Funkcji 
### 1. drukujBajty

**Opis**:  
Funkcja drukuję postać bajtową dla typów int, float, double.

**Argumenty**:  
- void* dane – wskaźnik na dane (liczba, której bajty chcemy wyświetlić).  
- size_t rozmiar – rozmiar liczby w bajtach.  
- w pętli for pobierany jest pojedyńczy bajt i drukowany jest jego odpowiednik w formacie szesnastkowym.
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
### 2. drukujBinarnie

**Opis**
Funkcja wyświetla postać binarną podanej liczby

**Argumenty** 
- void* dane – wskaźnik na dane (liczba, której bajty chcemy wyświetlić).  
- size_t rozmiar – rozmiar liczby w bajtach.
- Pierwsza pętla for iteruje przez każdy bajt danych, druga pętla for przetwarza każdy bajt zaczynając od najbardziej znaczącego. Wynik obliczany jest za pomocą operacji przesunięcia bitowego.

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
