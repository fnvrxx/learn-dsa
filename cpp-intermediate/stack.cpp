#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> stack;//mendeklarasi vektor dengan nama stack
    //push untuk menambahkan nilai ke element vektro stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    int num = 2 ;
    stack.push(num);

    //pop digunakan untuk mengeluarkan nilai element dari vektor stack
    stack.pop();
    stack.pop();
    //stack.pop();

    while(!stack.empty()){
        cout << stack.top() <<" ";
        stack.pop(); // digunakan untuk mengeluarkan nilai element awal!
    }
    return 0;
}