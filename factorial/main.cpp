#include <iostream>
using namespace std;


int suma(int i, int j); // Esta funcion existe. Busquela

int main(){
    int n = 3, a = 5;
    
    //cout << n <<endl;
    //if( n != a){
      //  n--;
    //}
    //cout << n << endl;
    //for( n=3; n < 10; n+=2,a--){
      //  cout<< n<< " , " << a << endl;
        //if( a== 3){
          //  cout << "a == 3, huyan!" << endl;
            //break;
        //}
    //}
    //while(n < 100){
      //  cout << n << " ";
        //n++;
    //}
    //do{
      //  cout << n << " ";
        //n++;
    //}
    int b = suma(n,a);
    cout << b << endl;
    return 0;
}

int suma(int i, int j){
    return i + j;
}