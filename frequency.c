#include <stdio.h>
#include <stdlib.h>


// WENN IHR IN DIE KOMMANDOZEILE WÖRTER EINGEBT, UNBEDINGT IN ANFÜHRUNGSZEICHEN SETZEN!
// Ansonsten bricht das Programm beim Nullterminierungszeichen '\0' ab und liest nur das erste Wort ein :-)
// Bsp. "./frequency "Hello World!"


int main(int argc, char* argv[])
{
    if(argc < 2){
        printf("Not enough arguments given!\n");
        return EXIT_FAILURE;
    }

    char* word = argv[1];
    int frequency[256] = { 0 };

    // Es wird jeder char des Strings und dessen Häufigkeit gezählt
    for (char *p = word; *p != '\0'; p++)
    {
        frequency[(int)*p]++;
    }

    // Ausgabe der Häufigkeit, wenn mind. einmal aufgetreten
    for(int i = 0; i < 255; i++)
    {
        if(frequency[i] != 0)
        {
            printf("Zeichen: '%c' - Häufigkeit: %d \n", i, frequency[i]);
        }
    }

    return EXIT_SUCCESS;
}