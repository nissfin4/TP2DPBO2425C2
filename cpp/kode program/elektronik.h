#ifndef ELEKTRONIK_H
#define ELEKTRONIK_H

#include "Produk.h"

class Elektronik : public Produk {
protected:
    string merk;// Merk produk elektronik
    int garansi;// Lama garansi
    int stok;// Jumlah stok tersedia
    string warna;// Warna produk

public:
    Elektronik() : Produk() { merk=""; garansi=0; stok=0; warna=""; } // Constructor default
    Elektronik(int i,string n,double h,string k,string m,int g,int s,string w)
        : Produk(i,n,h,k) { merk=m; garansi=g; stok=s; warna=w; }     // Constructor dengan parameter
    virtual ~Elektronik() {}// Destructor virtual

    void tampilkan() override {// Menampilkan data produk + atribut Elektronik
        Produk::tampilkan();
        cout << setw(12) << merk
             << setw(10) << garansi
             << setw(8) << stok
             << setw(10) << warna;
    }

    // Getter & Setter
    string getMerk() { return merk; }
    void setMerk(string m) { merk=m; }

    int getGaransi() { return garansi; }
    void setGaransi(int g) { garansi=g; }

    int getStok() { return stok; }
    void setStok(int s) { stok=s; }

    string getWarna() { return warna; }
    void setWarna(string w) { warna=w; }
};

#endif 
