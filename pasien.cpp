#include "pasien.h"

void createListPa(listPasien &L){
    first(L) = NULL;
    last(L) = NULL;
}
void allocatePa(adr_pa &Pa, string nama){
    Pa = new elmPasien;
    info(Pa).namaPasien = nama;
    next(Pa) = NULL;
    prev(Pa)=NULL;
    }

void deallocatePa(adr_pa &Pa) {
    delete Pa;
    Pa = NULL;
}

void insertlastPa(listPasien &L, adr_pa Pa){
    if (first(L) == NULL && last(L) == NULL){
        first(L) = Pa;
        last(L) = Pa;
        next(Pa) = NULL;
        prev(Pa) = NULL;

    }
    else{
        next(Pa)=NULL;
        next(last(L)) = Pa;
        prev(Pa) = last(L);
        last(L) = Pa;
    }
}
void tampilPasien(listPasien Lp){
    adr_pa P =first(Lp);
    while(P!=last(Lp)){
        cout<<info(P).namaPasien<<endl;
        P=next(P);
    }
    cout<<info(P).namaPasien<<endl;
}
adr_pa cariNama(listPasien Lp, string nm){
    adr_pa P = first(Lp);
    while(P!=NULL && info(P).namaPasien != nm){
        P = next(P);
    }
    return P;
}
void hapusDataPasien(listPasien &Lp, adr_pa P){
    adr_pa q;
    q = first(Lp);
    if (P == first(Lp) && P == last(Lp)) {
        first(Lp) = NULL;
        last(Lp) = NULL;
    } else if (P == first(Lp)){
        first(Lp) = next(P);
        next(P) = NULL;
        prev(first(Lp)) = NULL;
    } else if (P == last(Lp)){
        while (next(q) != P){
                q = next(q);
        }
        last(Lp) = q;
        next(q) = NULL;
        prev(P) = NULL;
    } else{
        while (next(q) != P){
                q = next(q);
        }
        next(q) = next(P);
        prev(next(P)) = q;
        prev(P) = NULL;
        next(P) = NULL;
    }
}


