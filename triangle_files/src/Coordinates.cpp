#include<iostream>
#include <string>
#include "include/Coordinates.h"

using namespace std;

float Coordinates::getX(){
    return x;
}
float Coordinates::getY() {
    return y;
}
Coordinates::~Coordinates(){
    cout << "The coordinates are gone :(\n";
}
void Coordinates::swapCoordinates() {
    float temp = x;
    x = y;
    y = temp;
}
