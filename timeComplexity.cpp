#include <iostream>
using namespace std;


// int main(){
//     for (int i = 0; i <=2; i++)
//     {
//          cout << "Hii from outer loop";
//       for (int j  = 0; j <=2; j++)
//       {
//        cout << "Hi from inner loop" << endl;
//       }
     

//     }
    
// };


int main(){
    for (int i = 0; i <=2 ; i++){
        cout << "hi from outer loop" <<  endl;
        for (int j =0 ; j<=i ; j++ ){
            cout << "Hi from inner loop" << endl ;
        }
    }
}