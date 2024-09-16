#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
Algorithm insert array
1. Start
2. Create an Array of a desired datatype and size.
3. Initialize a variable 'i' as 0.
4. Enter the element at ith index of the array.
5. Increment i by 1.
6. Repeat Steps 4 & 5 until the end of the array.
7. Stop
*/
int main(){
    int p;
    cout << "Enter length: ";
    cin >> p;
    vector<int> a(p);
 cout << "Before Insertion" << endl;
 int i;
 for(i = 0; i < p; i++){
    cout << a[i] << " ";
 }
cout << endl;
 cout << "after insertion" << endl;
for(i = 0; i < p; i++){
    a[i] = i +0;
    cout << a[i] << " ";
}
}