/* 
 * File:   Triangulo.h
 * Author: Karlos
 *
 * Created on July 11, 2015, 7:54 PM
 */

class Equilatero:Figura {
private:
  int area;
  int perimetro;
  double base;
  double altura;
public:
  
  Equilatero();
  Equilatero(double b, double a);
  ~Equilatero();
  
  double getArea(){
    area= (base*altura)/2;
    return area;
  }
  
  double getPerimetro(){
    perimetro=3*base;
    return perimetro;
  }
  
};


Equilatero:: Equilatero(){
  area=0;
  perimetro=0;
  base=0;
  altura=0;
}

Equilatero:: Equilatero(double b, double a){
  base= b;
  altura= a;
}

Equilatero:: ~Equilatero(){
}