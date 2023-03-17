#include "volume.hpp"

float calc(Volume room) {
    return room.x * room.y * room.z;
}

void comprasion (Volume a, Volume b, Volume c) {
    if (calc(a) > calc(b) && calc(a) > calc(c)) {
        cout << "Largest room is Room #1" << endl;
    } else if (calc(b) > calc(a) && calc(b) > calc(c)) {
        cout << "Largest room is Room #2" << endl;
    } else if (calc(c) > calc(a) && calc(c) > calc(b)){
        cout << "Largest room is Room #3" << endl;
    } else {
        cout << "Rooms are equal." << endl;
    }
}
