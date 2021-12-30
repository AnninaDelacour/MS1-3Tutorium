#include "xmas_sort.h"


// This sorting algorithm is actually a gnome sort (https://de.wikipedia.org/wiki/Gnomesort)

void xmas_sort(int* array, const int n) {
    int i = 0; // Der Startindex befindet sich auf der linken Seite des Arrays
    while (i <= n-2) {
        if (array[i] > array[i+1]) { // Die Geschenke müssen vertauscht werden; das erreichen wir durch die Verwendung
            int tmp = array[i];     // von temporären Variablen, in denen wir zwischenspeichern können
            array[i] = array[i+1];
            array[i+1] = tmp;
            if (i == 0) {
                i++;  // Gehe einen Schritt nach rechts in der Liste, wenn keine Geschenke mehr auf der linken Seite vorhanden sind
            } else {
                i--; // Andernfalls, gehe einen Schritt zur linken Seite
            }
        } else { // Wenn nichts zutrifft, muss kein Vertauschen von Geschenken angewendet werden
            i++; // und es kann ein Schritt Richtung rechts gemacht werden
        }
    }
}
