/*
Input:  { 4, 2, -3, -1, 0, 4 }   
Subarrays with zero-sum are   
{ -3, -1, 0, 4 } { 0 }    

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 
Subarrays with zero-sum are   
{ 3, 4, -7 } 
{ 4, -7, 3 } 
{ -7, 3, 1, 3 } 
{ 3, 1, -4 } 
{ 3, 1, 3, 1, -4, -2, -2 } 
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 
*/

#include <iostream>
#include <bits/stdc++.h>

int main(){
 //int arr[] = {4, 2, -3, -1, 0, 4};
 int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
 int n = sizeof(arr)/sizeof(arr[0]);
 
 //metode brute-force
 for(int i=0; i < n; i++){
 int sum = 0;
 {
    for(int j=i; j < n;j++){
        sum += arr[j];
        if(sum == 0){
            std::cout << "Subarr [" << arr[i] << "..." <<arr[j] <<" ]\n";
        }
    }
 }
 }

}