#include <iostream>
using namespace std;

class Base{
    public:
    void identify(int addr) const{
        cout << "Base class called by 0x" << hex << addr << endl;
    }
};

class SubA : public Base{   };
class SubB : public Base{   };

int main(){
    Base* ptrA = new SubA;
    Base* ptrB = new SubB;

    ptrA -> identify((int) &ptrA);
    ptrB -> identify((int) &ptrB);
}