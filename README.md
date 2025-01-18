## Opis
Jest to program w języku C, który demonstruje reprezentację binarną liczb całkowitych, zmiennoprzecinkowych oraz typu doble.
Wykonuję również odejmowanie w formacie U2, drukuję wyniki w postaci dziesiętnej jak i binarnej.

## Funkcje
- **Reprezentacja bajtowa liczb** - program wyświetla dane w formie reperzentacji bajtowej (postać szesnastkowa).
- **Reprezentacja binarna liczb** - program wyświetla liczby w formacie binarnym.
- **Odejmowanie w U2** - program pokazuję odejmowanie w U2.
- **Konwersje typów** - program umożliwa konwersję liczb pomiędzy typami float, int oraz double.

## Opis Funkcji 
**Reprezentacja bajtowa liczb**

void drukujBajty(void* dane, size_t rozmiar) {
    unsigned char* bajty = (unsigned char*)dane;
    for (size_t i = 0; i < rozmiar; i++) {
        printf("%02X ", bajty[i]);
    }
    printf("\n");
}
**opis**
dsadasd fsd
