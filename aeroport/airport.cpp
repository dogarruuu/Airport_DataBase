#include <iostream>
#include "airport.h"
using namespace std;

int main() {

    cout << "\n\t1 - Afisarea datelor despre PASAGERI\n\t2 - Afisarea datelor despre ZBOR\n\t3 - Adauga Pasager\n\t4 - Adauga Cursa\n\t5 - Exclude Pasager\n\t6 - Exclude Zbor\n\t7 - Actualizare date Pasageri\n\t8 - Actualizare date Zbor\n\t9 - Sortare Pasageri\n\t10 - Pret zboruri\n\t11 - Informatie despre zboruri";
    cout << "\n\n\t"; int n; cin >> n;
    switch (n) {
    case 1: passenger p[100];
    afisarePassenger(p); break;
    case 2: flight f[100];
    afisareFlight(f); break;
    case 3: adaugaPassenger(p); break;
    case 4: adaugaFlight(f); break;
    case 5: excludePassenger (p); break;
    case 6: excludeFlight (f); break;
    case 7: actualizarePassenger (p); break;
    case 8: actualizareFlight (f); break;
    case 9: sortarePassenger (p); break;
    case 10: MaxMinFlight (f); break;
    case 11: informatie (f); break;
}}