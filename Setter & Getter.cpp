#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
private:
  string nama;
  int usia;
  string hobi[3];

public:
  // Setter untuk nama
  void setNama(string nama) {
    this->nama = nama;
  }

  // Getter untuk nama
  string getNama() {
    return nama;
  }

  // Setter untuk usia
  void setUsia(int usia) {
    this->usia = usia;
  }

  // Getter untuk usia
  int getUsia() {
    return usia;
  }

  // Setter untuk hobi
  void setHobi(int index, string hobi) {
    if (index >= 0 && index < 3) {
      this->hobi[index] = hobi;
    }
  }

  // Getter untuk hobi
  string getHobi(int index) {
    if (index >= 0 && index < 3) {
      return hobi[index];
    } else {
      return "Indeks Hobi Salah";
    }
  }
};

int main() {
  Mahasiswa mhs;

  // Menggunakan setter untuk mengisi data Mahasiswa
  mhs.setNama("Alin");
  mhs.setUsia(18);
  mhs.setHobi(0, "Menari");
  mhs.setHobi(1, "Memasak");
  mhs.setHobi(2, "Menonton");

  // Menggunakan getter untuk menampilkan data Mahasiswa
  cout << "Nama Mahasiswa: " << mhs.getNama() << endl;
  cout << "Usia Mahasiswa: " << mhs.getUsia() << " tahun" << endl;
  cout << "Hobi Mahasiswa: " << endl;
  for (int i = 0; i < 3; i++) {
    cout << "- " << mhs.getHobi(i) << endl;
  }

  return 0;
}

