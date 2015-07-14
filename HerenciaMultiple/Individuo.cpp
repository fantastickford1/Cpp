/* 
 * File:   Individuo.cpp
 * Author: Karlos
 * 
 * Created on July 12, 2015, 12:06 PM
 */

#include "Empleado.h"
#include "Individuo.h"
#include "Trabajo.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

void Individuo::setNombre(string* n){
  nombrepnt = n;
}

void Individuo::getNombre(){
  cout << "Nombre: " <<*nombrepnt<< endl;
}

void Individuo::setEdad(int* e){
  edadpnt = e;
}

void Individuo::getEdad(){
    cout << "Edad: " <<*edadpnt<< endl;
}

void Individuo::setSexo(string* s){
  sexopnt = s;
}
void Individuo::getSexo(){
    cout << "Sexo: " <<*sexopnt<< endl;
}
Individuo::Individuo(){
  nombre=" ";
  edad= 0;
  sexo= " ";
}
Individuo::~Individuo(){
  delete edadpnt;
  delete nombrepnt;
  delete sexopnt;
}
