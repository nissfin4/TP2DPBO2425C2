<?php
include 'Elektronik.php';//Import class Elektronik agar bisa diwarisi

class Laptop extends Elektronik {// Class Laptop turunan dari Elektronik
    private $prosesor;// Tipe prosesor
    private $ram;// Kapasitas RAM 
    private $storage;// Kapasitas storage 
    private $layar;// Ukuran layar 

    // Constructor untuk inisialisasi semua atribut Laptop dan Elektronik
    public function __construct($id, $nama, $harga, $kategori, $merk, $garansi, $stok, $warna,
                                $prosesor, $ram, $storage, $layar, $foto_produk="") {
        parent::__construct($id, $nama, $harga, $kategori, $merk, $garansi, $stok, $warna, $foto_produk);
        $this->prosesor = $prosesor;
        $this->ram = $ram;
        $this->storage = $storage;
        $this->layar = $layar;
    }

    // Method untuk menampilkan semua atribut Laptop dalam bentuk tabel HTML
    public function tampilkan() {
        echo "<td>{$this->getId()}</td>";
        echo "<td>{$this->getNama()}</td>";
        echo "<td>{$this->getHarga()}</td>";
        echo "<td>{$this->getKategori()}</td>";
        echo "<td>";
        if($this->getFoto() != "") {// Cek apakah ada foto
            echo "<img src='{$this->getFoto()}' width='100'>";
        } else {
            echo "Tidak ada foto";
        }
        echo "</td>";
        echo "<td>{$this->getMerk()}</td>";
        echo "<td>{$this->getGaransi()}</td>";
        echo "<td>{$this->getStok()}</td>";
        echo "<td>{$this->getWarna()}</td>";
        echo "<td>{$this->prosesor}</td>";
        echo "<td>{$this->ram}</td>";
        echo "<td>{$this->storage}</td>";
        echo "<td>{$this->layar}</td>";
    }
}
?>
