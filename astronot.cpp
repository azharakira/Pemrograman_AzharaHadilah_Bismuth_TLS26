#include <iostream>
using namespace std;

int main() {
    int N, K;
    bool aktif[1000];
    int posisi;
    int sisa;

	cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai K awal: ";
    cin >> K;
    cout << "-------------------------------";
    posisi = N - 1;
    sisa = N;

    for (int i = 0; i < N; i++) {
        aktif[i] = true;
    }
    
    while (sisa > 1) {
    	int hitung = 0;
	    while (hitung < K) {
    	    posisi = (posisi + 1) % N;
        	if (aktif[posisi] == true) {
            	hitung = hitung + 1;
        	}
    	}

    	cout << "Astronot dieliminasi: " << posisi + 1 << endl;
    	cout << "Sisa astronot aktif: " << sisa - 1 << "\n" << endl;
    	aktif[posisi] = false;
    	sisa = sisa - 1;

    	if ((posisi + 1) % 2 == 0) {
        K = K + 2;
    	} else {
        	K = K - 1;
    	}
    	if (K < 2) {
    	    K = 2;
    	}
	}

	for (int i = 0; i < N; i++) {
	    if (aktif[i] == true) {
	        cout << "Astronot terakhir bertahan: " << i + 1 << endl;
	    }
	}
    return 0;
}
