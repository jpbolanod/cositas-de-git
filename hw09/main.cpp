#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{

  //initialize values

  // State variable X is [position, velocity]
  double y = 8.5 ;
  double t = 0;
  double dt = 0.1;
  while(y>0){
      
      cout<<y<<"  "<<t<<endl;
      y = rungeKutta(t,0.1,20,y)[0];
      t = rungeKutta(t,0.1,20,y)[1];
  }
  return 0;

}