#include <iostream>

bool isPalindrome(const char* str) {
    // TODO: check if str reads the same forwards and backwards
    // Return true if palindrome, false if not
    // Do NOT use any library functions
    const char* lo = str;
    const char* hi = str;
    while (*hi != '\0') {
        ++hi;
    }
    --hi;

    while (lo < hi) {
        if (*lo != *hi) {
            return false;
        }
        ++lo;
        --hi;
    }
    return true;
}

int main() {
    std::cout << isPalindrome("racecar") << "\n";  // 1
    std::cout << isPalindrome("rutgers") << "\n";  // 0
    std::cout << isPalindrome("madam")   << "\n";  // 1
    std::cout << isPalindrome("a")       << "\n";  // 1
}