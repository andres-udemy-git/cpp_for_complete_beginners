#include <iostream>
#include "bruch.h"

int main() {
    Bruch bruch1 = Bruch(1, 2);
    Bruch bruch2 = Bruch(2, 2);

    Bruch ergebnis = bruch1.add(bruch2);

    ergebnis.print();
}
