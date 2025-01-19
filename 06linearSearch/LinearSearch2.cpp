#include <iostream>
using namespace std;

int LinearSearch(int *arr, int n, int target) {
    for (int i = 0;  i<n ; i++ ){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main() {
   
    int arr[] = {10, 20, 30, 40, 50};
    
   
    int n = sizeof(arr) / sizeof(int); //5;
    
  
    cout << "Index of target: " << LinearSearch(arr, n, 30) << endl;
}
