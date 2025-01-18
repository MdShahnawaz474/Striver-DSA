#include <iostream>
using namespace std;

int OddEven(int a ){
    if(a %2 == 0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int isEven = OddEven(5);
    cout << "Is even " << isEven;
}