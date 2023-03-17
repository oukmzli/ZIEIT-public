#include "Point.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace std;
int main() {
    Point pointOne;
    Point pointTwo;
    cout << "Enter coordinates of first point." << endl;
    cout << "x: "; cin >> pointOne.x;
    cout << "y: "; cin >> pointOne.y;
    cout << "Enter coordinates of second point." << endl;
    cout << "x: "; cin >> pointTwo.x;
    cout << "y: "; cin >> pointTwo.y;
    cout << "Distance between points is " << getDistance(pointOne, pointTwo) << endl;
    
    Circle circleOne;
    Circle circleTwo;
    circleOne.point = pointOne;
    circleTwo.point = pointTwo;
    cout << "Radius of first circle: "; cin >> circleOne.radius;
    cout << "Radius of second circle: "; cin >> circleTwo.radius;
    
    if (circleCross(circleOne, circleTwo) == false) {
        cout << "Circles aren't cross." << endl;
    } else cout << "Circles are cross." << endl;
    
    return 0;
}
