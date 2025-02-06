// Checks if Triangle has already been defined
#ifndef TRIANGLE_H
// Defines the Triangle class and stores it in this constant
// Constant usually follows FILENAME_H naming scheme.
#define TRIANGLE_H
class Triangle
{
private:
    /* data */
    float sideA;
    float sideB;
    float sideC;
public:
    Triangle(/* args */);
    Triangle(float a, float b, float c);
    Triangle(float a, float b, float c, float x, float y);
    ~Triangle();
    float getArea();
    float getPerimeter();
    float getSideA()const{
        return sideA;
    }
    float getSideB() const{
        return sideB;
    }
    float getSideC() const{
        return sideC;
    }
    bool largerThan(Triangle t2);
    static Triangle findLargest(Triangle triangles[], int size);
};
#endif