/* 
 * File:   Isoceles.h
 * Author: Karlos
 *
 * Created on July 11, 2015, 11:41 PM
 */

#ifndef ISOCELES_H
#define	ISOCELES_H

class Isosceles:Figura {
private:
  int area;
  int perimetro;
  double base;
  double altura;
  double lado;
public:
  
  Isosceles();
  Isosceles(double b, double a, double l);
  ~Isosceles();
  
  double getArea(){
    area= (base*altura)/2;
    return area;
  }
  
  double getPerimetro(){
    perimetro= (lado * 2)+base;
    return perimetro;
  }
  
};


Isosceles:: Isosceles(){
  area=0;
  perimetro=0;
  base=0;
  altura=0;
  lado=0;
}

Isosceles:: Isosceles(double b, double a, double l){
  base= b;
  altura= a;
  lado= l;
}

Isosceles:: ~Isosceles(){
}

#endif	/* ISOCELES_H */

