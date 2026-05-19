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

    