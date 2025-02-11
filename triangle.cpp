#include<cmath>
#include<iostream>
using namespace std;
class Coordinates {
    public:
        int coordX;
        int coordY;
        Coordinates(): coordX(1), coordY(5){}
        Coordinates(int x, int y) {
            coordX = x;
            coordY = y;
        }
        int getX() {return coordX;}
        int getY() {return coordY;}
};


class Triangle {
private:
    /* data */
    double sideA;
    double sideB;
    double sideC;
    Coordinates coordinates;
    double getSemiPerimeter();
public:
    double perimiter;
    Triangle(double sideA, double sideB, double sideC);
    Triangle(): Triangle(10,10,10) {
        perimiter = sideA+sideB+sideC;
    }
    ~Triangle();
    double getSideA() {return this->sideA;}
    double getSideB() {return this->sideB;}
    double getSideC() {return this->sideC;}
    void setSideA(double sideA) {this->sideA = sideA;}
    void setSideB(double B) {this->sideB = B;}
    void setSideC(double C){this->sideC = C;}
    double getArea();
    static bool isLargest(Triangle t1, Triangle t2);
    Coordinates getCoordinates() { return coordinates;}
    double anotherOne;
};

// Triangle::Triangle()
// {
//     this->sideA = 10;
//     this->sideB = 10;
//     this->sideC = 10;
// }
Triangle::Triangle(double sideA, double sideB, double sideC) {
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->coordinates = Coordinates(9, 10);
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

// int sum(int a, int b) { return a+b;}
int sum(Triangle &t1, Triangle &t2) {
    t1.setSideA(25);
    return t1.getArea() + t2.getArea();
}

Triangle sumTriangles(Triangle t1, Triangle t2) {
    double newSideA = t1.getSideA() + t2.getSideB();
    return Triangle(newSideA, 
                    t1.getSideB() + t2.getSideB(),
                    t1.getSideC() + t2.getSideC());
}

/*
    Return if t1 is larger than t2
*/
bool Triangle::isLargest(Triangle t1, Triangle t2) {
    double result = t1.getArea() - t2.getArea();
    
    return (result > 0) ? 1: 0;

}

int main() {
    Triangle T1 = Triangle();
    Triangle T2 = Triangle(3, 3, 3);
    cout << "Sum" << sum(T1, T2) << endl;
    cout << "side A T1: " << T1.getSideA() << endl;
    cout << "side B T1: " << T1.getSideB()<< endl;
    cout << "side C T1: " << T1.getSideC()<< endl;
    cout << "Perimeter: " << T1.perimiter << endl;

    cout << "side A T2: " << T2.getSideA()<< endl;
    cout << "side B T2: " << T2.getSideB()<< endl;
    cout << "side C T2: " << T2.getSideC()<< endl;


    Triangle T3 = sumTriangles(T1, T2);
    cout << "side A T3: " << T3.getSideA()<< endl;
    cout << "side B T3: " << T3.getSideB()<< endl;
    cout << "side C T3: " << T3.getSideC()<< endl;

    Coordinates c = T3.getCoordinates();
    c.getX();



    Triangle::isLargest(T1, T2);



}