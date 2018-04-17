#ifndef PENYAKIT_H_INCLUDED
#define PENYAKIT_H_INCLUDED
#include <iostream>

#define next(p) p->next
#define info(p) p->info
#define first(L) L.first

using namespace std;
typedef struct elmpenyakit *adr_P;
struct infoPenyakit{
    string namaPenyakit;

};
struct elmpenyakit {
    infoPenyakit info;
    adr_P next;
};
struct listpenyakit {
    adr_P first;
};

void createListP(listpenyakit &L);
void allocateP(adr_P &P, string nama);
void deallocateP(adr_P &P);
void findlast(listpenyakit L, adr_P &P);
void insertTerurut(listpenyakit &L, adr_P P );
adr_P cariPenyakit(listpenyakit L, string pn);
#endif // PENYAKIT_H_INCLUDED
