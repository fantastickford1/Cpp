/* 
 * File:   NewClass.h
 * Author: Karlos
 *
 * Created on July 10, 2015, 2:28 PM
 */
#include <iostream>

class NewClass {
public:
    int lado;
    int area;
    
    NewClass();
    NewClass(int lado);
    ~NewClass();
    
    void getArea(){
        area = lado*lado;
        std::cout << area <<std::endl;
    }
    
    void getArea(int l){
        lado = l;
        area = lado*lado;
        std::cout << area <<std::endl;
    }
};

NewClass::NewClass(){
    lado=0;
    area=0;
}

NewClass::NewClass(int l){
    lado = l;
    area = 0;
}

NewClass::~NewClass(){
    delete lado;
    delete area;
}