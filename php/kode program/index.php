<?php
include 'Laptop.php'; // Import class Laptop agar bisa digunakan

// Array daftar laptop 
$daftar = [
    new Laptop(1,"Laptop A",7500000,"Laptop","Asus",24,10,"Hitam","i5",8,512,15.6,"images/asus.jpg"),
    new Laptop(2,"Laptop B",9500000,"Laptop","Lenovo",24,8,"Silver","i7",16,1024,16.0,"images/lenovo.jpg"),
    new Laptop(3,"Laptop C",5500000,"Laptop","Acer",12,5,"Hitam","Ryzen 5",8,256,14.0,"images/acer.jpg"),
    new Laptop(4,"Laptop D",12500000,"Laptop","Macbook",36,3,"Pink","i9",32,1024,17.3,"images/macbook.jpg"),
    new Laptop(5,"Laptop E",6500000,"Laptop","HP",18,7,"Putih","Ryzen 7",16,512,15.6,"images/hp.jpg")
];

// Tampilkan tabel di HTML
echo "<h2>Daftar Laptop</h2>";
echo "<table border='1' cellpadding='5' cellspacing='0'>";

// Header tabel
echo "<tr>
        <th>ID</th>
        <th>Nama</th>
        <th>Harga</th>
        <th>Kategori</th>
        <th>Foto</th>
        <th>Merk</th>
        <th>Garansi</th>
        <th>Stok</th>
        <th>Warna</th>
        <th>Prosesor</th>
        <th>RAM</th>
        <th>Storage</th>
        <th>Layar</th>
      </tr>";

// Looping tiap laptop dan panggil method tampilkan untuk menampilkan baris
foreach ($daftar as $laptop) {
    echo "<tr>";
    $laptop->tampilkan(); // Method tampilkan dari class Laptop
    echo "</tr>";
}
echo "</table>";
?>
