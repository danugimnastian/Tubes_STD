#include "penyakit.h"

void allocateP(adr_P &P, string nama){
    P = new elmpenyakit;
    info(P).namaPenyakit = nama;
    next(P) = NULL;

}
void createListP(listpenyakit &L) {
  first(L) = NULL;
}
void deallocateP(adr_P &P) {
    delete P;
    P = NULL;
}
void insertTerurut(listpenyakit &L, adr_P P ){
    adr_P Q= first(L);
    adr_P R=NULL;
    if(Q==NULL){
            first(L)=P;
            next(P)=P;
    }else{
        while(info(P).namaPenyakit>info(Q).namaPenyakit && next(Q)!=first(L)){
            R=Q;
            Q=next(Q);
        }

        if(info(P).namaPenyakit>info(Q).namaPenyakit){
            next(P)=first(L);
            next(Q)=P;
        }else if( info(P).namaPenyakit<=info(Q).namaPenyakit){
                if(Q==first(L)){
                    findlast(L,Q);
                    next(Q)=P;
                    next(P)=first(L);
                    first(L)=P;
                }else{
                    next(R)=P;
                    next(P)=Q;
                }
        }
        }
}

    void findlast(listpenyakit L, adr_P &P) {
        P = first(L);
            while(next(P) != first((L))){
                P = next(P);
            }
    }

adr_P cariPenyakit(listpenyakit L, string pn){
    adr_P    P = first(L);
    while(P!=NULL && info(P).namaPenyakit != pn){
        P = next(P);
    }
    return P;
}
