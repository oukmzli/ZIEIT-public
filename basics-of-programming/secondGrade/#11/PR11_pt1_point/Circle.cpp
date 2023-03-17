#include "Circle.hpp"
bool circleCross(Circle a, Circle b) {
    if ((a.radius + b.radius) < getDistance(a.point, b.point)) return false;
    else if (a.radius + getDistance(a.point, b.point) < b.radius || b.radius + getDistance(a.point, b.point) < a.radius) return false;
    return true;
}
