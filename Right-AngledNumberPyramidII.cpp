#include <iostream>
using namespace std;

void printPyarmid(int n){
    for (int i = 0; i <=n; i ++){
        for (int j = 0; j<=i; j++){
            cout << i <<"";
        }
        cout<< endl;
    }
}

int main (){
    int n ;
    cin >> n;
    printPyarmid(n);
}

// Output 
// 0
// 11
// 222
// 3333
// 44444
// 555555
