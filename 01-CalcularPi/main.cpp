#include<iostream>
#include <iomanip>
using namespace std;



  double pi() 				                                                 //Crear una funcion pi para realizar el programa
  {
            double n= 1;
	    double g= 0;           							 //Inserto variables.
	    double x= 1;
            double d= 0;
    while(g<=(0.7853980) || g>=(0.7853981)){ 						 //Genero un while para repetir la sumatoria una determinada cantidad de veces.
	  d= 2*n-1;	                                                                 //Con un rango de valor determinado para que me devuelva pi/4
  	g =  g + x*(1/d);								 //Realizo el calculo con la serie de Liebniz.
  	x *= -1; 									 //Cambio el signo de la sumatoria.
    n++; 	                                                                         //Aumento valor en n.
                     }
    g= g*4;                                                                              //Multiplico por 4 ya que la serie de liebniz me da pi/4.
    return g;
  }  
  int main()
  {
 											  //Llamo a mi funcion
  cout<<"el numero pi es igual a "<<setprecision(7)<<pi(); 				  //Utilizo setprecision(7) para utilizar el valor fijo de decimales. 
                                                                                    
  return 0;                                                                               //Finalizo el programa
  } 
