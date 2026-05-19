#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() {
        cout << "Halo saya function dari base class";
    }
}

class derivedClass : public baseClass {
public:
    void perkenalan() override {
        cout << "Halo saya function dari derived class";
    }
};