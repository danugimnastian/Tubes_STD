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
    if (first(L) == NULL){
        first(L) = R;
    }else{
        next(R) = first(L);
        first(L) = R;
    }

}

void PrintPasien(listrelasi lr , adr_pa pa){

    adr_r r = first(lr);
    cout<<info(pa).namaPasien<<endl;
    do{
        if(almtpasien(r) == pa){
            cout<<"  "<< info( almtpenyakit(r)).namaPenyakit<<endl;
        }

       r = next(r);
    }while(r != first(lr));


}

///mengeluarkan semua nama pasien
void PrintAllPasien(listrelasi lr , listPasien lp){

    adr_pa p = first(lp);

    while(p != NULL){
        PrintPasien(lr , p);
        p = next(p);
    }



}

