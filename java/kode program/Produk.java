public class Produk {
    protected int id; // ID produk
    protected String nama;// Nama produk
    protected double harga;// Harga produk
    protected String kategori; // Kategori produk

    // Constructor dengan parameter untuk inisialisasi atribut
    public Produk(int id, String nama, double harga, String kategori) {
        this.id = id; this.nama = nama; this.harga = harga; this.kategori = kategori;
    }

    // Method untuk menampilkan data produk dalam format tabel
    public void tampilkan() {
        System.out.printf("%5d%15s%12.0f%12s", id, nama, harga, kategori);
    }

    // Getter & Setter untuk mengakses dan mengubah atribut
    public int getId() { return id; }
    public void setId(int id) { this.id=id; }

    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama=nama; }

    public double getHarga() { return harga; }
    public void setHarga(double harga) { this.harga=harga; }

    public String getKategori() { return kategori; }
    public void setKategori(String kategori) { this.kategori=kategori; }
}
