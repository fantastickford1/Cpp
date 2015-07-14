/* 
 * File:   Empleado.cpp
 * Author: Karlos
 * 
 * Created on July 12, 2015, 12:56 PM
 */

#include "Empleado.h"
#include "Individuo.h"
#include "Trabajo.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

Empleado::Empleado(){
    aguinaldo=0;
    cfiscal=" ";
}
Empleado::~Empleado(){
    
}
void Empleado::getAguinaldo(){
    cout<<"El aguinaldo es: "<<*aguinaldopnt<<endl;
}
void Empleado::getCFiscal(){
    cout<<"El codigo fiscal es : "<<*cfiscalpnt<<endl;
}
void Empleado::getSeguro(){
    cout<<"Tiene seguro: "<<*seguropnt<<endl;
}
void Empleado::setAguinaldo(long* a){
    aguinaldopnt= a;
    
}
void Empleado::setCFiscal(string* cf){
    cfiscalpnt= cf;
    
}
void Empleado::setSeguro(bool* s){
    seguropnt= s;
    
}



