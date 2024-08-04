#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Masukkan nilai N: ";
    cin >> N;

    if (N < 0) {
        cout << "Masukkan nilai N yang non-negatif." << endl;
        return 1; 
    }

    cout << "Angka mundur dari " << N << " hingga 0:" << endl;

    for (int i = N; i >= 0; --i) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

