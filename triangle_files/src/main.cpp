#include<iostream>
// Needs to be included so it knows what a Triangle is
#include "include/Triangle.h"

using namespace std;
std::ostream& operator<<(std::ostream& out, const Triangle& triangle) {
    // Since triangle is a constant the methods it can access must be constant as well
    return out << "(" << triangle.getSideA() << ", " << triangle.getSideB() << 
  ", " << triangle.getSideC() << ")" <<std::endl;
}
int main() {
    Triangle t1;
    Triangle t2 = Triangle(5, 2.5, 5);
    Triangle t3 = Triangle(10, 50, 20);
    
    cout << "T1 side " << t1.getSideB() << endl;
    cout << "Area of t1 " << t1.getArea() << endl;
    cout << "Area of t2 " << t2.getArea() << endl;
    cout << "Area of t3 " << t3.getArea() << endl;

    // An array of triangles
    Triangle triangles[] = {t1, t2, t3};
    // Using a static method. Can be accessed through the Triangle
    // class without the need of an instance.
    cout << "Which is the largest triangle: " << Triangle::findLargest(triangles, 3) << endl;

}