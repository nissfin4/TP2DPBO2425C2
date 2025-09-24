<?php
class Produk {
    protected $id;// ID produk
    protected $nama;// Nama produk
    protected $harga;// Harga produk
    protected $kategori;// Kategori produk
    protected $foto_produk; // Nama file/foto produk (opsional)

    // Constructor untuk inisialisasi atribut
    public function __construct($id, $nama, $harga, $kategori, $foto_produk="") {
        $this->id = $id;
        $this->nama = $nama;
        $this->harga = $harga;
        $this->kategori = $kategori;
        $this->foto_produk = $foto_produk;
    }

    // Getter untuk mengakses atribut (bisa digunakan oleh class child)
    public function getId() { return $this->id; }
    public function getNama() { return $this->nama; }
    public function getHarga() { return $this->harga; }
    public function getKategori() { return $this->kategori; }
    public function getFoto() { return $this->foto_produk; }
}
?>
