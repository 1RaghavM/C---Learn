#include <iostream>

int myLen(const char* str) {
    // TODO: walk str until null terminator
    // Count how many characters you pass
    // Do NOT use any standard library functions
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}

int main() {
    std::cout << myLen("Rutgers")  << "\n";  // 7
    std::cout << myLen("")         << "\n";  // 0
    std::cout << myLen("CS major") << "\n";  // 8
}