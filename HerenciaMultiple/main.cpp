/* 
 * File:   main.cpp
 * Author: Karlos
 *
 * Created on July 12, 2015, 12:06 PM
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Empleado.h"
#include "Individuo.h"
#include "Trabajo.h"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {

    string name= "Diana";
    int ed= 19;
    string sex= "la femme";
    long sueld= 1000;
    string puest= "tu mami";
    bool segu = true;
    long agn = 14568;
    string cf = "DATM";
    
    
    
    Empleado exm;
    exm.setNombre(&name);
    exm.setEdad(&ed);
    exm.setSexo(&sex);
    exm.setSueldo(&sueld);
    exm.setPuesto(&puest);
    exm.setSeguro(&segu);
    exm.setAguinaldo(&agn);
    exm.setCFiscal(&cf);
    
    exm.getNombre();
    exm.getEdad();
    exm.getSexo();
    exm.getSueldo();
    exm.getPuesto();
    exm.getSeguro();
    exm.getAguinaldo();
    exm.getCFiscal();
    
   
  
  
    return 0;
}

