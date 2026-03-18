#include <iostream>
using namespace std;

class Base{
    public:
    void identify(const void* addr) const{
        cout << "Base class called by 0x" << addr << endl;
    }
};

class SubA : public Base{   };
class SubB : public Base{   };

int main(){
    Base* ptrA = new SubA;
    Base* ptrB = new SubB;

    ptrA -> identify(&ptrA);
    ptrB -> identify(&ptrB);
}