/*
https://www.techiedelight.com/check-subarray-with-0-sum-exists-not/
Given an integer array, check if it contains a subarray having zero-sum.
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 
 Output: Subarray with zero-sum exists   
 The subarrays with a sum of 0 are:   
 { 3, 4, -7 } 
 { 4, -7, 3 } 
 { -7, 3, 1, 3 } 
 { 3, 1, -4 } 
 { 3, 1, 3, 1, -4, -2, -2 } 
 { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Metode hashing
/*
An unordered_set is an unordered associative 
container implemented using a hash table where keys are hashed 
into indices of a hash table so that the insertion is always randomized. 
*/

bool hasZeroSumSubarr(int nums[],int n){
    // create an empty set to store the sum of elements of each
    // subarray `nums[0…i]`, where `0 <= i < n` using unordered_set<>
    unordered_set<int> set;
}
int main(){
    int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Metode Brute-force 
    // int sum = 0;
    // for(int i=0;i < n; i++){
    //     for(int j=0; j < n;j++){
    //         if(i != j){
    //             sum += arr[j];
    //         }
    //     }
    // }
    // if(sum == 0){
    //     cout << "subarray exist ";
    // }
    // else{
    //     cout << "Subarray with zero-sum does not exist" << endl;
    // }
    // return 0;
}