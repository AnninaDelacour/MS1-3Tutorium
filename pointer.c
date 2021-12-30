#include <stdio.h>
#include <stdlib.h>

int main(){

    int value = 42;
    printf("Value of variable 'value': %d\n", value);
    printf("Memory address of variable 'value': %p\n\n", &value);

    int *a_pointer_to_value = &value;
    printf("Value of variable 'a_pointer_to_value': %d\n", *a_pointer_to_value);
    printf("Memory address of variable 'a_pointer_to_value': %p\n", &a_pointer_to_value);
    //printf("Memory address of variable 'a_pointer_to_value': %p\n", &a_pointer_to_value);
    printf("Memory address of 'value' which 'a_pointer_to_value' points to: %p\n", a_pointer_to_value);

    return EXIT_SUCCESS;
}

/*
 Die Pointer-Variable "*a_pointer_to_value" speichert tatsächlich die ADRESSE ab, auf die gezeigt wird - nicht den Wert.
 Die Adresse beinhaltet einen Wert.

 z.B. besitzt die Variable "value" den Wert 42, welcher auf der Adresse "0x7ffeeaba8738" gespeichert ist.
 *a_pointer_to_value hat selber eine Speicheradresse, z.B. "0x7ffeeaba8730".
 *a_pointer_to_value kann dadurch, weil auf die Adresse von "value" gezeigt wird, auf den Wert zugreifen.
 Auf den Wert kann durch "*" zugegriffen werden! -> daher geben wir bei dem zweiten printf()-Statement auch "*a_pointer..." an!

 Würden wir nur "a_pointer_to_value" hinschreiben, müssten wir das Formatzeichen ändern (%d -> %p) und würden
 die Speicheradresse von "value" ausgegeben bekommen.

 Also: In "a_pointer_to_value" wird die Adresse von "value" abgespeichert.
 Mithilfe von * können wir auf den WERT in "value" zugreifen -> 42.

 Vorsicht! 'value' != a_pointer_to_value
 Sind zwei verschiedene Variablen, wovon der Wert der einen von der anderen referenziert wird!
*/