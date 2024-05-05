//Nama Ariel Dian Fajarrizqi
//Kelas TI-D
//NIM 20230140168

//Jawaban :
//1.Tipe data, variabel
//String = digunakan untuk menyimpan nama orang, 
//int = digunakan untuk bilangan bulat, baik positif, negatif
//float = digunakan untuk menyimpan nilai decimal 
//string nama
//int umut
//float harga

//2. contoh implementasinya
// if (nilai >= 60) {cout << "Lulus" << endl;}
//else {cout << "Tidak Lulus" << endl;}

//3.
//digunakan untuk menampung informasi informasi tersebut

//int main() {
	//inputdata();
	//display();}
//void inputdata() {
	//cout << "Masukkan Nilai Sisi :";
	//cin >> sisi;}

//4.prosedur dan fungsi berfungsi untuk menyusun program agar mudah digunakan kembali.
//a.Prosedur
//void input() {
	//cout << "Masukkan nim" << endl;  	
	//cin >> NIM;
	//cout << "Masukkan nama << endl; 
	//cin >> NAMA;}

//b.Fungsi
//Int luas() {
	//luas = panjang * lebar;
	//cout << "luas persegi : " << luas << endl;}

//5.Contoh dari implementasi looping 
//if (nRerata > 60) {
//status = "lulus";}
	//else if (nilaiMatematika > 70) {
		//status = "lulus";}

	//else {
		//status = "Tidak Lulus";}
	
//6

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
	string nama;
	string status;
	int nilaimatematika, nilaibinggris, Rerata;
};

int main() {
	Mahasiswa mhs[20];
	string pilihan;

		for (int i = 0; i < 20; i++) {
			cout << "Data ke-" << (i + 1) << ":" << endl;
			cout << "Nama Mahasiswa :";
			cin >> mhs[i].nama;
			cout << "Nilai matematika :";
			cin >> mhs[i].nilaimatematika;
			cout << "Nilai Bahasa Inggris : ";
			cin >> mhs[i].nilaibinggris;
			cout << endl;

			mhs[i].Rerata = (mhs[i].nilaimatematika + mhs[i].nilaibinggris) / 2;

			if (mhs[i].Rerata > 60) {
				mhs[i].status = "lulus";
			}
			else if (mhs[i].nilaimatematika > 70) {
				mhs[i].status = "lulus";
			}

			else {
				mhs[i].status = "Tidak Lulus";
			}
		}

		for (int i = 0; i < 20; i++) {
			cout << endl;
			cout << "Data Mahasiwa Ke-" << (i + 1) << ":";
			cout << "\n Nama :" << mhs[i].nama << "\t" << "Statusnya adalah : " << mhs[i].status << endl;
			cout << endl;

		}
	return 0;
}
