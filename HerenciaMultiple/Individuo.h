/* 
 * File:   Individuo.h
 * Author: Karlos
 *
 * Created on July 12, 2015, 12:06 PM
 */

#ifndef INDIVIDUO_H
#define	INDIVIDUO_H

using namespace std;
#include <iostream>
#include <cstdlib>
#include <string>

class Individuo {
private:
  string nombre;
  string* nombrepnt = &nombre;
  int edad;
  int* edadpnt = &edad;
  string sexo;
  string* sexopnt = &sexo;
public:
  Individuo();
  ~Individuo();
  void setNombre(string* n);
  void getNombre();
  void setEdad(int* e);
  void getEdad();
  void setSexo(string* s);
  void getSexo();
};

#endif	/* INDIVIDUO_H */

