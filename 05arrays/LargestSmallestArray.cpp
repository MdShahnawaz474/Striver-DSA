#include <iostream>
using namespace std;

int main (){
    int arr[]= {5,14,4,78,4,78};
    int n = sizeof(arr)/ sizeof(int);
    int max_element = arr[0];
    int smallest_element = arr[0];

    for(int i =1; i< n; i++){
        if(arr[i]>max_element){
            max_element = arr[i];
        }
        if(arr[i]< smallest_element){
            smallest_element = arr[i];
        }

    }
    cout << "Largest = " << max_element << endl;
    cout << "Smallest = " << smallest_element << endl;
}