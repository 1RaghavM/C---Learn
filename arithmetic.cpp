#include <iostream>
using namespace std;

int main(){
    int a = 8, b = 4;

    cout <<"Addition result: " << (a+b) << endl;
    cout << "Subtraction Result: " << (a-b) << endl;
    cout << "Multiplication Result: " << (a*b) << endl;
    cout << "Division Result: " << (a/b) << endl;
    cout << "Modulus Result: " << (a%b) << endl;

    cout << "Postfix increment: " << a++ << endl;
    cout << "Postfix result: " << a << endl;
    cout << "Prefix increment: " << ++b << endl;
    cout << "Prefix result: " << b << endl;

    return 0;
}