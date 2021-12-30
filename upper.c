#include <stdio.h>
#include <stdlib.h>

int main() {

    char word[50]; // Wir legen eine Liste an chars an - so können wir einen String erstellen!
    printf("Eingabe: ");

    // Wir verwenden fflush(stdout), um sicherzugehen, dass das, was in die Konsole eingegeben wurde,
    // auch genauso wieder ausgegeben bzw. interpretiert wird!
    // Sources: https://www.quora.com/Why-do-we-use-the-functions-fflush-stdin-and-fflush-stdout-in-c
    // Über fflush(stdin): https://stackoverflow.com/questions/2979209/using-fflushstdin
    fflush(stdout);

    scanf("%s", word); // Da char by default auf die Adresse zeigen, benötigen wir hier kein "&"

    for (int i = 0; word[i] != '\0'; i++) {
        // Wir ziehen 32 ab, da wir im Bereich der ASCII-Zeichen nur die Großbuchstaben erhalten wollen
        // https://www.asciitable.com/
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] -= 32;
        }
    }

    printf("Ausgabe: %s\n", word);

    return EXIT_SUCCESS;
}