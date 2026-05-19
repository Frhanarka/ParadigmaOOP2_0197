#include <iostream>
using namespace std;

class BaseClass final{
public:
    virtual void perkenalan() {
        cout << "Halo saya function dari base class";
    }
};

class baseClass1 {
public:
    virtual void perkenalan() {
        cout << "Halo saya function dari base class 1";
    }
};

class DerivedClass : public baseClass1 {
public:
    void perkenalan() override {
        cout << "Halo saya function dari derived class";
    }
};

int main() {
    DerivedClass a;
    a.perkenalan();

    return 0;
}