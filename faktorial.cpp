#include <iostream>
using namespace std;

int rekursif(int n){
    if (n <= 1){
        return 1;
    }
    else{
        return n * rekursif(n-1);
    }
}

int main(){
    int a = 3;
    //cin >> a;
    cout << rekursif(a);
}