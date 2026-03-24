#include <iostream>

void reverseStr(char* str) {
    // TODO: reverse the string in place
    // You need to find the end yourself first (no size given)
    // Then use the two-pointer swap from problem 1
    // Do NOT use myLen or any library function
    char* lo = str;
    char* hi = str;
    while(*hi != '\0'){
        ++hi;
    }
    --hi;

    while(lo<hi){
        char tmp = *lo;
        *lo = *hi;
        *hi = tmp;
        ++lo;
        --hi;
    }

    
    
}

int main() {
    char a[] = "Rutgers";
    char b[] = "hello";
    char c[] = "a";

    reverseStr(a); std::cout << a << "\n";  // sregtuR
    reverseStr(b); std::cout << b << "\n";  // olleh
    reverseStr(c); std::cout << c << "\n";  // a
}