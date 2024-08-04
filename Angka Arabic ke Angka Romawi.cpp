#include <iostream>
using namespace std;

int romanToArabic(string romawi) {
    int arabic = 0;
    for (int i = 0; i < romawi.length(); i++) {
        if (romawi[i] == 'I') {
            if (i + 1 < romawi.length() && (romawi[i + 1] == 'V' || romawi[i + 1] == 'X')) {
                arabic += (romawi[i + 1] == 'V') ? 4 : 9;
                i++;
            } else {
                arabic += 1;
            }
        } else if (romawi[i] == 'X') {
            if (i + 1 < romawi.length() && (romawi[i + 1] == 'L' || romawi[i + 1] == 'C')) {
                arabic += (romawi[i + 1] == 'L') ? 40 : 90;
                i++;
            } else {
                arabic += 10;
            }
        } else if (romawi[i] == 'L') {
            arabic += 50;
        } else if (romawi[i] == 'C') {
            arabic += 100;
        } else if (romawi[i] == 'D') {
            arabic += 500;
        } else if (romawi[i] == 'M') {
            arabic += 1000;
        }
    }
    return arabic;
}

int main() {
    string romawi;

    cout << "Masukkan Angka Romawi (I - X) : ";
    cin >> romawi;

    int arabic = romanToArabic(romawi);

    if (arabic != 0) {
        cout << "Angka Arabnya adalah " << arabic << endl;
    } else {
        cout << "Inputan Tidak Valid" << endl;
    }

    return 0;
}

