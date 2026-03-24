#include <iostream>

char* myCopy(char* dest, const char* src) {
    // TODO: walk src using pointer arithmetic
    // Copy each character into dest
    // Stop when you hit the null terminator '\0'
    // Return a pointer to the start of dest
    char* start = dest;
    while(*src != '\0'){
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';
    return start;
}

int main() {
    const char* original = "Rutgers";
    char buffer[20];

    char* result = myCopy(buffer, original);

    std::cout << result   << "\n";  // Rutgers
    std::cout << buffer   << "\n";  // Rutgers
    std::cout << (result == buffer ? "same address" : "different address") << "\n";  // same address
}
