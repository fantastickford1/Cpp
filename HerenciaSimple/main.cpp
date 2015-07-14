/* 
 * File:   main.cpp
 * Author: Karlos
 *
 * Created on July 10, 2015, 2:23 PM
 */

#include <cstdlib>
#include <iostream>
#include "Cuadrado.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include "Equilatero.h"
#include "Isoceles.h"
#include "Escaleno.h"

using namespace std;

int main(int argc, char const *argv[]) {
    
    double x = 2.32;
    
    Cuadrado c(5);
    Circulo ci(&x);
    Rectangulo rec(10, 5);
    Equilatero equi(6, 3);
    Isosceles iso(6,4,7);
    Escaleno esc(8, 10, 12, 5);
    
    
    cout << "El area del cuadrado es de " << c.getArea()<< endl;
    cout <<"El perimetro del cuadrado es de "<< c.getPerimetro()<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<"El area del circulo es de "<< ci.getArea()<<endl;
    cout <<"El perimetro del circulo es de "<< ci.getPerimetro()<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<"El area del Rectangulo es de "<<rec.getArea()<<endl;
    cout <<"El perimetro del Rectangulo es de "<<rec.getPerimetro()<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<"El area del Equilatero es de "<<equi.getArea()<<endl;
    cout <<"El perimetro del Equilatero es de "<<equi.getPerimetro()<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<"El area del Isosceles es de "<<iso.getArea()<<endl;
    cout <<"El perimetro del Isosceles es de "<<iso.getPerimetro()<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<"El area del Escaleno es de "<<esc.getArea()<<endl;
    cout <<"El perimetro del Escaleno es de "<<esc.getPerimetro()<<endl;
    cout <<"--------------------------------"<<endl;
    
  
  
    
    
    return 0;
}