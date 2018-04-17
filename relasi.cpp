#include "relasi.h"

void createListR(listrelasi &L){
    first(L) = NULL;
}

void allocateR(adr_r &ra, adr_P p, adr_pa pa){
    ra = new elmrelasi;
    almtpenyakit(ra)=p;
    almtpasien(ra)=pa;
    next(ra) = NULL;
}
void deallocateR(adr_r &ra){
    delete ra;
    ra = NULL;
}
void insertfirstR(listrelasi &L, adr_r R){
    if (first(L) = NULL){
        first(L) = R;
    }else{
        next(R) = first(L);
        first(L) = R;
    }

}

