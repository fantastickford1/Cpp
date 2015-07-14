/* 
 * File:   Circulo.h
 * Author: Karlos
 *
 * Created on July 11, 2015, 7:12 PM
 */
#include <cstdlib>

class Circulo: public Figura{
    private:
        double radio;
        double* radiopointer = &radio;
        double area;
        double perimetro;
        const double pi= 3.1416;
    public:
        Circulo();
        Circulo(double* r);
        ~Circulo();
        
        double getArea(){
            area= pi*(*radiopointer**radiopointer);
            return area;
        }
        
        double getPerimetro(){
            perimetro = pi*(*radiopointer*2);
            return perimetro;
            
        }
   
};

Circulo::Circulo(){
    radio=0;
    area=0;
    perimetro=0;
    
}

Circulo::~Circulo(){
    delete radiopointer;
}

Circulo::Circulo(double* r){
    radiopointer=r;
}

