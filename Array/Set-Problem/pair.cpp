/*
https://www.techiedelight.com/find-pair-with-given-sum-array/



Input:   nums = [8, 7, 2, 5, 3, 1] target = 10  Output:   Pair found (8, 2) or Pair found (7, 3)
Input:   nums = [5, 2, 6, 8, 1, 9] target = 12  Output: Pair not found 
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//metode binary-search (sorting)
//n = length
//target = yang kita cari
// []a = untuk array

void findPair(int n, int a[], int target){
    //dilakukan sort dengan menggunakan library
    sort(a,a+n);
    int low = 0;
    int high = n - 1;

    while (low < high){
        int sum = a[low] + a[high];
        if (sum == target){
            cout << "Pair found (" << a[low] << ", " << a[high] << ")";
            return;
        }
        else if (sum < target){
            low++;
        }
        else{
            high--;
        }
    }
    cout << "Pair not found";
}


int main(){
    int a[] = {4, 2, 6, 8, 1, 9};
    int target = 20;
    int result;
    int n = sizeof(a)/sizeof(a[0]);

    findPair(n,a,target);

    // metode brute-force
    // for (int i = 0; i < n; i++){
    //     for (int j = i + 1; j < n; j++){
    //         if (a[i] + a[j] == target){
    //             cout << "Pair found " << a[i] << " + " << a[j] << endl;
    //             break;
    //         }
    //     }
    // printf("not found");
    // break;
    // }

    return 0;
}