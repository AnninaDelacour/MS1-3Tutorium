#include <stdio.h>
#include <stdlib.h>

/*
 Call by Value:
 Wir übergeben der Funktion add() den Wert von val3 - dh val1 bekommt beim Funktionsaufruf in der Main-Funktion
 NUR den Wert, der in val3 gespeichert ist, nicht die Adresse.
 Intern wird val1 daher mit 0.0 initialisiert - da wir in val3 in der Main den Wert 0.0 übergeben haben!
 Es liegt also quasi der Wert doppelt vor -> einmal LOKAL in der Funktion in val1, einmal in der Main-Funktion in val3.

 Wichtig: In Funktionen wie zB add() returned man den Wert der Variable, nicht die Variable selber.
 */

float add(float val1){
    printf("Memory address of val1: %p\n\n", &val1);

    val1 = val1 + 1.0f;
    return val1;
}



/*
 Call by Reference:

 void sub(float val2){
    printf("Memory address of val2: %p\n\n", &val2);

    val2 = val2 - 1.0f;
}

 Die Funktion sub() gibt ohne Return Statement und als void keine Subtraktion zurück, dh selbst wenn wir sie in der Main-Funktion
 aufrufen, wird der Wert von val3 nicht geupdated. Denn die Variable in der Funktion sub() liegt nur lokal vor!
 Das kann man allerdings ändern, indem man einen Pointer erstellt (siehe unten)!

 Durch * kommen wir an den Wert, mit dem wir subtrahieren können.
 Wir müssen in der Main-Funktion nun aber die Speicheradresse von val3 an die Funktion "sub()" übergeben,
 damit *val2 an den Wert, der sich IN der Speicheradresse befindet, herankommt und mit diesem rechnen kann.

 Wir übergeben also val2 eine Referenz auf die Variable "val3" und verändern dadurch dessen Wert.
 */

void sub(float *val2){
    printf("Memory address of val2: %p\n\n", &val2);

    *val2 = *val2 - 1.0f;
}

int main(){

    float val3 = 0.0;

    printf("Memory address of val3: %p\n\n", &val3);

    val3 = add(val3);
    printf("%f\n\n", val3);


    sub(&val3);
    printf("%f\n", val3);
//    printf("Memory address of val3: %p\n\n", &val3);

    return EXIT_SUCCESS;
}