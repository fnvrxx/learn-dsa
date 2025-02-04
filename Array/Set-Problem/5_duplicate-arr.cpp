/*
Given an integer array, find the largest subarray formed by consecutive integers. 
The subarray should contain all distinct values.
Input:  { 2, 0, 2, 1, 4, 3, 1, 0 }  
Output: The largest subarray is { 0, 2, 1, 4, 3 } 
*/
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool isDuplicate(int arr[],int start,int end){
    unordered_set<int> set(arr+start,arr+end+1);
    int min = *min_element(arr + start, arr + end+1);
    int max = *max_element(arr + start, arr + end+1);
    return set.size() == (end - start + 1) && (max-min+1 == set.size());
}

int main(){
    int arr[] ={2,0,2,1,4,3,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int maxlength = 0;
    int start_index = 0;
    for (int i=0;i < n; i++){
        for (int j=i+1; j<n; j++){
            if(isDuplicate(arr,i,j)){
                int length = j-i+1;
                if(length > maxlength){
                    maxlength = length;
                    start_index = i;
                }
            }
        }
    }
    // Print the result
    cout << "The largest subarray is: { ";
    for (int i = start_index; i < start_index + maxlength; i++) {
        cout << arr[i] << (i < start_index + maxlength - 1 ? ", " : " ");
    }
    cout << "}" << endl;

    return 0;    
}