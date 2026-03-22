#include <iostream>

int filterAbove(int* src, int size, int threshold, int* dest) {
    // TODO: walk src using pointer arithmetic
    // For each element greater than threshold,
    // write it into dest and advance dest
    // Return the count of elements copied
    int count = 0;
    for(int* p = src; p < src + size; ++p){
        if(*p > threshold){
            *dest = *p;
            ++dest;
            count++;
        }
    }
    return count;
}

int main() {
    int nums[]   = {3, 17, 8, 42, 5, 11};
    int result[6];  // big enough to hold everything

    int count = filterAbove(nums, 6, 10, result);

    std::cout << "Count: " << count << "\n";  // 3
    for (int* p = result; p < result + count; ++p)
        std::cout << *p << " ";  // 17 42 11
}