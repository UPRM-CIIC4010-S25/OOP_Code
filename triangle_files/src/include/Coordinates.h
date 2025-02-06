#ifndef COORDINATES_H
#define COORDINATES_H

class Coordinates
{
private:
    /* data */
    float x;
    float y;
public:
    Coordinates(float x=5, float y=5);
    ~Coordinates();
    float getX();
    float getY();
    void swapCoordinates();
};
#endif
