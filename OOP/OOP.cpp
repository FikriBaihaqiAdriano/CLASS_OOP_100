#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
		cout << "Masukkan nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa ";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nnilai : " << nilai;
}
class matakuliah {
private: 
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukkan kode matakuliah : ";
		cin >> kode;
		cout << "Masukkan Nama matakuliah : ";
		cin >> namaMK;
		cout << "Masukkan SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nkode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaMK;
		cout << "\nsks : " << sks;
	}
};

int main() {
	Mahasiswa mhs;
	matakuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}