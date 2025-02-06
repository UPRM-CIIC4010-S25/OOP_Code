#include<iostream>
#include<math.h>

using namespace std;

float getSemiPerimiter(float A, float B, float C) {
    return (A + B + C) / 2;
}
float getArea(float A, float B, float C) {
    cout << "Side A is " << A << " Side B is " << B << " Side C is " << C;
    float s = getSemiPerimiter(A, B, C);
    float area = sqrt(s * (s - A) * (s - B) * (s - C));
    cout << "\nThe area for triangle (" << A << ", " << B << ", " << C << ") is: " << area << endl;
    return area;
}


int main() {
    // Data stored in variables
    float sideA=10, sideB =10, sideC=10;
    // Use of functions to get the job done
    float area1 = getArea(sideA, sideB, sideC);

    // Now lets do it again for a second triangle
    float sideA2 = 5, sideB2 = 5, sideC2 = 5;
    float area2 = getArea(sideA2, sideB2, sideC2);

    cout << "Is triangle 1 larger than triangle 2? " << (area1 > area2) << endl;
    // What happens if we want to do this for more tirangles?
    // Is it ideal to keep creating variables for each distict triangle?
    return 0;
}