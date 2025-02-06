#include<iostream>

using namespace std;
struct rectangle
    {
        /* data */
        float base;
        float height;
        float getArea() {
            return base * height;
        }

    };
int main() {
    
    rectangle r1 = {10, 15};
    rectangle r2 = {};
    cout << "The base of the rectangle is: " << r1.base << endl;
    cout << "The height of the rectangle is: " << r1.height << endl<<endl;
    
    
    cout << "The base of the rectangle 2 is: " << r2.base << endl;
    cout << "The height of the rectangle 2 is: " << r2.height << endl<< endl;
    // r2 = {12, 13};
    r2.base = 90;
    r2.height = 134;
    cout << "The base of the rectangle 2 is: " << r2.base << endl;
    cout << "The height of the rectangle 2 is: " << r2.height << endl;
}