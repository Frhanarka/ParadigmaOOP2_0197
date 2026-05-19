#include <iostream>
using namespace std;

class remotelampu {
private:
    string SaklarNo[10]; 

public:
    void setSaklarNo(int no, string value) {
        SaklarNo[no] = value;
    }
    string getSaklarNo(int no) {
        return SaklarNo[no]; 
    }
};

int main() {
    remotelampu lampurumah;
    lampurumah.setSaklarNo(0, "lampu teras rumah");
    lampurumah.setSaklarNo(1, "lampu ruang tamu");
    lampurumah.setSaklarNo(2, "lampu kamar tidur");
    lampurumah.setSaklarNo(3, "lampu kamar mandi");

    cout << lampurumah.getSaklarNo(0) << endl;
    cout << lampurumah.getSaklarNo(1) << endl;  
    cout << lampurumah.getSaklarNo(2) << endl;
    cout << lampurumah.getSaklarNo(3) << endl;
    
    return 0;
}