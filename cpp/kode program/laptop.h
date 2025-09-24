#ifndef LAPTOP_H
#define LAPTOP_H

#include "Elektronik.h"

class Laptop : public Elektronik {
private:
    string prosesor;// Tipe prosesor laptop
    int ram;// Kapasitas RAM dalam GB
    int storage;// Kapasitas storage (HDD/SSD)
    double layar;// Ukuran layar dalam inci

public:
    Laptop() : Elektronik() { prosesor=""; ram=0; storage=0; layar=0; }  
        // Constructor default
    Laptop(int i,string n,double h,string k,string m,int g,int s,string w,
           string p,int r,int st,double l)
        : Elektronik(i,n,h,k,m,g,s,w) {
        prosesor=p; ram=r; storage=st; layar=l;// Constructor dengan parameter
    }
    ~Laptop() {}// Destructor

    void tampilkan() override {// Menampilkan data produk + atribut Elektronik + Laptop
        Elektronik::tampilkan();
        cout << setw(15) << prosesor
             << setw(8) << ram
             << setw(10) << storage
             << setw(8) << layar << endl;
    }

    // Getter & Setter
    string getProsesor() { return prosesor; }
    void setProsesor(string p) { prosesor=p; }

    int getRam() { return ram; }
    void setRam(int r) { ram=r; }

    int getStorage() { return storage; }
    void setStorage(int st) { storage=st; }

    double getLayar() { return layar; }
    void setLayar(double l) { layar=l; }
};

#endif  
