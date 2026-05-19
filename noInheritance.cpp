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