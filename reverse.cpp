#include <iostream>

void reverseArr(int* arr, int size){
    int* lo = arr;
    int* hi = arr + size - 1;

    while(lo<hi){
        int tmp = *lo;
        *lo = *hi;
        *hi = tmp;
        ++lo;
        --hi;
    }
}

int main(){
    int nums[] = {1,2,3,4, 5};
    reverseArr(nums, 5);
    for (int* p = nums; p != nums + 5; ++p){
        std::cout << *p << " ";
    }
}