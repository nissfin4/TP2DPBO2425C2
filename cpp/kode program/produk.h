#ifndef PRODUK_H      
#define PRODUK_H     

#include <iostream>   
#include <iomanip>    
using namespace std;

class Produk {//Deklarasi class Produk
protected:
    int id;// Variabel untuk menyimpan ID produk
    string nama;// Variabel untuk menyimpan nama produk
    double harga;// Variabel untuk menyimpan harga produk
    string kategori;// Variabel untuk menyimpan kategori produk

public: 
    Produk() { id=0; nama=""; harga=0; kategori=""; }//Constructor default, inisialisasi semua atribut dengan nilai default
    Produk(int i, string n, double h, string k) {//Constructor dengan parameter untuk inisialisasi atribut
        id=i; nama=n; harga=h; kategori=k;//Setiap atribut sesuai nilai yang diberikan
    }
    virtual ~Produk() {}  

    virtual void tampilkan() {//Fungsiuntuk menampilkan data produk
        cout << setw(5) << id
             << setw(15) << nama
             << setw(12) << fixed << setprecision(0) << harga
             << setw(12) << kategori;
    }

    // Getter & Setter
    int getId() { return id; }// Mengembalikan nilai ID
    void setId(int i) { id=i; }// Mengubah nilai ID

    string getNama() { return nama; } // Mengembalikan nama produk
    void setNama(string n) { nama=n; } // Mengubah nama produk

    double getHarga() { return harga; }// Mengembalikan harga produk
    void setHarga(double h) { harga=h; } // Mengubah harga produk

    string getKategori() { return kategori; }// Mengembalikan kategori produk
    void setKategori(string k) { kategori=k; }// Mengubah kategori produk
};

#endif  