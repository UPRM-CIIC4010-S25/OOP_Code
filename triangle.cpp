#include<cmath>
#include<iostream>
using namespace std;
class Triangle {
private:
    /* data */
    double sideA;
    double sideB;
    double sideC;
    double getSemiPerimeter();
public:
    Triangle();
    Triangle(double sideA, double sideB, double sideC);
    ~Triangle();
    double getSideA() {return this->sideA;}
    double getSideB() {return this->sideB;}
    double getSideC() {return this->sideC;}
    void setSideA(double sideA) {this->sideA = sideA;}
    void setSideB(double B) {this->sideB = B;}
    void setSideC(double C){this->sideC = C;}
    double getArea();
    double anotherOne;
};

Triangle::Triangle()
{
    this->sideA = 10;
    this->sideB =10;
    this->sideC = 10;
}
Triangle::Triangle(double sideA, double sideB, double sideC) {
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
}

double Triangle::getSemiPerimeter() {
    return (sideA + sideB + sideC) / 2;
}

double Triangle::getArea() {
    double s = getSemiPerimeter();
    double area = sqrt(s * (s - this->getSideA()) * (s - this->sideB) * (s - sideC));
    return area;
}



Triangle::~Triangle()
{
}


int main() {
    Triangle T1 = Triangle(12, 13, 14);
    Triangle T2 = Triangle(3, 3, 3);


    cout << "side A T1: " << T1.getSideA() << endl;
    cout << "side B T1: " << T1.getSideB()<< endl;
    cout << "side C T1: " << T1.getSideC()<< endl;

    cout << "side A T2: " << T2.getSideA()<< endl;
    cout << "side B T2: " << T2.getSideB()<< endl;
    cout << "side C T2: " << T2.getSideC()<< endl;



}