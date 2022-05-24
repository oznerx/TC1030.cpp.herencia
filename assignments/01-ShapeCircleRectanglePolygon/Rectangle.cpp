#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape{}
{
}

Rectangle::Rectangle(int ancho , int alto) : Shape{ancho,alto}{
    this-> ancho = ancho;
    this-> alto = alto;
}

int Rectangle :: getAlto(){
    return alto;
}

int Rectangle :: getAncho(){
    return ancho;
}