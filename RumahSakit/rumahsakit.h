#ifndef RUMAHSAKIT_H_INCLUDED
#define RUMAHSAKIT_H_INCLUDED
#include <iostream>
#include <string>
#define first(L) ((L).first)
#define next(P) (P)->next
#define info(P) (P)->info
#define Nil NULL
using namespace std;
typedef struct elmlist *address;

struct rumahSakit {
    string namaPasien;
    int idPasien;
    string riwayatPenyakit;
};

typedef rumahSakit infotype;

struct elmlist {
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList(List &RIN);

address allocate(infotype x);

void insertFirst(List &RIN, address P);

void insertLast(List &RIN, address P);

void insertAfter(List &RIN, address P, address prec);

void deleteFirst(List &RIN, address P);

void deleteLast(List &RIN, address P);

void deleteAfter(List &RIN, address P, address prec);

void show(List RIN);

void sortById(List &RIN);

address searchByPosisi(List RIN, int data);
#endif // RUMAHSAKIT_H_INCLUDED
