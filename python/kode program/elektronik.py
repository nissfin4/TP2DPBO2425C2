from produk import Produk# Mengimpor class Produk dari file produk.py

class Elektronik(Produk):# Deklarasi class Elektronik, turunan dari Produk
    def __init__(self, id, nama, harga, kategori, merk, garansi, stok, warna):
        super().__init__(id, nama, harga, kategori)  # Memanggil constructor class Produk
        self.__merk = merk# Merk produk elektronik (atribut private)
        self.__garansi = garansi# Lama garansi (atribut private)
        self.__stok = stok# Jumlah stok produk (atribut private)
        self.__warna = warna# Warna produk (atribut private)

    # Getter & Setter
    def get_merk(self): return self.__merk
    def set_merk(self, value): self.__merk = value

    def get_garansi(self): return self.__garansi
    def set_garansi(self, value): self.__garansi = value

    def get_stok(self): return self.__stok
    def set_stok(self, value): self.__stok = value

    def get_warna(self): return self.__warna
    def set_warna(self, value): self.__warna = value
