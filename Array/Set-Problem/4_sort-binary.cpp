/*
Given a binary array, sort it in linear time and constant space. 
The output should print all zeros, followed by all ones.
Input:  { 1, 0, 1, 0, 1, 0, 0, 1 }
Output: { 0, 0, 0, 0, 1, 1, 1, 1 } 
*/
#include <iostream>
#include <bits/stdc++.h>


void SortLinear(int a[] , int n){
    int nol = 0;
    for(int i=0; i < n; i++){
        if(a[i] == 0){
            nol++;
        }
    }
    int k = 0;
    while(nol--){
        a[k++] = 0;
    }
    while(k < n){
        a[k++] = 1;
    }
}

int main()
{
    int  a[] = {1,0,1,0,1,0,0,1};
    
    int n = sizeof(a)/sizeof(a[0]);
    std::cout << "Sebelum di sort:\n" ;
    for (int i =0;i < n ; i++){
        printf("%d ",a[i]);
    }
    std::cout << "\nSetelah di sort:\n";
    SortLinear(a,n);
    for (int i=0; i < n;i++){
        std::cout << a[i] << " ";
    }
    return 0;
}