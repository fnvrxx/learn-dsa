#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// misal diberikan array a = {1,2,3}
// ubahlah array a menjadi {3,2,1}

void arrayReverse(int arr[],int n){
    int array[n];
    for(int i = 0; i < n;i++){
        array[i] = arr[n-i-1];
        //swap(arr[i],arr[n - i -1]);
    }
    //reverse
    cout << "\nReverse:" << endl;
    for(int i = 0; i < n;i++){
        cout << array[i] << " ";
    }
};

int main(){
    int a[] = {1,2,3};

    //sizeof = perkalian array dengan byte(4 byte) karena int ukurannya 4 byte
    //sizeof(a) = 3(length) *4 (byte)
    //sizeof(a[0]) = mengembalikan ukuran elemen pertama dari array a
    //sehingga menjadi 4 byte
    //sehingga size = 12/4
    int size = sizeof(a)/sizeof(a[0]);
    cout << "awalnya: \n";
    for(int i = 0; i < size;i++)
    {
        cout << a[i] << " ";
    }
    arrayReverse(a,size);
    return 0;
}