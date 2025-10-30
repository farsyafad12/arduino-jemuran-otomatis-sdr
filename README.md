# 🤖 Prototipe Robot Jemuran Otomatis Sederhana Menggunakan Arduino Uno

Project ini merupakan prototipe **jemuran otomatis sederhana** berbasis **Arduino Uno**, yang berfungsi untuk **menarik jemuran saat hujan** dan **membuka kembali saat cuaca cerah**.  
Sistem ini menggunakan **sensor hujan (rain sensor)** dan **servo motor** untuk melakukan gerakan otomatis tanpa perlu campur tangan manusia.

---

## **🎯 Tujuan Project :**

Proyek ini bertujuan untuk membantu pengguna agar **jemuran tidak kehujanan secara tiba-tiba**, dengan sistem otomatis yang **mudah dibuat**, **murah**, dan **efisien**.  
Cocok untuk digunakan sebagai **proyek pelajar**, **demo IoT dasar**, atau **lomba sains tingkat sekolah**.

---

## ⚙️ Komponen yang Digunakan
| No | Komponen | Jumlah | Keterangan |
|----|-----------|---------|------------|
| 1 | Arduino Uno | 1 | Mikrokontroler utama |
| 2 | Rain Sensor Module | 1 | Mendeteksi hujan |
| 3 | Servo Motor (SG90) | 1 | Menggerakkan jemuran |
| 4 | Kabel Jumper | Secukupnya | Penghubung antar komponen |
| 5 | Breadboard *(opsional)* | 1 | Untuk koneksi lebih rapi |

---

## 🔌 Rangkaian
| Komponen | Pin Arduino |
|-----------|--------------|
| Rain Sensor (AO) | A0 |
| Rain Sensor (VCC) | 5V |
| Rain Sensor (GND) | GND |
| Servo (Signal) | D9 |
| Servo (VCC) | 5V |
| Servo (GND) | GND |

_(Susunan bisa diubah sesuai kebutuhan di kode program)_

---

## 💻 Kode Program
Kode utama menggunakan bahasa C++ dan dijalankan di platform Arduino IDE.  
Fungsi utamanya:
- Membaca nilai dari **sensor hujan**
- Menggerakkan **servo motor** untuk membuka atau menutup jemuran sesuai kondisi cuaca

```cpp
#include <Servo.h>

Servo jemuran;
int rainSensor = A0;
int nilaiHujan;
int ambang = 500;

void setup() {
  jemuran.attach(9);
  Serial.begin(9600);
  jemuran.write(0);
  Serial.println("Sistem Jemuran Otomatis Siap!");
}

void loop() {
  nilaiHujan = analogRead(rainSensor);
  Serial.print("Nilai Sensor: ");
  Serial.println(nilaiHujan);

  if (nilaiHujan < ambang) {
    Serial.println("Hujan terdeteksi! Menutup jemuran...");
    jemuran.write(90);
  } else {
    Serial.println("Cuaca cerah. Membuka jemuran...");
    jemuran.write(0);
  }

  delay(1000);
}
```
## 📖 Cara Menggunakan

1. **Rakit rangkaian** sesuai wiring yang telah dijelaskan di bagian sebelumnya.  
2. **Upload program** ke Arduino Uno menggunakan **Arduino IDE**.  
3. **Hubungkan Arduino ke sumber daya** (USB laptop atau adaptor 5V).  
4. **Amati simulasi** — jemuran akan menutup otomatis saat hujan dan membuka saat cuaca cerah.

---

## ⚙️ Cara Kerja

1. **Sensor hujan** membaca kondisi permukaan (kering atau basah) dan mengirimkan nilai analog ke Arduino Uno.  
2. Jika sensor mendeteksi **air (nilai analog rendah)** → Arduino akan memerintahkan **servo motor untuk menutup jemuran**.  
3. Jika sensor mendeteksi **tidak ada air (nilai analog tinggi)** → Arduino akan memerintahkan **servo motor untuk membuka jemuran**.  
4. **Servo** bergerak otomatis mengikuti perubahan kondisi cuaca tanpa perlu intervensi manual.  
5. Semua aktivitas dapat dilihat melalui **Serial Monitor** di Arduino IDE untuk memantau nilai sensor dan status servo.

---

## 🧩 Rangkaian & Sketsa Project

<img src="/image/1.png" alt="Rangkaian Project" style="border-radius:18px;">
<img src="/image/2.png" alt="Sketsa Project" style="border-radius:18px;">

---

## 📸 Hasil Project

_Cooming Soon !_

<!-- 
<img src="/image/1.jpeg" alt="Hasil Project 1" style="border-radius:18px;">
<img src="/image/2.jpeg" alt="Hasil Project 2" style="border-radius:18px;">
<img src="/image/3.jpeg" alt="Hasil Project 3" style="border-radius:18px;">
<img src="/image/4.jpeg" alt="Hasil Project 4" style="border-radius:18px;">
-->

---
## 🎥 Referensi Video ( Youtube ) 

Kamu bisa lihat hasil demo serupa dengan project ini pada video berikut:

🔗 **YouTube:** [Klik di sini untuk menonton](https://www.youtube.com/shorts/E6ZdOL_ICRw) (@skr_electronics_lab)

---

> Proyek ini cocok untuk edukasi dasar sistem otomatisasi menggunakan **Arduino Uno**, yang menunjukkan cara kerja **jemuran otomatis** dengan **sensor hujan dan servo motor** untuk melindungi pakaian saat hujan.

---

_Powered By FarSyaFad Tech 2025 | All Right Reserved | Created By Ahnaf Samih_
