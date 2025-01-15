#include <iostream>
using namespace std;
void printnumber(int n ){
    int start = 0;
    for (int i =0 ; i <=n; i++){
        if(1%2== 0 ) start
         = 1; 
         else start =0;
          for(int j =0 ; j<=i; j++){
            cout << start;
            start =1 -start;
          }  
    cout << endl;
    }
}
int  main (){
    int n = 5;
    cin >> n;
    printnumber(n);
}


// output :- 
// 0
// 01
// 010
// 0101
// 01010
// 010101
