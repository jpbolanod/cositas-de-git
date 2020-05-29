#include <iostream>
using namespace std;

double vel(float t, float v){
    return(v-9.8*t);
}

// Finds value of y for a given x using step size h 
// and initial value y0 at x0. 
double * rungeKutta(double t, double dt, double v0, double y0) 
{ 
  
    double k1, k2, k3, k4, k5; 
  
        // Apply Runge Kutta Formulas to find 
        // next value of y 
        k1 = dt*vel(t,v0);
        k2 = dt*vel(t + 0.5*dt, v0);
        k3 = dt*vel(t + 0.5*dt, v0);
        k4 = dt*vel(t + dt,v0);
  
        
        double * y = new double[2];
        y[0] = y0 + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
        y[1] = t + dt;
        return y;
   
} 

 

// Este es un comentario corto