#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include "pasien.h"


#define next(p) p->next
#define almtpenyakit(p) p->almtpenyakit
#define almtpasien(p) p->almtpasien
#define first(L) L.first


typedef struct elmrelasi *adr_r;

struct elmrelasi {
    adr_pa almtpasien ;
    adr_r next;
    adr_P almtpenyakit ;
};
struct listrelasi {
    adr_r first;
};
void createListR(listrelasi &L);
void allocateR(adr_r &ra, adr_P p, adr_pa pa);
void deallocateR(adr_r &ra);
void insertfirstR(listrelasi &L, adr_r R);





#endif // RELASI_H_INCLUDED
