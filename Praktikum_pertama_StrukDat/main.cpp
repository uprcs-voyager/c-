//
// Created by TUF on 9/11/2025.
//
#include <iostream>
int main () {

    std::cout << "Hello World!" << std::endl;
    // int array_nomor[3] = {1, 2, 3 };
    int array_nomor[3];
    array_nomor[0] = 1;
    array_nomor[1] = 2;
    array_nomor[2] = 3;

    // String nama[3] = { "John", "James", "Jack" };
    std::string nama[3];
    nama[0] = "John";
    nama[1] = "James";
    nama[2] = "Jack";

    std::cout << nama[0] <<std::endl;

    // char
    char data1 = 'R';
    std::cout << data1 <<std::endl;

    //string
    std::string data2 = "Lmao";
    std::string data3 = "wkwkwk";
    std::cout << data2[0] << std::endl;

    int data2lenght = data2.length();
    bool checkdata2 = data2.empty();
    std::cout << data2lenght << std::endl;
    std::cout << checkdata2 << std::endl;

    std::string data2Append = data2.append(" pisan");
    std::cout << data2Append << std::endl;
    std::string data2insert = data2.insert(0, "woy ");
    std::cout << data2insert << std::endl;

    bool data2compare = data2.compare(data3);
    std::cout << data2compare;

    return 0;
}