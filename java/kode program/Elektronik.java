public class Elektronik extends Produk {  // Class Elektronik turunan dari Produk
    protected String merk;// Merk produk
    protected int garansi;// Lama garansi 
    protected int stok;// Jumlah stok produk
    protected String warna;// Warna produk

    // Constructor dengan parameter
    public Elektronik(int id,String nama,double harga,String kategori,
                      String merk,int garansi,int stok,String warna) {
        super(id,nama,harga,kategori); // Panggil constructor Produk
        this.merk=merk; this.garansi=garansi; this.stok=stok; this.warna=warna;
    }

    // Getter & Setter
    public String getMerk() { return merk; }
    public void setMerk(String merk) { this.merk=merk; }

    public int getGaransi() { return garansi; }
    public void setGaransi(int garansi) { this.garansi=garansi; }

    public int getStok() { return stok; }
    public void setStok(int stok) { this.stok=stok; }

    public String getWarna() { return warna; }
    public void setWarna(String warna) { this.warna=warna; }
}
