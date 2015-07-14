/* 
 * File:   Trabajo.h
 * Author: Karlos
 *
 * Created on July 12, 2015, 12:11 PM
 */

#ifndef TRABAJO_H
#define	TRABAJO_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Trabajo {
public:
    Trabajo();
   ~Trabajo();
   void setPuesto(string* p);
   void getPuesto();
   void setSueldo(long* s);
   void getSueldo();
private:
    string puesto;
    string* puestopnt= &puesto;
    long sueldo;
    long* sueldopnt= &sueldo;

};

#endif	/* TRABAJO_H */

