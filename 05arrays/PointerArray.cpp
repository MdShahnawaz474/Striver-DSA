#include <iostream>
using namespace std;

int main(){
    int a =5;
    int *ptr  = &a;
    cout << ptr << endl;

    int arr[]= {1,2,35,45,8};
    int n = sizeof(arr)/sizeof(int);
    cout << *arr << endl;
    cout << *(arr+1) << endl;

return 0;
}