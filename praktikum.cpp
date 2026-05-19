#include <iostream>
using namespace std;

class RekeningBank {
protected:
    string nama;
    int saldo;

public:
    RekeningBank(string nama, int saldo) {
        this->nama = nama;
        this->saldo = saldo;
    }

    virtual void potongAdmin() = 0;

    void tampilInfo() {
        cout << "Nama  : " << nama << endl;
        cout << "Saldo : Rp " << saldo << endl;
    }

    virtual ~RekeningBank() {}
};

class RekeningS : public RekeningBank {
public:
    RekeningS(string nama, int saldo) : RekeningBank(nama, saldo) {}

    void potongAdmin() {
        cout << "Rekening Syariah: tidak ada potongan admin" << endl;
    }
};

class RekeningK : public RekeningBank {
public:
    RekeningK(string nama, int saldo) : RekeningBank(nama, saldo) {}

    void potongAdmin() {
        saldo -= 15000;
        cout << "Rekening Konvensional: dipotong Rp 15.000" << endl;
    }
};

class RekeningP : public RekeningBank {
public:
    RekeningP(string nama, int saldo) : RekeningBank(nama, saldo) {}

    void potongAdmin() {
        if (saldo > 10000000) {
            cout << "Rekening Premium: saldo tinggi, bebas admin" << endl;
        } else {
            saldo -= 50000;
            cout << "Rekening Premium: dipotong Rp 50.000" << endl;
        }
    }
};

int main() {
    RekeningBank* rek[4];
    rek[0] = new RekeningS("Ali", 5000000);
    rek[1] = new RekeningK("Budi", 3000000);
    rek[2] = new RekeningP("Citra", 12000000);
    rek[3] = new RekeningP("Dina", 8000000);

    cout << "=== Proses Akhir Bulan Bank Gibran Jaya ===" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "\n";
        rek[i]->tampilInfo();
        rek[i]->potongAdmin();
    }

    for (int i = 0; i < 4; i++) delete rek[i];

    return 0;
}


