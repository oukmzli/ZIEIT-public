#include "Point.hpp"
int getDistance(Point a, Point b) {
    int oxSquare = (b.x - a.x)*(b.x - a.x);
    int oySquare = (b.y - a.y)*(b.y - a.y);
    return sqrt(oxSquare+oySquare);
}
