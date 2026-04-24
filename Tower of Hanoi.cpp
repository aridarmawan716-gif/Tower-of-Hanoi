#include <iostream>
using namespace std;

/**
 * Fungsi Rekursif Tower of Hanoi
 * @param n     : Jumlah piringan
 * @param from  : Tiang asal (A)
 * @param to    : Tiang tujuan (C)
 * @param aux   : Tiang bantuan (B)
 */
void towerOfHanoi(int n, char from, char to, char aux) {
    // Base Case: Jika hanya ada 1 piringan, pindahkan langsung
    if (n == 1) {
        cout << "Pindahkan piringan 1 dari tiang " << from << " ke tiang " << to << endl;
        return;
    }

    // Langkah 1: Pindahkan n-1 piringan dari 'from' ke 'aux'
    towerOfHanoi(n - 1, from, aux, to);

    // Langkah 2: Pindahkan piringan ke-n dari 'from' ke 'to'
    cout << "Pindahkan piringan " << n << " dari tiang " << from << " ke tiang " << to << endl;

    // Langkah 3: Pindahkan n-1 piringan dari 'aux' ke 'to'
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cout << "Masukkan jumlah piringan: ";
    cin >> n;

    cout << "\nLangkah-langkah pemindahan:" << endl;
    // Panggil fungsi (Asal: A, Tujuan: C, Bantuan: B)
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
