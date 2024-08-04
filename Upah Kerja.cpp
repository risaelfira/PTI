#include <iostream>
using namespace std;

int main() {
    double gaji_pokok, gaji_lembur, denda, gaji_bersih;
    int jam_kerja;
    int jam_normal = 30;

    cout << "Masukkan jumlah jam kerja harian = ";
    cin >> jam_kerja;

    if (jam_kerja <= jam_normal) {
        gaji_pokok = jam_kerja * 10000;
    } else {
        gaji_pokok = jam_normal * 10000 + (jam_kerja - jam_normal) * 3000;
    }

    if (jam_kerja > jam_normal) {
        gaji_lembur = (jam_kerja - jam_normal) * 3000;
    } else {
        gaji_lembur = 0; 
    }

    if (jam_kerja < jam_normal) {
        denda = (jam_normal - jam_kerja) * 1000;
    } else {
        denda = 0; 
    }

    gaji_bersih = gaji_pokok - denda + gaji_lembur;
    cout << "Gaji bersih = Rp." << gaji_bersih << "/minggu"<<endl;

	return 0;
}
