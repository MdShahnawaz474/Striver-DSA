#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key) {
   for( int i =0; i<n ; i++ ){
    if(arr[i]== key){
        return i;
    }
   }
return -1;
}

int main() {
    int arr[] = {5, 7, 12, 19, 21, 33};
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Index of 12: " << LinearSearch(arr, n, 12) << endl;
}
