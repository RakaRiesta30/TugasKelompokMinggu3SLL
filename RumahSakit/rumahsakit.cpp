#include "rumahsakit.h"

void createList(List &RIN) {
    first(RIN) = NULL;
}

address allocate(infotype x){
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertFirst(List &RIN, address P) {
    if(first(RIN)==Nil){
        first(RIN)=P;
    } else {
        next(P)=first(RIN);
        first(RIN)=P;
    }
}

void insertLast(List &RIN, address P){
    address Q;
    if(first(RIN)==Nil){
        insertFirst(RIN,P);
    }else{
        Q = first(RIN);
        while(next(Q)!=Nil){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfter(List &RIN, address P, address prec){
    if(next(prec)==Nil){
        insertLast(RIN,P);
    } else {
        next(P)=next(prec);
        next(prec)=P;
    }
}

void deleteFirst(List &RIN, address P){
    if(first(RIN)==Nil){
        P = Nil;
    } else {
        P = first(RIN);
        first(RIN) = next(P);
        next(P) = Nil;
    }
}

void deleteLast(List &RIN, address P){
    address Q;
    if(first(RIN)==Nil){
        deleteFirst(RIN,P);
    }else{
        Q = first(RIN);
        while(next(next(Q))!=Nil){
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = Nil;
    }
}

void deleteAfter(List &RIN, address P, address prec){
    if(next(prec)==Nil){
        deleteLast(RIN,P);
    } else {
        P = next(prec);
        next(prec)=next(P);
        next(P)=Nil;
    }
}

void show(List RIN){
    address P;
    if(first(RIN)==Nil){
        cout << "List Kosong";
    } else {
        P = first(RIN);
        while(P != Nil){
            cout << "No ID Pasien : " << info(P).idPasien << endl;
            cout << "Nama Pasien : " << info(P).namaPasien << endl;
            cout << "Riwayat Penyakit Pasien : " << info(P).riwayatPenyakit << endl;
            P = next(P);
        }
    }
}

void sortById(List &RIN){
    address sortedList,P,Q;
    if(first(RIN)!=Nil&&next(first(RIN))!=Nil){
        P = first(RIN);
        sortedList = Nil;
        while(P!=Nil){
            first(RIN)=next(P);
            if(sortedList==Nil||info(sortedList).idPasien>info(P).idPasien){
                next(P) = sortedList;
                sortedList = P;
            } else {
                Q = sortedList;
                while(next(Q)!=Nil&&info(next(Q)).idPasien<info(P).idPasien){
                    Q = next(Q);
                }
                next(P)=next(Q);
                next(Q)=P;
            }
            P = first(RIN);
        }
        first(RIN) = sortedList;
    }
}

address searchByPosisi(List RIN, int data){
    address Q;
    Q = first(RIN);
    for(int i = 1;i<=data;i++){
        if(next(Q)!=Nil&&i!=data){
            Q=next(Q);
        }
    }
    return Q;
}
