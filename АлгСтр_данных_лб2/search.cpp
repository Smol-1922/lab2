#include <iostream>

void printArray(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << "(" << i << ")" << " ";
    }
    std::cout <<std::endl;
}
int binarysearch(int* array, int size, int numb) {
    bool flag = false;
    int low = 0;
    int high = size - 1;
    int mid;

    while ((low <= high) && (flag != true)) {
        mid = (low + high) / 2;
        if (array[mid] == numb) return mid;
        if (array[mid] > numb) high = mid - 1;
        else  low = mid + 1;
    }
    return -1;
}