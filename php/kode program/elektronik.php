<?php
include 'Produk.php'; // Import class Produk supaya bisa diwarisi

class Elektronik extends Produk {  // Class Elektronik turunan dari Produk
    protected $merk; // Merk produk
    protected $garansi;// Lama garansi 
    protected $stok;// Jumlah stok produk
    protected $warna;// Warna produk

    // Constructor dengan parameter
    public function __construct($id, $nama, $harga, $kategori, $merk, $garansi, $stok, $warna, $foto_produk="") {
        parent::__construct($id, $nama, $harga, $kategori, $foto_produk); // Panggil constructor Produk
        $this->merk = $merk;
        $this->garansi = $garansi;
        $this->stok = $stok;
        $this->warna = $warna;
    }

    // Getter untuk mengakses atribut Elektronik
    public function getMerk() { return $this->merk; }
    public function getGaransi() { return $this->garansi; }
    public function getStok() { return $this->stok; }
    public function getWarna() { return $this->warna; }
}
?>
