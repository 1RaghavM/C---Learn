#include <iostream>

int* findMax(int* arr, int size){
    int* maxPtr = arr;

    for(int* p = arr; p < arr + size; ++p){
        if(*p > *maxPtr){
            maxPtr = p;
        }
    }
    return maxPtr;
}

int main() {
    int nums[] = {3, 17, 8, 42, 5, 11};

    int* maxPtr = findMax(nums, 6);

    std::cout << "Max value: "   << *maxPtr << "\n";  // 42
    std::cout << "At position: " << maxPtr - nums << "\n";  // 3
}