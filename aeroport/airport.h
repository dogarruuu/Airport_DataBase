#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include "passenger.h"
#include "flight.h"

void afisarePassenger (passenger p[]) {
    ifstream pin ("Passenger.txt"); cout << endl;
    for (int i = 1; i <= 50; i ++) {
        pin >> p[i].id_calator >> p[i].nume_prenume >> p[i].existenta_bagajului >> p[i].id_cursa;
        cout << p[i].id_calator << "\t" << p[i].nume_prenume << "\t" << p[i].existenta_bagajului << "\t" << p[i].id_cursa << endl;
    }}

void afisareFlight (flight f[]) {
    ifstream fin ("Flight.txt"); cout << endl;
    for (int i = 1; i <= 50; i ++) {
        fin >> f[i].id_cursa >> f[i].model_avion >> f[i].destinatia >> f[i].ora_decolarii >> f[i].minuta_decolarii >> f[i].ziua_saptamanii >> f[i].pretul;
        cout << f[i].id_cursa << "\t" << f[i].model_avion << "\t" << f[i].destinatia << "\t" << f[i].ora_decolarii << "\t" << f[i].minuta_decolarii << "\t" << f[i].ziua_saptamanii << "\t" << f[i].pretul << endl;
    }}

void adaugaPassenger (passenger p[]) {
    int ap = 50;
    ofstream pout ("Passenger.txt", ios_base::app);
    string id_calator, nume_prenume, existenta_bagajului, id_cursa;
    cout << "ID calator: "; cin >> id_calator;
    cout << "Nume_Prenume: "; cin >> nume_prenume;
    cout << "Existenta bagajului: "; cin >> existenta_bagajului;
    cout << "ID cursa: "; cin >> id_cursa;
    pout << id_calator << "\t" << nume_prenume << "\t" << existenta_bagajului << "\t" << id_cursa;
    ap ++;
    }

void adaugaFlight (flight f[]) {
    int af = 50;
    ofstream fout ("Flight.txt", ios_base::app);
    string id_cursa, model_avion, destinatia, ora_decolarii, minuta_decolarii, ziua_saptamanii, pretul;
    cout << "ID cursa: "; cin >> id_cursa;
    cout << "Model avion: "; cin >> model_avion;
    cout << "Destinatia: "; cin >> destinatia;
    cout << "Ora decolarii: "; cin >> ora_decolarii;
    cout << "Minute decolarii: "; cin >> minuta_decolarii;
    cout << "Ziua saptamanii: "; cin >> ziua_saptamanii;
    cout << "Pretul: "; cin >> pretul;
    fout << id_cursa << "\t" << model_avion << "\t" << destinatia << "\t" << ora_decolarii << "\t" << minuta_decolarii << "\t" << ziua_saptamanii << "\t" << pretul;
    af ++;
}

void excludePassenger (passenger p[]) {
    ifstream pin ("Passenger.txt");
    ofstream pout ("newP.txt");
    string nume_prenume; cout << "\n\tNume_Prenume: "; cin >> nume_prenume;
    for (int i = 1; i <= 50; i ++) {
        string id_calator, name, existenta_bagajului, id_cursa;
        pin >> id_calator >> name >> existenta_bagajului >> id_cursa;
        if (name != nume_prenume) {
            pout << id_calator << "\t" << name << "\t" << existenta_bagajului << "\t" << id_cursa << endl;
        }}
        pin.close(); pout.close();
        remove("Passenger.txt");
        rename ("newP.txt", "Passenger.txt");
}

void excludeFlight (flight f[]) {
    ifstream fin ("Flight.txt");
    ofstream fout ("newF.txt");
    string id; cout << "ID cursei: "; cin >> id;
    for (int i = 1; i <= 50; i ++) {
        string id_cursa, model_avion, destinatia, ora_decolarii, minuta_decolarii, ziua_saptamanii, pretul;
        fin >> id_cursa >> model_avion >> destinatia >> ora_decolarii >> minuta_decolarii >> ziua_saptamanii >> pretul;
        if (id != id_cursa) {
            fout << id_cursa << "\t" << model_avion << "\t" << destinatia << "\t" << ora_decolarii << "\t" << minuta_decolarii << "\t" << ziua_saptamanii << "\t" << pretul << endl;
        }}
        fin.close(); fout.close();
        remove("Flight.txt");
        rename ("newF.txt", "Flight.txt");
}

void actualizarePassenger (passenger p[]) {
    ifstream pin ("Passenger.txt");
    ofstream pout ("newP.txt");
    string nume_prenume; cout << "Nume_Prenume: "; cin >> nume_prenume;
    for (int i = 1; i <= 50; i ++) {
        string id_calator, name, existenta_bagajului, id_cursa;
        pin >> id_calator >> name >> existenta_bagajului >> id_cursa;
        if (name != nume_prenume) {
            pout << id_calator << "\t" << name << "\t" << existenta_bagajului << "\t" << id_cursa << endl;
        }
        else {
            cout << "ID calator: "; cin >> id_calator;
            cout << "Nume_Prenume: "; cin >> nume_prenume;
            cout << "Prezenta bagajului: "; cin >> existenta_bagajului;
            cout << "ID cursa: "; cin >> id_cursa;
        }}
        pin.close(); pout.close();
        remove("Passenger.txt");
        rename ("newP.txt", "Passenger.txt");
    }

