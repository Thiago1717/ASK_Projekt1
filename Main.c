#include <stdio.h>

void drukujBajty(void* dane, size_t rozmiar) {
    unsigned char* bajty = (unsigned char*)dane;
    for (size_t i = 0; i < rozmiar; i++) {
        printf("%02X ", bajty[i]);
    }
    printf("\n");
}

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

int main() {
    int liczbaCalkowita;
    float liczbaFloat;
    double liczbaDouble;
    int liczbaA, liczbaB;

    printf("1. Postac bajtowa liczb\n");
    printf("\nPodaj liczbe typu Int: ");
    scanf("%d", &liczbaCalkowita);
    printf("Reprezentacja bajtowa Int (%d):\n", liczbaCalkowita);
    drukujBajty(&liczbaCalkowita, sizeof(liczbaCalkowita));

    printf("\nPodaj liczbe typu Float: ");
    scanf("%f", &liczbaFloat);
    printf("Reprezentacja bajtowa Float (%f):\n", liczbaFloat);
    drukujBajty(&liczbaFloat, sizeof(liczbaFloat));

    printf("\nPodaj liczbe typu Double: ");
    scanf("%lf", &liczbaDouble);
    printf("Reprezentacja bajtowa Double (%lf):\n", liczbaDouble);
    drukujBajty(&liczbaDouble, sizeof(liczbaDouble));

    printf("\n2. Postac binarna liczb \n");
    printf("Reprezentacja binarna Int (%d):\n", liczbaCalkowita);
    drukujBinarnie(&liczbaCalkowita, sizeof(liczbaCalkowita));

    printf("\nReprezentacja binarna Float (%f):\n", liczbaFloat);
    drukujBinarnie(&liczbaFloat, sizeof(liczbaFloat));

    printf("\nReprezentacja binarna Double (%lf):\n", liczbaDouble);
    drukujBinarnie(&liczbaDouble, sizeof(liczbaDouble));

    printf("\n3. Odejmowanie w U2 \n");
    printf("Podaj liczbe A: ");
    scanf("%d", &liczbaA);
    printf("Podaj liczbe B: ");
    scanf("%d", &liczbaB);

    U2_odejmowanie(liczbaA, liczbaB);

    printf("\n4. Konwersje typow\n");
    printf("Podaj liczbe typu float: ");
    scanf("%f", &liczbaFloat);
    liczbaCalkowita = (int)liczbaFloat;
    printf("Wartosc float: %.2f przekonwertowana na int: %d\n", liczbaFloat, liczbaCalkowita);
    printf("\nPodaj liczbe calkowita int: ");
    scanf("%d", &liczbaCalkowita);
    liczbaFloat = (float)liczbaCalkowita;
    printf("Wartosc int: %d przekonwertowana na float: %.2f\n", liczbaCalkowita, liczbaFloat);

    return 0;
}
