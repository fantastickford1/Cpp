/* 
 * File:   Rectangulo.h
 * Author: Karlos
 *
 * Created on July 11, 2015, 7:36 PM
 */

class Rectangulo:Figura{
    private:
        double area;
        double perimetro;
        double heigh;
        double wigth;
    public:
        
        Rectangulo();
        Rectangulo(double h, double w);
        ~Rectangulo();
        
        
        double getArea(){
            area = heigh*wigth;
            return area;
        }
        
        double getPerimetro(){
            perimetro = (heigh*2) + (wigth*2);
            return perimetro;
        }
};

Rectangulo::Rectangulo(){
    area=0;
    perimetro=0;
    heigh=0;
    wigth=0;
}

Rectangulo::Rectangulo(double h, double w){
    heigh=h;
    wigth=w;
}

Rectangulo::~Rectangulo(){
}





