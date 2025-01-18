#include <iostream>
using namespace std;
 
 int product(int a , int  b){
    int total = a *b;
    return total;
 }
 int main(){
    int totalProduct = product(5,4);
    cout << "total product " << totalProduct << endl;
 }