#include <cstddef>
#include <iostream>

int* findTarget(int* arr, int size, int target) {
    // TODO: walk the array using only pointer arithmetic
    // Return the ADDRESS of the first element that matches target
    // Return nullptr if not found
    int* result;
    for(int* p = arr; p < arr + size; ++p){
        if(*p == target){
            return p;
        }
    }
    
    return nullptr;
}

int main() {
    int nums[] = {3, 17, 8, 42, 5, 11};

    int* result = findTarget(nums, 6, 42);

    if (result != nullptr) {
        std::cout << "Found: "      << *result       << "\n";  // 42
        std::cout << "At index: "   << result - nums << "\n";  // 3
    } else {
        std::cout << "Not found\n";
    }

    int* missing = findTarget(nums, 6, 99);
    std::cout << (missing == nullptr ? "Not found\n" : "Found\n");  // Not found
}