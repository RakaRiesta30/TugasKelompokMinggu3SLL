#include "rumahsakit.h"
using namespace std;

int main()
{
    List RIN;
    infotype data_pasien;
    address P, cariPosisi;
    string namaPasien,riwayatPasien;
    int idPasien,precPosisi;
    createList(RIN);

    cout << "Masukkan ID Pasien, Nama Pasien, dan Riwayat Penyakit Pasien : ";
    cin >> idPasien >> namaPasien >> riwayatPasien;
    data_pasien.idPasien = idPasien;
    data_pasien.namaPasien = namaPasien;
    data_pasien.riwayatPenyakit = riwayatPasien;
    P = allocate(data_pasien);
    insertFirst(RIN,P);

    cout << "Masukkan ID Pasien, Nama Pasien, dan Riwayat Penyakit Pasien : ";
    cin >> idPasien >> namaPasien >> riwayatPasien;
    data_pasien.idPasien = idPasien;
    data_pasien.namaPasien = namaPasien;
    data_pasien.riwayatPenyakit = riwayatPasien;
    P = allocate(data_pasien);
    insertLast(RIN,P);

    cout << "Masukkan ID Pasien, Nama Pasien, dan Riwayat Penyakit Pasien : ";
    cin >> idPasien >> namaPasien >> riwayatPasien;
    data_pasien.idPasien = idPasien;
    data_pasien.namaPasien = namaPasien;
    data_pasien.riwayatPenyakit = riwayatPasien;
    P = allocate(data_pasien);
    insertFirst(RIN,P);

    cout << "Masukkan ID Pasien, Nama Pasien, dan Riwayat Penyakit Pasien : ";
    cin >> idPasien >> namaPasien >> riwayatPasien;
    data_pasien.idPasien = idPasien;
    data_pasien.namaPasien = namaPasien;
    data_pasien.riwayatPenyakit = riwayatPasien;
    P = allocate(data_pasien);
    insertLast(RIN,P);

    cout << "Masukkan ID Pasien, Nama Pasien, dan Riwayat Penyakit Pasien : ";
    cin >> idPasien >> namaPasien >> riwayatPasien;
    data_pasien.idPasien = idPasien;
    data_pasien.namaPasien = namaPasien;
    data_pasien.riwayatPenyakit = riwayatPasien;
    P = allocate(data_pasien);

    cout << "Masukkan data setelah posisi ke-";
    cin >> precPosisi;
    cariPosisi = searchByPosisi(RIN,precPosisi);
    insertAfter(RIN,P,cariPosisi);
    cout << "Masukkan ID Pasien, Nama Pasien, dan Riwayat Penyakit Pasien : ";
    cin >> idPasien >> namaPasien >> riwayatPasien;
    data_pasien.idPasien = idPasien;
    data_pasien.namaPasien = namaPasien;
    data_pasien.riwayatPenyakit = riwayatPasien;
    P = allocate(data_pasien);

    cout << "Masukkan data setelah posisi ke-";
    cin >> precPosisi;
    cariPosisi = searchByPosisi(RIN,precPosisi);
    insertAfter(RIN,P,cariPosisi);
    show(RIN);

    cout << "Hapus data setelah posisi ke-";
    cin >> precPosisi;
    cariPosisi = searchByPosisi(RIN,precPosisi);
    deleteAfter(RIN,P,cariPosisi);

    cout << "Hapus data setelah posisi ke-";
    cin >> precPosisi;
    cariPosisi = searchByPosisi(RIN,precPosisi);
    deleteAfter(RIN,P,cariPosisi);
    sortById(RIN);
    show(RIN);
    return 0;
}
