class Produk:
    def __init__(self, id, nama, harga, kategori):
        self.__id = id # ID produk (private)
        self.__nama = nama# Nama produk (private)
        self.__harga = harga# Harga produk (private)
        self.__kategori = kategori  # Kategori produk (private)

    # Getter & Setter untuk mengakses dan mengubah atribut private
    def get_id(self): return self.__id
    def set_id(self, value): self.__id = value

    def get_nama(self): return self.__nama
    def set_nama(self, value): self.__nama = value

    def get_harga(self): return self.__harga
    def set_harga(self, value): self.__harga = value

    def get_kategori(self): return self.__kategori
    def set_kategori(self, value): self.__kategori = value
