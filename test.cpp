#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int* p = nums;

    cout << "p   = " << p   << "\n";   // address
    cout << "*p  = " << *p  << "\n";   // value at address (10)

    p++;  // move forward one int
    cout << "p   = " << p   << "\n";   // address + 4
    cout << "*p  = " << *p  << "\n";   // value (20)
}