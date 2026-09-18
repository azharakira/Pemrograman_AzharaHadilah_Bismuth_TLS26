#include <iostream>
using namespace std;

int hitungPanjang(char pesan[]) {
    int panjang = 0;
    while (pesan[panjang] != '\0') {
        panjang = panjang + 1;
    }
    return panjang;
}

int main() {
    char pesan[1000];
    char hasil[1000];

    cout << "Masukkan pesan (huruf kapital, tanpa spasi): ";
    cin >> pesan;

    int panjang = hitungPanjang(pesan);

    for (int i = 0; i < panjang; i++) {
        if (i == 0) {
            hasil[i] = pesan[i];
        } else {
            int posisi_sekarang = pesan[i] - 'A' + 1;
            int posisi_sebelumnya = pesan[i - 1] - 'A' + 1;
            int posisi_baru = ((posisi_sekarang - 1 + posisi_sebelumnya) % 26) + 1;
            hasil[i] = 'A' + (posisi_baru - 1);
        }
    }
    hasil[panjang] = '\0';

    cout << "Pesan tersandi: " << hasil << endl;

    return 0;
}
