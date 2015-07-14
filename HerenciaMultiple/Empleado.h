/* 
 * File:   Empleado.h
 * Author: Karlos
 *
 * Created on July 12, 2015, 12:56 PM
 */

#ifndef EMPLEADO_H
#define	EMPLEADO_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "Individuo.h"
#include "Trabajo.h"

using namespace std;


class Empleado: public Individuo, public Trabajo  {
public:
    Empleado();
    ~Empleado();
    void getCFiscal();
    void getSeguro();
    void getAguinaldo();
    void setCFiscal(string* cf);
    void setSeguro(bool* s);
    void setAguinaldo(long* a);
private:
    string cfiscal;
    string* cfiscalpnt= &cfiscal;
    bool seguro;
    bool* seguropnt= &seguro;
    long aguinaldo;
    long* aguinaldopnt= &aguinaldo;
};

#endif	/* EMPLEADO_H */

