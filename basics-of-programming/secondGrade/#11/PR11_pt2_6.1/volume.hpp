#ifndef volume_hpp
#define volume_hpp
#include <stdio.h>
#include <iostream>
using namespace std;
struct Room {
    float x;
    float y;
    float z;
};
float calc(Room a);//обчислення (x*y*z)
void comparison (Room a, Room b, Room c);//порівняння приміщень
#endif
