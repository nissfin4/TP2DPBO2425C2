public class Laptop extends Elektronik {// Class Laptop turunan dari Elektronik
    private String prosesor;// Tipe prosesor
    private int ram;// Kapasitas RAM 
    private int storage;// Kapasitas storage
    private double layar;// Ukuran layar

    // Constructor dengan parameter
    public Laptop(int id,String nama,double harga,String kategori,
                  String merk,int garansi,int stok,String warna,
                  String prosesor,int ram,int storage,double layar) {
        super(id,nama,harga,kategori,merk,garansi,stok,warna); // Panggil constructor Elektronik
        this.prosesor=prosesor; this.ram=ram; this.storage=storage; this.layar=layar;
    }

    // Getter & Setter untuk atribut Laptop
    public String getProsesor() { return prosesor; }
    public void setProsesor(String prosesor) { this.prosesor=prosesor; }

    public int getRam() { return ram; }
    public void setRam(int ram) { this.ram=ram; }

    public int getStorage() { return storage; }
    public void setStorage(int storage) { this.storage=storage; }

    public double getLayar() { return layar; }
    public void setLayar(double layar) { this.layar=layar; }
}
