#include <iostream>
#include <bits/stdc++.h>

 bool canAliceWin(std::vector<int>& nums) {
        int a = 0;
        int b = 0;
        for(int x : nums){
            if (x < 10){
                a += x;
            }
            else{
                b += x;
            }
        }
        if (a == b)
            return false;
        else
            return true;
};
int main(){
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(14);

    //0 = false;
    //1 = true;

    std::cout << canAliceWin(vect);
    
    return 0;
}