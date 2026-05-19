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


