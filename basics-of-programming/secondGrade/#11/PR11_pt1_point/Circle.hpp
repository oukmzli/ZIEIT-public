#ifndef Circle_hpp
#define Circle_hpp
#include "Point.hpp"
struct Circle {
    Point point;
    int radius;
};
bool circleCross(Circle a, Circle b);
#endif
