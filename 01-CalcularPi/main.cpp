//1. Enunciado
//a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
//b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592)

#include<iostream>
#include <iomanip>
using namespace std;

  double pi(double n,double& x,double& g,double& d)                           //crear una funcion pi para realizar el calculo.
  {
    n= 1;
    g= 0;                                                                     // inserto variables.
    x= 1;
    
    while(n<=1000000){                                                        //genero un while para repetir la sumatoria una determinada cantidad de veces.
  	d = 2*n-1;                                                                // valor del denominador.
  	g =  g + x*(1/d);                                                         //realizo el calculo con la serie de Liebniz.
  	x = -x;                                                                   // Cambio el signo de la sumatoria.
    n++;                                                                      //Aumento valor en n.
                     }
                     
    return 1;
  }  
  int main()
  {
  	double n;
  	double x;                                                                 //inserto mismas variables que en mi funcion pi
  	double g;
  	double d;
      
  pi(n, x,  g, d);                                                            //llamo a mi funcion
  cout<<setprecision(7)<<g*4;                                                 //Utilizo setprecision(7) para usar un valor fijo de comas y 
                                                                              //Multiplico por 4 ya que la serie de liebniz me da pi/4.

  return 0;                                                                   // finalizo el programa
  }
