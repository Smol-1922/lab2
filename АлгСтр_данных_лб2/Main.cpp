#include<iostream>
#include"functions.h"
#include <cstdlib>
#include<Windows.h>
#include<ctime>
int main()
{
    SetConsoleOutputCP(1251);
    int* array;
    char* arraychar= new char;
    array = new int;
    int min, numb=1, numb1, size;
    float start, end,time;
    bool flag = false;
    for (;;) {
        if (flag) {
            std::cout << "1. ������� ������ " << endl;
            std::cout << "2. ������������� " << endl;
            std::cout << "3. ����� �������" << endl;
            std::cout << "4. ������� ������" << endl;
            std::cout << "0. ��������� ���������� ���������" << endl;
            std::cin >> numb;
        }
        flag = true;
        if (numb == 1) {
            std::cout << "�������� ����� �������:" << endl;
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
                break;
            case 2: 
                array = new int[100];
                size = 100;
                break; 
            case 3:
                array = new int[1000];
                size = 1000;
                break;
            case 4:
                array = new int[10000];
                size = 10000;
                break;
            case 5:
                array = new int[100000];
                size = 100000;
                break;
            }
            std::cout << "������� ����������� �������� ��������� �������" << endl;
            std::cin >> min;
            for (int i = 0; i < size; i++) {
                array[i] = min + rand() % 256;
            }
            for (int i = 0; i < size; i++) {
                arraychar[i] = min + rand() % 256;
            }
        }

        if (numb == 2) {
            int l;
            std::cout << "������ � �������������� ����: " << endl;
            std::cout << "�������� ������ ���������� :" << endl;
            std::cout << "1. ���������� ���������" << endl;
            std::cout << "2. ������� ����������" << endl;
            std::cout << "3. ���������� ���������" << endl;
            std::cout << "4. ������ ����������" << endl;
            std::cin >> l;
            std::cout << endl;
            switch (l)
            {
            case 1:
                start = clock() / CLK_TCK;
                countingSort(arraychar, size);
                end = clock() / CLK_TCK;
                time = end - start;
                std::cout << "����� ���������� �� ����������: " << time << endl;
                break;
            case 2:
                start = clock();
                quickSort(array, 0, size);
                end = clock();
                time = end - start;
                std::cout << "����� ���������� �� ����������: " << time << endl;
                break;
            case 3:
                start = clock();
                insertSort(array, size);
                end = clock();
                time = end - start;
                std::cout << "����� ���������� �� ����������: " << time << endl;
                break;
            case 4:
                start = clock() / CLK_TCK;
                bogosort(array, size);
                end = clock() / CLK_TCK;
                time = end - start;
                std::cout << "����� ���������� �� ����������: " << time << endl;
                break;
            }
        }
        if (numb == 3) {
            int search;
            int index;
            std::cout << "������� ������� ������� ������ �����" << endl;
            std::cin >> search;
            index = binarysearch(array, size, search);
            std::cout << "������ �������� ��������: " << index << endl;
        }
        if (numb == 4) {
            printArray(array, size);
        }
        if (numb == 0) {
            return 0;
        }
    }
}