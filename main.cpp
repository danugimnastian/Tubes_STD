
#include "relasi.h"


int main()
{
    int pilihan;
    string namaPasien,namapenyakit;
    cout << "Yow Bro Bro" << endl;
    listpenyakit L;
    createListP(L);
    listPasien Lp;
    createListPa(Lp);
    listrelasi Lr;
    createListR(Lr);
    adr_P P=NULL;
    adr_pa Pa=NULL;
    char menu='y';
    do{
    cout<<"Data berobat" << endl;
    cout<<"Pilihan" << endl;
    cout<<"1. Penambahan penyakit" << endl;
    cout<<"2. Penambahan pasien" << endl;
    cout<<"3. Menghapus data pasien" << endl;
    cout<<"4. Menghapus data penyakit" << endl;
    cout<<"5. Menampilkan seluruh data pasien dan penyakit" << endl;
    cout<<"6. Menampilkan data pasien yang memiliki penyakit tertentu" << endl;
    cout<<"7. Menampilkan data penyakit yang dimiliki oleh pasien tertentu" << endl;
    cout<<"8. Menampilkan 5 data penyakit terbanyak" << endl;

    cin>> pilihan;

    switch(pilihan){

    case 1 :
        cout<<"Nama penyakit : ";
        cin>> namapenyakit;
        allocateP(P,namapenyakit);
        insertTerurut(L,P);
        break;

    case 2 :
        cout<<"Nama pasien : ";
        cin>> namaPasien;

        if(cariNama(Lp , namaPasien) != NULL){
            cout<<"Pasien Sudah Ada"<<endl;
        }else{

            allocatePa(Pa, namaPasien);
            cout<<"Masukan Nama Penyakit "<<namaPasien<<" : "<<endl;
            string penyakit;
            cin>>penyakit;
            adr_P q = cariPenyakit(L  ,  penyakit);
            if(q == NULL){
                cout<<"Maaf Penyakit Belum ada di data Penyimpanan"<<endl;
            }else{
                insertlastPa(Lp,Pa);
                //cout<<info(first(Lp)).namaPasien<<endl;
                adr_r r = NULL;
                allocateR( r , q , Pa);
                insertfirstR(Lr , r);
                cout<<"Data Berhasil Ditambahkan"<<endl;
            }



        }
        break;

    case 3 :{
        char tampil;
        string mn;
        cout <<"hapus pasien"<<endl;
        cout <<"tampilkan nama pasien ? :";cin>>tampil;
        if(tampil=='y'||tampil=='Y'){
          tampilPasien(Lp);
        }
        cout<<"ingin menghapus data dengan nama";cin>>mn;
        adr_pa w = cariNama(Lp,mn);
        if( w !=NULL){
            hapusDataPasien(Lp,w);
            cout<<"data sudah dihapus";
        }else{
            cout<<"Data tidak ditemukan";
        }
        break;
    }

    case 4 :{
            char tampil;
            string pn;
            cout <<"hapus penyakit"<<endl;
            cout <<"tampilkan penyakit ? :";cin>>tampil;
            if(tampil=='y'||tampil=='Y'){
                tampilPasien(Lp);
            }
            cout<<"ingin menghapus data dengan nama";cin>>pn;
            adr_P P=cariPenyakit(L,pn);
            if(P!=NULL){

                ///hapusDataPasien(Lp,P);
                cout<<"data sudah dihapus";
            }else{
                cout<<"Data tidak ditemukan";
            }
            break;
        }

    }
    cout<<"kembali ke menu ?";cin>>menu;
    }while(menu=='y');

    return 0;


}


