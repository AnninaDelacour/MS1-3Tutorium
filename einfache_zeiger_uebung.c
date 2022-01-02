#include <stdio.h>
#include <stdlib.h>


void binom(int a, int b, int *c)
{
    // Erste binomische Formel: (a + b)^2 = a^2 + 2ab + b^2

    *c = (a * a) + (2 * a * b) + (b * b);
}

int main(){

    int a = 4;
    int b = 3;
    int c = 0;

    printf("a = %d, b = %d\n\n", a, b);
    printf("Binomische Formel:\n");
    binom(a, b, &c); // Hier wird die Speicheradresse an die Funktion übergeben
    printf("c = %d\n", c);

    return EXIT_SUCCESS;
}

/*
 Wir übergeben in der Main-Funktion die Adresse der Variable c.
 Die Variable c hat zu diesem Zeitpunkt den Wert 0.
 Dieser Wert wird überschrieben, da wir in binom() via Pointer auf den Wert von c zugreifen, 0 überschreiben und
 die Berechnung hineinspeichern.

 Dh. wir übergeben binom() die Werte a = 4, b = 3, c = 0. Der Unterschied ist jedoch, dass wir durch den Call by Reference
 "nach innen und außen" kommunizieren.

 Für den Vergleich: Löscht die * und das & und schaut, was herauskommt, wenn ihr nur c übergebt ;-)
 */