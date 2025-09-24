from laptop import Laptop   

daftar = []  # List untuk menampung semua objek Laptop

# Fungsi untuk menambahkan data laptop ke daftar
def tambah_data(id, nama, harga, kategori, merk, garansi, stok, warna,
                prosesor, ram, storage, layar, dari_user=True):
    daftar.append(Laptop(id, nama, harga, kategori, merk, garansi, stok, warna,
                         prosesor, ram, storage, layar))
    if dari_user:  # Hanya tampilkan pesan kalau data ditambahkan oleh user
        print("Data berhasil ditambahkan!")

# Fungsi untuk menampilkan data laptop dalam bentuk tabel
def tampil_data():
    if not daftar:
        print("Belum ada data.")  # Jika list kosong
        return

    # Header tabel
    headers = ["ID","Nama","Harga","Kategori","Merk","Garansi",
               "Stok","Warna","Prosesor","RAM","Storage","Layar"]
    widths = [len(h) for h in headers]# Lebar kolom awal berdasarkan header

    # Hitung lebar kolom maksimum berdasarkan data
    for l in daftar:
        values = [
            str(l.get_id()), l.get_nama(), str(int(l.get_harga())), l.get_kategori(), l.get_merk(),
            str(l.get_garansi()), str(l.get_stok()), l.get_warna(), l.get_prosesor(),
            str(l.get_ram()), str(l.get_storage()), str(l.get_layar())
        ]
        for i, v in enumerate(values):
            widths[i] = max(widths[i], len(v))

    # Buat garis pemisah tabel
    garis = "+" + "+".join("-"*(w+2) for w in widths) + "+"

    # Cetak header
    print(garis)
    print("".join(f"| {headers[i]:<{widths[i]}} " for i in range(len(headers))) + "|")
    print(garis)

    # Cetak setiap baris data
    for l in daftar:
        values = [
            str(l.get_id()), l.get_nama(), str(int(l.get_harga())), l.get_kategori(), l.get_merk(),
            str(l.get_garansi()), str(l.get_stok()), l.get_warna(), l.get_prosesor(),
            str(l.get_ram()), str(l.get_storage()), str(l.get_layar())
        ]
        print("".join(f"| {values[i]:<{widths[i]}} " for i in range(len(values))) + "|")
    print(garis)

# Data awal supaya program langsung ada isi saat dijalankan
tambah_data(1,"Laptop A",7500000,"Laptop","Asus",24,10,"Hitam","i5",8,512,15.6,False)
tambah_data(2,"Laptop B",9500000,"Laptop","Lenovo",24,8,"Silver","i7",16,1024,16.0,False)
tambah_data(3,"Laptop C",5500000,"Laptop","Acer",12,5,"Hitam","Ryzen 5",8,256,14.0,False)
tambah_data(4,"Laptop D",12500000,"Laptop","Macbook",36,3,"Pink","i9",32,1024,17.3,False)
tambah_data(5,"Laptop E",6500000,"Laptop","HP",18,7,"Putih","Ryzen 7",16,512,15.6,False)

# Menu interaktif menggunakan while loop
pilihan = ""
while pilihan != "0":
    print("\nMenu Toko Elektronik:")
    print("1. Tambah Data")
    print("2. Tampilkan Data")
    print("0. Keluar")
    pilihan = input("Pilih: ")

    if pilihan == "1":
        # Input data baru dari user
        id = int(input("ID: "))
        nama = input("Nama: ")
        harga = float(input("Harga: "))
        kategori = input("Kategori: ")
        merk = input("Merk: ")
        garansi = int(input("Garansi (bulan): "))
        stok = int(input("Stok: "))
        warna = input("Warna: ")
        prosesor = input("Prosesor: ")
        ram = int(input("RAM (GB): "))
        storage = int(input("Storage (GB): "))
        layar = float(input("Layar (inch): "))
        tambah_data(id,nama,harga,kategori,merk,garansi,stok,warna,prosesor,ram,storage,layar)
    elif pilihan == "2":
        tampil_data()  # Tampilkan tabel data laptop
    elif pilihan == "0":
        print("Keluar program.")
    else:
        print("Pilihan tidak ada.")
