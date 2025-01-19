#include  <iostream>
using namespace  std;


int LinearSearch(int *arr , int n ,  int key){
    for(int i =0; i<n ;  i++){
        if(arr[i] == key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr []= {1,2,3,45,5,};
    int n = sizeof(arr) / sizeof(int);
    
    cout << LinearSearch(arr, n,5)<<endl;

}