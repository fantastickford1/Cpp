/* 
 * File:   Trabajo.cpp
 * Author: Karlos
 * 
 * Created on July 12, 2015, 12:11 PM
 */

#include "Empleado.h"
#include "Individuo.h"
#include "Trabajo.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


void Trabajo::getPuesto(){
    cout<<"El puesto es: "<<*puestopnt<<endl;
}
void Trabajo::getSueldo(){
    cout<<"El sueldo es: "<<*sueldopnt<<endl;
}
void Trabajo::setPuesto(string* p){
    puestopnt= p;
    
    
}

void Trabajo::setSueldo(long* s){
    sueldopnt= s;
}

Trabajo::Trabajo() {
    puesto= " ";
    sueldo= 0;
}

Trabajo::~Trabajo() {
    delete sueldopnt;
    delete puestopnt;
}

