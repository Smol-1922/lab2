#include <iostream>
void quickSort(int* array, int low, int high)
{
    int i = low;
    int j = high - 1;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}
void insertSort(int* arr, int size) {
    int iter, j;
    for (int i = 1; i < size; i++) {
        iter = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > iter) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = iter;
    }
}
void countingSort(char* array, int size) {
    int arraycounting[256];
    for (int i = 0; i < 256; i++) {
        arraycounting[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        arraycounting[array[i]]++;
    }

    int index = 0;
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < arraycounting[i]; j++) {
            array[index] = i;
            index++;
        }
    }
}
bool check(int* array, int size) {
    bool flag;
    for (int i = 1; i < size; i++) {
        if (array[i - 1] <= array[i]) {
            flag = true;
        }
        else flag = false;
        if (flag == false) return false;
    }
    return true;
}
void bogosort(int* array, int size) {
    int temp, index;
    while (!check(array, size))
    {
        for (int i = 0; i < size; i++) {
            index = rand() % size;
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
}