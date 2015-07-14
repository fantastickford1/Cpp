/* 
 * File:   Escaleno.h
 * Author: Karlos
 *
 * Created on July 11, 2015, 11:48 PM
 */


class Escaleno:Figura {
private:
  int area;
  int perimetro;
  double base;
  double altura;
  double lado1;
  double lado2;
public:
  
  Escaleno();
  Escaleno(double b, double a, double l1, double l2);
  ~Escaleno();
  
  double getArea(){
    area= (base*altura)/2;
    return area;
  }
  
  double getPerimetro(){
    perimetro= base+ lado1+ lado2;
    return perimetro;
  }
  
};


Escaleno:: Escaleno(){
  area=0;
  perimetro=0;
  base=0;
  altura=0;
  lado1=0;
  lado2=0;
}

Escaleno:: Escaleno(double b, double a, double l1, double l2){
  base= b;
  altura= a;
  lado1= l1;
  lado2= l2;
}

Escaleno:: ~Escaleno(){
}

