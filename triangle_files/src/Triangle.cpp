#include<cmath>
#include"include/Triangle.h"

float Triangle::getPerimeter() {
    return sideA + sideB + sideC;
}
float Triangle::getArea() {
    float perimeter = (sideA + sideB + sideC);
    float semiPermimeter = perimeter/2;
    // Calculate area
    return sqrt(semiPermimeter*(semiPermimeter-sideA)*(semiPermimeter-sideB) * (semiPermimeter-sideC));
}

bool Triangle::largerThan(Triangle t2) {
    return this->getArea() > t2.getArea();
}
// Static function
// Determining the size of an array can be tedious, 
// so we ask for the size directly
Triangle Triangle::findLargest(Triangle triangles[], int size) {
    Triangle largest = triangles[0];
    for (int i = 1; i < size; i++) {
        if(triangles[i].largerThan(largest)) 
            largest = triangles[i];
    }
    return largest;
}
Triangle::Triangle()
{
    sideA = 10;
    sideB = 10;
    sideC = 10;
}
Triangle::Triangle(float sideA, float b, float c) {
    this->sideA = sideA;
    sideB = b;
    sideC = c;
}


Triangle::~Triangle()
{
}
