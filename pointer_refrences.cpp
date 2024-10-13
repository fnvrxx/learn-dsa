#include <iostream>
using namespace std;

/*
Pointer digunakan untuk menyimpan alamat memory ke variabel yang lain!
saat references di deklarasikan, maka variabel yang ada tersebut menjadi sebuah variabel(?)
ada 3 tipe:
pass-by-value
pass-by-reference
pass-by-pointer
*/
int main(){
    int ptr = 100;
    int* hasil = &ptr;

    cout << "hasil:" << hasil << endl;//menghasilkan nilai memory 0x16f9befb8
    cout << "hasil:" << *hasil;//menghasilkan nilai asli
    return 0;
}