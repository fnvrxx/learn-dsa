/*
Consider LA is a linear array with N elements and K is a positive integer such that K<=N.
Following is the algorithm to update an element available at the Kth position of LA.

1. Start
2. Set LA[K-1] = ITEM
3. Stop

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int LA[] = {1,2,3,4};
    int N = sizeof(LA)/sizeof(LA[0]);
    int k = 3;
    int item = 10;
    int i,j;
    cout << "The original array elements item:\n";
    for(i = 0 ; i < N; i++){
        cout << LA[i] << " ";
    }
    LA[k-1] = item;
    cout << "\n\nThe updated array elements item:\n";
    for(i = 0 ; i < N; i++){
        cout << LA[i] << " ";
    }
    return 0;
}