#include <iostream>

class Bruch {
    public:
        Bruch(int zaehler, int nenner);
        Bruch add(Bruch bruch);
        Bruch sub(Bruch bruch);
        void print();
    
    private:
        int zaehler;
        int nenner;
};

Bruch::Bruch(int z, int n) {
    zaehler = z;
    nenner = n;
}

Bruch Bruch::add(Bruch bruch) {
    if (nenner == bruch.nenner) {
        return Bruch(zaehler + bruch.zaehler, nenner);
    } else {
        return Bruch((zaehler * bruch.nenner) + (bruch.zaehler * nenner), nenner * bruch.nenner);
    }
}

Bruch Bruch::sub(Bruch bruch) {
    if (nenner == bruch.nenner) {
        return Bruch(zaehler - bruch.zaehler, nenner);
    } else {
        return Bruch((zaehler * bruch.nenner) - (bruch.zaehler * nenner), nenner * bruch.nenner);
    }
}

void Bruch::print() {
    std::cout << zaehler << "/" << nenner << std::endl;
}