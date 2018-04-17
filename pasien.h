#ifndef PASIEN_H_INCLUDED
#define PASIEN_H_INCLUDED
#include "penyakit.h"


#define next(p) p->next
#define info(p) p->info
#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev

//using namespace std;
typedef struct elmPasien *adr_pa;

struct infoPasien{
    string namaPasien;

    };
struct elmPasien {
    infoPasien info;
    adr_pa next;
    adr_pa prev;
};
struct listPasien {
    adr_pa first;
    adr_pa last;
};
void createListPa(listPasien &L);
void allocatePa(adr_pa &Pa, string nama);
void deallocatePa(adr_pa &Pa);
void insertlastPa(listPasien &L, adr_pa Pa);
void tampilPasien(listPasien Lp);
adr_pa cariNama(listPasien Lp, string nm);
void hapusDataPasien(listPasien &Lp, adr_pa P);


#endif // PASIEN_H_INCLUDED
