#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
// Alokasi memori untuk sebuah integer
    int* ptr = (int*)malloc(sizeof(int));

    // Memeriksa apakah alokasi berhasil
    if (ptr == nullptr) {
        std::cout << "Alokasi memori gagal!" << std::endl;
        return 1;
    }

    // Mengisi nilai ke dalam memori yang dialokasikan
    *ptr = 100;
    std::cout << "Nilai: " << *ptr << std::endl;

    // Membebaskan memori
    free(ptr);

    return 0;
}