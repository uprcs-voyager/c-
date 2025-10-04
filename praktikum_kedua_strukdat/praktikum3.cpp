//
// Created by TUF on 9/25/2025.
//

#include <iostream>
#include <vector>

std::vector<int> bubbleSort(std::vector<int> &array) {
    int arraySize = array.size();

    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}

int main () {
    std::vector <int> arrayUnsorted = {5,6,4,7,56, 163, 498, 9367, 267, 937, 7389,764,88};
    std::cout <<   " Array sebelum di sorting " << std::endl;
    for (int i = 0; i < arrayUnsorted.size(); i++) {
        std::cout << arrayUnsorted[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "\n" << std::endl;

    std::vector <int> arraySorted = bubbleSort(arrayUnsorted);
    std::cout <<   " Array setelah di sorting " << std::endl;
    for (int i = 0; i < arraySorted.size(); i++) {
        std::cout << arraySorted[i] << " ";
    }

    return 0;
}