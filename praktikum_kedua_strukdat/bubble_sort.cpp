#include <iostream>
// bubble sort
int main () {

    // making an int array
    int a [] = {4,6,7,3,4,67,3,23,6,8,45,3,6,78,5,};
    // panjang dari array nya (the lenght of the a array)
    int length = sizeof(a) / sizeof(a[0]);

    std::cout << "Array yang belum di urutkan adalah: ";
    for (int i = 0; i < length; i ++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;


    for (int i = 0; i <length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    std::cout << "array yang sudah tersorted adalah: ";
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << " ";
    }
        std::cout << std::endl;


    return 0;
}