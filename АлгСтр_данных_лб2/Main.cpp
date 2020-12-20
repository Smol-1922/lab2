#include<iostream>
#include"functions.h"
#include <cstdlib>
#include<Windows.h>
#include<ctime>
int main()
{
    SetConsoleOutputCP(1251);
    int* array;
    array = new int;
    int min, numb, numb1, size;
    float start, end,time;
    std::cout << "Выберите рзмер массива:" << endl;
    std::cout << "1. 10" << endl;
    std::cout << "2. 100" << endl;
    std::cout << "3. 1000" << endl;
    std::cout << "4. 10 000" << endl;
    std::cout << "5. 100 000" << endl;
    std::cin >> numb;
    std::cout << endl;
    switch (numb)
    {
    case 1:
        array = new int[10];
        size = 10;
        std::cout << "Введите минимальный диапазон элементов массива" << endl;
        std::cin >> min;
        std::cout << endl;
        for (int i = 0; i < size; i++) {
            array[i] = min + rand() % 256;
        }
        break;
    case 2: 
        array = new int[100];
        size = 100;
        std::cout << "Введите минимальный диапазон элементов массива" << endl;
        std::cin >> min;
        std::cout << endl;
        for (int i = 0; i < size; i++) {
            array[i] = min + rand() % 256;
        }
        break; 
    case 3:
        array = new int[1000];
        size = 1000;
        std::cout << "Введите минимальный диапазон элементов массива" << endl;
        std::cin >> min;
        std::cout << endl;
        for (int i = 0; i < size; i++) {
            array[i] = min + rand() % 256;
        }
        break;
    case 4:
        array = new int[10000];
        size = 10000;
        std::cout << "Введите минимальный диапазон элементов массива" << endl;
        std::cin >> min;
        std::cout << endl;
        for (int i = 0; i < size; i++) {
            array[i] = min + rand() % 256;
        }
        break;
    case 5:
        array = new int[100000];
        size = 100000;
        std::cout << "Введите минимальный диапазон элементов массива" << endl;
        std::cin >> min;
        std::cout << endl;
        for (int i = 0; i < size; i++) {
            array[i] = min + rand() % 256;
        }
        break;
    }
    for (;;) {
        std::cout << "1. Создать массив " << endl;
        std::cout << "2. Отсортировать " << endl;
        std::cout << "3. Найти элемент" << endl;
        std::cout << "4. Вывести массив" << endl;
        std::cout << "0. Закончить выполнение программы" << endl;
        std::cin >> numb;
        if (numb == 1) {
            std::cout << "Выберите рзмер массива:" << endl;
            std::cout << "1. 10" << endl;
            std::cout << "2. 100" << endl;
            std::cout << "3. 1000" << endl;
            std::cout << "4. 10 000" << endl;
            std::cout << "5. 100 000" << endl;
            std::cin >> numb1;
            std::cout << endl;
            switch (numb1)
            {
            case 1:
                array =new int[10];
                size = 10;
                std::cout << "Введите минимальный диапазон элементов массива" << endl;
                std::cin >> min;
                std::cout << endl;
                for (int i = 0; i < size; i++) {
                    array[i] = min + rand() % 256;
                }
                break;
            case 2: 
                array = new int[100];
                size = 100;
                std::cout << "Введите минимальный диапазон элементов массива" << endl;
                std::cin >> min;
                std::cout << endl;
                for (int i = 0; i < size; i++) {
                    array[i] = min + rand() %256;
                }
                break; 
            case 3:
                array = new int[1000];
                size = 1000;
                std::cout << "Введите минимальный диапазон элементов массива" << endl;
                std::cin >> min;
                std::cout << endl;
                for (int i = 0; i < size; i++) {
                    array[i] = min + rand() %256;
                }
                break;
            case 4:
                array = new int[10000];
                size = 10000;
                std::cout << "Введите минимальный диапазон элементов массива" << endl;
                std::cin >> min;
                std::cout << endl;
                for (int i = 0; i < size; i++) {
                    array[i] = min + rand() % 256;
                }
                break;
            case 5:
                array = new int[100000];
                size = 100000;
                std::cout << "Введите минимальный диапазон элементов массива" << endl;
                std::cin >> min;
                std::cout << endl;
                for (int i = 0; i < size; i++) {
                    array[i] = min + rand() %256;
                }
                break;
            }
        }
        if (numb == 2) {
            int l;
            std::cout << "Массив в первоначальном виде: " << endl;
            //printArray(array, n);
            std::cout << "Выберите способ сортировки :" << endl;
            std::cout << "1. Сортировка подсчётом" << endl;
            std::cout << "2. Быстрая сортировка" << endl;
            std::cout << "3. Сортировка вставками" << endl;
            std::cout << "4. Глупая сортировка" << endl;
            std::cin >> l;
            std::cout << endl;
            switch (l)
            {
            case 1:
                start = clock()/CLK_TCK;
                countingSort(array, size);
                end = clock() / CLK_TCK;
                time = end - start;
                cout << "Время затраченое на сортировку: " << time << endl;
                break;
            case 2:
                start = clock() ;
                quickSort(array, 0, size);
                end = clock() ;
                time = end - start;
                cout << "Время затраченое на сортировку: " << time << endl;
                break;
            case 3:
                start = clock();
                insertSort(array, size);
                end = clock();
                time = end - start;
                cout << "Время затраченое на сортировку: " << time << endl;
                break;
            case 4:
                start = clock() / CLK_TCK;
                bogosort(array, size);
                end = clock() / CLK_TCK;
                time = end - start;
                cout << "Время затраченое на сортировку: " << time << endl;
                break;
            }
        }
        if (numb == 3) {
            int search;
            int index;
            std::cout << "Введите элемент который хотите найти" << endl;
            std::cin >> search;
            index = binarysearch(array, size, search);
            std::cout << "Индекс искомого элемента: " << index << endl;
        }
        if (numb == 4) {
            printArray(array, size);
        }
        if (numb == 0) {
            return 0;
        }
    }
}