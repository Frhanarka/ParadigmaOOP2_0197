#include <iostream>
using namespace std;

class remotelampu {
private:
    string SaklarNo[3]; // Assuming there are 3 switches

public:
    void setSaklarNo(int no, string value) {
        SaklarNo[no] = value;
    }
    string getSaklarNo(int no) {
        return SaklarNo[no]; 
    }
};
