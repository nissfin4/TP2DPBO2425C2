from elektronik import Elektronik   

class Laptop(Elektronik):         
    def __init__(self, id, nama, harga, kategori, merk, garansi, stok, warna,
                 prosesor, ram, storage, layar):
        super().__init__(id, nama, harga, kategori, merk, garansi, stok, warna)
        self.__prosesor = prosesor# Tipe prosesor (atribut private)
        self.__ram = ram # Kapasitas RAM  (atribut private)
        self.__storage = storage# Kapasitas storage (atribut private)
        self.__layar = layar# Ukuran layar dalam inci (atribut private)

    # Getter & Setter
    def get_prosesor(self): return self.__prosesor
    def set_prosesor(self, value): self.__prosesor = value

    def get_ram(self): return self.__ram
    def set_ram(self, value): self.__ram = value

    def get_storage(self): return self.__storage
    def set_storage(self, value): self.__storage = value

    def get_layar(self): return self.__layar
    def set_layar(self, value): self.__layar = value
