/* 
 * File:   Cuadrado.h
 * Author: Karlos
 *
 * Created on July 11, 2015, 7:03 PM
 */
#include "Figura.h"

class Cuadrado: public Figura{
private:
  double lado;
  double area;
  double perimetro;
public:
  Cuadrado ();
  Cuadrado (double l);
  ~Cuadrado ();
  
  double getArea(){
      area = lado * lado;
      return area;
  }
  
  double getPerimetro(){
      perimetro = lado*4;
      return perimetro;
  }
};

Cuadrado::Cuadrado(){
    lado=0;
    area=0;
    perimetro=0;    
}

Cuadrado::Cuadrado(double l){
    lado=l;
}

Cuadrado::~Cuadrado(){
}
