/*
Definiton:
Searching an element in the array using a key;
 The key element sequentially compares every value in the array 
 to check if the key is present in the array or not.
*/

/*
Algorithm
1. Start
2. Set J = 0
3. Repeat steps 4 and 5 while J < N
4. IF LA[J] is equal ITEM THEN GOTO STEP 6
5. Set J = J +1
6. PRINT J, ITEM
7. Stop
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[] = {1,3,5,7,8};
    int item =2 , n = 5;
    int i = 0, j = 0;

    printf("Original:\n");
    for(i=0; i < n ; i++){
        cout << "a["<<i << "]" << ":" << a[i]<< endl;
    }
    for(i =0; i < n; i++){
        if(a[i] == item){
            cout << "Element found at index: " << i << endl;
        }
    }
}