#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Laptop.h"
using namespace std;

Laptop daftar[100];
int jumlah = 0;


// Fungsi Tambah Data
void tambahData(int id, string nama, double harga, string kategori,
                string merk, int garansi, int stok, string warna,
                string prosesor, int ram, int storage, double layar,
                bool dariUser = true) {
    daftar[jumlah] = Laptop(id, nama, harga, kategori, merk, garansi, stok, warna,
                            prosesor, ram, storage, layar);
    jumlah++;
    if(dariUser) {
        cout << "Data berhasil ditambahkan!\n";
    }
}


// Fungsi Tampilkan Data
void tampilData() {
    if (jumlah == 0) {
        cout << "Belum ada data.\n";
        return;
    }

    vector<string> headers = {"ID","Nama","Harga","Kategori","Merk","Garansi",
                              "Stok","Warna","Prosesor","RAM","Storage","Layar"};
    vector<int> widths(headers.size());
    for (int i = 0; i < headers.size(); i++) widths[i] = headers[i].size();

    // hitung lebar tiap kolom berdasarkan data
    for (int i = 0; i < jumlah; i++) {
        Laptop &l = daftar[i];
        vector<string> vals = {
            to_string(l.getId()), l.getNama(), to_string((long) l.getHarga()),
            l.getKategori(), l.getMerk(), to_string(l.getGaransi()),
            to_string(l.getStok()), l.getWarna(), l.getProsesor(),
            to_string(l.getRam()), to_string(l.getStorage()), to_string(l.getLayar())
        };
        for (int j = 0; j < vals.size(); j++) {
            widths[j] = max(widths[j], (int)vals[j].size());
        }
    }

    auto garis = [&]() {
        for (int w : widths) cout << "+" << string(w + 2, '-');
        cout << "+\n";
    };

    // cetak header
    garis();
    for (int i = 0; i < headers.size(); i++) {
        cout << "| " << left << setw(widths[i]) << headers[i] << " ";
    }
    cout << "|\n";
    garis();

    // cetak data
    for (int i = 0; i < jumlah; i++) {
        Laptop &l = daftar[i];
        vector<string> vals = {
            to_string(l.getId()), l.getNama(), to_string((long) l.getHarga()),
            l.getKategori(), l.getMerk(), to_string(l.getGaransi()),
            to_string(l.getStok()), l.getWarna(), l.getProsesor(),
            to_string(l.getRam()), to_string(l.getStorage()), to_string(l.getLayar())
        };
        for (int j = 0; j < vals.size(); j++) {
            cout << "| " << left << setw(widths[j]) << vals[j] << " ";
        }
        cout << "|\n";
    }
    garis();
}


// Main
int main() {
    // 5 data awal hardcode
    tambahData(1, "Laptop A", 7500000, "Laptop", "Asus", 24, 10, "Hitam", "i5", 8, 512, 15.6, false);
    tambahData(2, "Laptop B", 9500000, "Laptop", "Lenovo", 24, 8, "Silver", "i7", 16, 1024, 16.0, false);
    tambahData(3, "Laptop C", 5500000, "Laptop", "Acer", 12, 5, "Hitam", "Ryzen 5", 8, 256, 14.0, false);
    tambahData(4, "Laptop D", 12500000, "Laptop", "macbook", 36, 3, "Pink", "i9", 32, 1024, 17.3, false);
    tambahData(5, "Laptop E", 6500000, "Laptop", "HP", 18, 7, "Putih", "Ryzen 7", 16, 512, 15.6, false);

    // Menu interaktif
    int pilihan = -1;
    while (pilihan != 0) {
        cout << "\nMenu Toko Elektronik:\n";
        cout << "1. Tambah Data\n";
        cout << "2. Tampilkan Data\n";
        cout << "0. Keluar\n";
        cout << "Pilih: "; cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            int id, garansi, stok, ram, storage;
            double harga, layar;
            string nama, kategori, merk, warna, prosesor;

            cout << "ID: "; cin >> id; cin.ignore();
            cout << "Nama: "; getline(cin, nama);
            cout << "Harga: "; cin >> harga; cin.ignore();
            cout << "Kategori: "; getline(cin, kategori);
            cout << "Merk: "; getline(cin, merk);
            cout << "Garansi (bulan): "; cin >> garansi; cin.ignore();
            cout << "Stok: "; cin >> stok; cin.ignore();
            cout << "Warna: "; getline(cin, warna);
            cout << "Prosesor: "; getline(cin, prosesor);
            cout << "RAM (GB): "; cin >> ram; cin.ignore();
            cout << "Storage (GB): "; cin >> storage; cin.ignore();
            cout << "Layar (inch): "; cin >> layar; cin.ignore();

            tambahData(id, nama, harga, kategori, merk, garansi, stok, warna,
                       prosesor, ram, storage, layar);
        }
        else if (pilihan == 2) {
            tampilData();
        }
        else if (pilihan == 0) {
            cout << "Keluar program.\n";
        }
        else {
            cout << "Pilihan tidak ada.\n";
        }
    }

    return 0;
}
