//
// Created by TUF on 9/18/2025.
//

#include <iostream>
#include <vector>

int main () {

    std::cout << "Praktikum kedua\n" << std::endl;


    int arrayNomor [3] = {1,2,3};
    std::cout << arrayNomor << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << arrayNomor [i] << std::endl;
    }
    std::cout << std::endl;

    std::vector arrayNomor2 = {2,4,5,6};
    for (int j = 0; j<arrayNomor2.size(); j++ ) {
        std::cout << arrayNomor2 [j] << std::endl;
    }

    std::cout << "\n\nArray  2 dimensi " << std::endl;

    int arrayNomor3 [2][3] = { {1,2,3} ,
                            {4,5,6} };

    std::cout << arrayNomor3 [0][0];
    std::cout << "\n\nMenggunakan for loop untuk mengeprint array 2 dimensi" << std::endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arrayNomor3 [i][j];
        }
        std::cout << std::endl;
    }


        return 0;
}
