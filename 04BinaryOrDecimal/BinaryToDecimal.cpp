
#include <iostream>
using namespace std;

void binaryNum(int binaryNum ){
    int n = binaryNum;
    int decnum = 0;
    int pow = 1;
    while(n>0){
        int lastDig = n % 10;
        decnum += lastDig * pow;
        pow = pow * 2;
        n= n/10;
    }
    cout << decnum << endl;
}

void decimalToBinary(int decNum){
    int n = decNum ;
    int pow =1;
    int binum = 0;
    while(n>0){
        int rem = n%2;
        binum += rem * pow;
        n = n/2;
        pow = pow * 10;
    }
   cout << binum << endl; 
}
int main(){
    // binaryNum(1010);
    decimalToBinary(10);
    return 0;
}
