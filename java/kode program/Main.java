import java.util.*; 

public class Main {
    static Laptop[] daftar = new Laptop[100];  // Array untuk menampung objek Laptop
    static int jumlah = 0;// Jumlah data Laptop yang tersimpan
    static Scanner sc = new Scanner(System.in); // Scanner untuk input user

    // Fungsi untuk menambah data Laptop
    static void tambahData(int id, String nama, double harga, String kategori,
                           String merk, int garansi, int stok, String warna,
                           String prosesor, int ram, int storage, double layar,
                           boolean dariUser) {
        daftar[jumlah++] = new Laptop(id, nama, harga, kategori, merk, garansi, stok, warna,
                                      prosesor, ram, storage, layar);
        if (dariUser) System.out.println("Data berhasil ditambahkan!");
    }

    // Fungsi untuk menampilkan data Laptop dalam bentuk tabel
    static void tampilData() {
        if (jumlah == 0) { // Jika belum ada data
            System.out.println("Belum ada data.");
            return;
        }

        String[] headers = {"ID","Nama","Harga","Kategori","Merk","Garansi",
                            "Stok","Warna","Prosesor","RAM","Storage","Layar"};

        // Hitung lebar tiap kolom berdasarkan header dan data
        int[] widths = new int[headers.length];
        for (int i = 0; i < headers.length; i++) widths[i] = headers[i].length();

        for (int i = 0; i < jumlah; i++) {
            Laptop l = daftar[i];
            String[] vals = {
                String.valueOf(l.getId()), l.getNama(), String.valueOf((long) l.getHarga()),
                l.getKategori(), l.getMerk(), String.valueOf(l.getGaransi()),
                String.valueOf(l.getStok()), l.getWarna(), l.getProsesor(),
                String.valueOf(l.getRam()), String.valueOf(l.getStorage()), String.valueOf(l.getLayar())
            };
            for (int j = 0; j < vals.length; j++)
                widths[j] = Math.max(widths[j], vals[j].length());
        }

        // Buat garis pemisah tabel
        StringBuilder garis = new StringBuilder();
        for (int w : widths) garis.append("+").append("-".repeat(w + 2));
        garis.append("+");

        // Cetak header
        System.out.println(garis);
        for (int i = 0; i < headers.length; i++)
            System.out.printf("| %-" + widths[i] + "s ", headers[i]);
        System.out.println("|");
        System.out.println(garis);

        // Cetak setiap baris data
        for (int i = 0; i < jumlah; i++) {
            Laptop l = daftar[i];
            String[] vals = {
                String.valueOf(l.getId()), l.getNama(), String.valueOf((long) l.getHarga()),
                l.getKategori(), l.getMerk(), String.valueOf(l.getGaransi()),
                String.valueOf(l.getStok()), l.getWarna(), l.getProsesor(),
                String.valueOf(l.getRam()), String.valueOf(l.getStorage()), String.valueOf(l.getLayar())
            };
            for (int j = 0; j < vals.length; j++)
                System.out.printf("| %-" + widths[j] + "s ", vals[j]);
            System.out.println("|");
        }
        System.out.println(garis);
    }

    public static void main(String[] args) {
        // Data awal hardcode supaya ada isi saat program dijalankan
        tambahData(1,"Laptop A",7500000,"Laptop","Asus",24,10,"Hitam","i5",8,512,15.6,false);
        tambahData(2,"Laptop B",9500000,"Laptop","Lenovo",24,8,"Silver","i7",16,1024,16.0,false);
        tambahData(3,"Laptop C",5500000,"Laptop","Acer",12,5,"Hitam","Ryzen 5",8,256,14.0,false);
        tambahData(4,"Laptop D",12500000,"Laptop","Macbook",36,3,"Pink","i9",32,1024,17.3,false);
        tambahData(5,"Laptop E",6500000,"Laptop","HP",18,7,"Putih","Ryzen 7",16,512,15.6,false);

        int pilihan = -1;
        while (pilihan != 0) { // Loop menu sampai pilih 0
            System.out.println("\nMenu Toko Elektronik:");
            System.out.println("1. Tambah Data");
            System.out.println("2. Tampilkan Data");
            System.out.println("0. Keluar");
            System.out.print("Pilih: ");
            pilihan = sc.nextInt(); sc.nextLine(); // Baca input user

            if (pilihan == 1) {
                // Input data baru dari user
                System.out.print("ID: "); int id = sc.nextInt(); sc.nextLine();
                System.out.print("Nama: "); String nama = sc.nextLine();
                System.out.print("Harga: "); double harga = sc.nextDouble(); sc.nextLine();
                System.out.print("Kategori: "); String kategori = sc.nextLine();
                System.out.print("Merk: "); String merk = sc.nextLine();
                System.out.print("Garansi (bulan): "); int garansi = sc.nextInt(); sc.nextLine();
                System.out.print("Stok: "); int stok = sc.nextInt(); sc.nextLine();
                System.out.print("Warna: "); String warna = sc.nextLine();
                System.out.print("Prosesor: "); String prosesor = sc.nextLine();
                System.out.print("RAM (GB): "); int ram = sc.nextInt(); sc.nextLine();
                System.out.print("Storage (GB): "); int storage = sc.nextInt(); sc.nextLine();
                System.out.print("Layar (inch): "); double layar = sc.nextDouble(); sc.nextLine();

                tambahData(id,nama,harga,kategori,merk,garansi,stok,warna,prosesor,ram,storage,layar,true);
            } else if (pilihan == 2) {
                tampilData(); // Tampilkan tabel data Laptop
            } else if (pilihan == 0) {
                System.out.println("Keluar program.");
            } else {
                System.out.println("Pilihan tidak ada.");
            }
        }
    }
}
