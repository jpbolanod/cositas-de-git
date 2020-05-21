#include <iostream>
using namespace std;

int factorial(int i);

int main(){
    cout << "Introduce el numero al que le quieres calcular su factorial"<<endl;
    int i;
    cin >> i;
    cout<< "El factorial de "<<i<<" es igual a: "<<factorial(i)<<endl;
    
    return 0;
}
int factorial(int n){
    if ((n==0))
      return 1;
   else{
      return n*factorial(n-1); 
   }
      
}