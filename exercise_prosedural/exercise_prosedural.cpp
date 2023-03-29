#include <iostream>
#include <string>
using namespace std;

int main() {
    const int jumlahKandidat = 20;
    string nama[jumlahKandidat];
    string status[jumlahKandidat];
    int jumlahDiterima = 0, jumlahDitolak = 0;

    for (int i = 0; i < jumlahKandidat; i++) {
        cout << "Masukkan nama kandidat " << i + 1 << ": ";
        cin >> nama[i];

        double nilaiMatematika, nilaibahasa_inggris;

        cout << "Masukan nilai Matematika: ";
        cin >> nilaiMatematika;

        cout << "Masukan nilai bahasa inggris: ";
        cin >> nilaibahasa_inggris;

        double rataRata = (nilaiMatematika + nilaibahasa_inggris) / 2.0;
        if (rataRata >= 70.0 && nilaiMatematika > 80.0) {
            status[i] = "diterima";
            jumlahDiterima++;
        }
        else {
            status[i] = "ditolak";
            jumlahDitolak++;
        }
    }

    cout << "nama"<< "  status" << endl;
    for (int i = 0; i < jumlahKandidat; i++) {
        cout << nama[i] << " " << status[i] << endl;
    }
    cout << "Jumlah kandidat diterima: " << jumlahDiterima << endl;
    cout << "Jumlah kandidat ditolak: " << jumlahDitolak << endl;

    return 0;
}