void actualizareFlight (flight f[]) {
    ifstream fin ("Flight.txt");
    ofstream fout ("newF.txt");
    string id_cursa; cout << "ID cursa: "; cin >> id_cursa;
    for (int i = 1; i <= 50; i ++) {
        string id, model_avion, destinatia, ora_decolarii, minuta_decolarii, ziua_saptamanii, pretul;
        fin >> id >> model_avion >> destinatia >> ora_decolarii >> minuta_decolarii >> ziua_saptamanii >> pretul;
        if (id != id_cursa) {
            fout << id << "\t" << model_avion << "\t" << destinatia << "\t" << ora_decolarii << "\t" << minuta_decolarii << "\t" << ziua_saptamanii << "\t" << pretul << endl;
        }
        else {
            cout << "Id cursa: "; cin >> id_cursa;
            cout << "Model avion: "; cin >> model_avion;
            cout << "Destinatia: "; cin >> destinatia;
            cout << "Ora decolarii: "; cin >> ora_decolarii;
            cout << "Minuta decolarii:"; cin >> minuta_decolarii;
            cout << "Ziua saptamanii: "; cin >> ziua_saptamanii;
            cout << "Pret: "; cin >> pretul;
        }}
        fin.close(); fout.close();
        remove("Flight.txt");
        rename ("newF.txt", "Flight.txt");
    }

void sortarePassenger (passenger p[]){
    struct passenger temp;
    ifstream pin ("Passenger.txt"); cout << endl;
    for (int i = 1; i <= 50; i ++) {
        pin >> p[i].id_calator >> p[i].nume_prenume >> p[i].existenta_bagajului >> p[i].id_cursa; }
        for (int i = 1; i <= 50; i ++){
            for (int j = i+1; j <= 50; j ++) {
                if (strcmp(p[i].nume_prenume, p[j].nume_prenume) > 0) {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }}}
        for (int i = 1; i <= 50; i ++) {
            cout << p[i].id_calator << "\t" << p[i].nume_prenume << "\t" << p[i].existenta_bagajului << "\t" << p[i].id_cursa << endl;
        }}

void MaxMinFlight (flight f[]) {
    struct flight temp;
    ifstream fin ("Flight.txt"); cout << endl;
    for (int i = 1; i <= 50; i ++) {
        fin >> f[i].id_cursa >> f[i].model_avion >> f[i].destinatia >> f[i].ora_decolarii >> f[i].minuta_decolarii >> f[i].ziua_saptamanii >> f[i].pretul; }
        for (int i = 1; i <= 50; i ++){
            for (int j = i+1; j <= 50; j ++) {
                if (f[j].pretul < f[i].pretul) {
                    temp = f[i];
                    f[i] = f[j];
                    f[j] = temp;
                }}}
        for (int i = 1; i <= 50; i ++) {
            cout << f[i].pretul << "\t" << f[i].id_cursa << "\t" << f[i].model_avion << "\t" << f[i].destinatia << "\t" << f[i].ora_decolarii << "\t" << f[i].minuta_decolarii << "\t" << f[i].ziua_saptamanii << endl;

 }
            cout << endl;
            cout << f[1].pretul << "\t" << f[1].id_cursa << "\t" << f[1].model_avion << "\t" << f[1].destinatia << "\t" << f[1].ora_decolarii << "\t" << f[1].minuta_decolarii << "\t" << f[1].ziua_saptamanii << endl;
            cout << f[50].pretul << "\t" << f[50].id_cursa << "\t" << f[50].model_avion << "\t" << f[50].destinatia << "\t" << f[50].ora_decolarii << "\t" << f[50].minuta_decolarii << "\t" << f[50].ziua_saptamanii << endl;
 }

void informatie (flight f[]) {
    ifstream fin ("Flight.txt");
    string destination; cout << "  \nDestinatia: "; cin >> destination;
    for (int i = 1; i <= 50; i ++) {
        string id_cursa, model_avion, destinatia, ora_decolarii, minuta_decolarii, ziua_saptamanii, pretul;
        fin >> id_cursa >> model_avion >> destinatia >> ora_decolarii >> minuta_decolarii >> ziua_saptamanii >> pretul;
        if (destination == destinatia) {
            cout << id_cursa << "\t" << model_avion << "\t" << destinatia << "\t" << ora_decolarii << "\t" << minuta_decolarii << "\t" << ziua_saptamanii << "\t" << pretul << endl;
        }}
        fin.close();
        }